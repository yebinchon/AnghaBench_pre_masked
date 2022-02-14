
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WalLevel ;





 char const* FUNC_0 (char*) ;

__attribute__((used)) static const char *
FUNC_1(WalLevel VAR_0)
{
 switch (VAR_0)
 {
  case 129:
   return "minimal";
  case 128:
   return "replica";
  case 130:
   return "logical";
 }
 return FUNC_0("unrecognized wal_level");
}
