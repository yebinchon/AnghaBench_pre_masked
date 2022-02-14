
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DBState ;
 char const* FUNC_0 (char*) ;

__attribute__((used)) static const char *
FUNC_1(DBState VAR_0)
{
 switch (VAR_0)
 {
  case 128:
   return FUNC_0("starting up");
  case 131:
   return FUNC_0("shut down");
  case 130:
   return FUNC_0("shut down in recovery");
  case 129:
   return FUNC_0("shutting down");
  case 133:
   return FUNC_0("in crash recovery");
  case 134:
   return FUNC_0("in archive recovery");
  case 132:
   return FUNC_0("in production");
 }
 return FUNC_0("unrecognized status code");
}
