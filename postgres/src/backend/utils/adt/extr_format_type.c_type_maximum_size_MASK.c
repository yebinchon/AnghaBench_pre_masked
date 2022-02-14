
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32 ;
typedef int Oid ;



 scalar_t__ VAR_0 ;

 int FUNC_0 () ;



 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

int32
FUNC_3(Oid VAR_2, int32 VAR_3)
{
 if (VAR_3 < 0)
  return -1;

 switch (VAR_2)
 {
  case 131:
  case 128:



   return (VAR_3 - VAR_1) *
    FUNC_2(FUNC_0())
    + VAR_1;

  case 130:
   return FUNC_1(VAR_3);

  case 129:
  case 132:

   return (VAR_3 + (VAR_0 - 1)) / VAR_0
    + 2 * sizeof(int32);
 }


 return -1;
}
