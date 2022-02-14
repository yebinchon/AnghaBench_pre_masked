
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int Datum ;



 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static double
FUNC_8(Datum VAR_1, Oid VAR_2, bool *VAR_3)
{
 switch (VAR_2)
 {
  case 145:
   return (double) FUNC_0(VAR_1);
  case 142:
   return (double) FUNC_3(VAR_1);
  case 141:
   return (double) FUNC_4(VAR_1);
  case 140:
   return (double) FUNC_5(VAR_1);
  case 144:
   return (double) FUNC_1(VAR_1);
  case 143:
   return (double) FUNC_2(VAR_1);
  case 139:

   return (double)
    FUNC_2(FUNC_7(VAR_0,
               VAR_1));
  case 138:
  case 130:
  case 131:
  case 132:
  case 133:
  case 137:
  case 128:
  case 136:
  case 135:
  case 129:
  case 134:

   return (double) FUNC_6(VAR_1);
 }

 *VAR_3 = 1;
 return 0;
}
