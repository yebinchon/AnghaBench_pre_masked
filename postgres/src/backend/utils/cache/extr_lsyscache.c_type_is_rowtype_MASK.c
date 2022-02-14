
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;


 scalar_t__ VAR_0 ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int const FUNC_1 (scalar_t__) ;

bool
FUNC_2(Oid VAR_1)
{
 if (VAR_1 == VAR_0)
  return 1;
 switch (FUNC_1(VAR_1))
 {
  case 129:
   return 1;
  case 128:
   if (FUNC_1(FUNC_0(VAR_1)) == 129)
    return 1;
   break;
  default:
   break;
 }
 return 0;
}
