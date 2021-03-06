// **********************************************************************
//
// Copyright (c) 2003-2006 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.1.1
// Generated from file `Current.ice'

#ifndef __Ice_Current_h__
#define __Ice_Current_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/ObjectAdapterF.h>
#include <Ice/ConnectionF.h>
#include <Ice/Identity.h>
#include <Ice/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 301
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

#ifndef ICE_API
#   ifdef ICE_API_EXPORTS
#       define ICE_API ICE_DECLSPEC_EXPORT
#   else
#       define ICE_API ICE_DECLSPEC_IMPORT
#   endif
#endif

namespace IceInternal
{

}

namespace Ice
{

typedef ::std::map< ::std::string, ::std::string> Context;

class __U__Context { };
ICE_API void __write(::IceInternal::BasicStream*, const Context&, __U__Context);
ICE_API void __read(::IceInternal::BasicStream*, Context&, __U__Context);

enum OperationMode
{
    Normal,
    Nonmutating,
    Idempotent
};

ICE_API void __write(::IceInternal::BasicStream*, OperationMode);
ICE_API void __read(::IceInternal::BasicStream*, OperationMode&);

struct Current
{
    ::Ice::ObjectAdapterPtr adapter;
    ::Ice::ConnectionPtr con;
    ::Ice::Identity id;
    ::std::string facet;
    ::std::string operation;
    ::Ice::OperationMode mode;
    ::Ice::Context ctx;
    ::Ice::Int requestId;

    ICE_API bool operator==(const Current&) const;
    ICE_API bool operator!=(const Current&) const;
    ICE_API bool operator<(const Current&) const;
    ICE_API bool operator<=(const Current& __rhs) const
    {
	return operator<(__rhs) || operator==(__rhs);
    }
    ICE_API bool operator>(const Current& __rhs) const
    {
	return !operator<(__rhs) && !operator==(__rhs);
    }
    ICE_API bool operator>=(const Current& __rhs) const
    {
	return !operator<(__rhs);
    }
};

}

#endif
