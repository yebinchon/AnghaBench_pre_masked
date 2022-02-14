
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TypeFuncClass ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int VAR_7 ;
 int FUNC_0 (int ) ;
 int const FUNC_1 (int ) ;

__attribute__((used)) static TypeFuncClass
FUNC_2(Oid VAR_8, Oid *VAR_9)
{
 *VAR_9 = VAR_8;

 switch (FUNC_1(VAR_8))
 {
  case 132:
   return VAR_2;
  case 133:
  case 130:
  case 128:
   return VAR_6;
  case 131:
   *VAR_9 = VAR_8 = FUNC_0(VAR_8);
   if (FUNC_1(VAR_8) == 132)
    return VAR_3;
   else
    return VAR_6;
  case 129:
   if (VAR_8 == VAR_1)
    return VAR_5;







   if (VAR_8 == VAR_7 || VAR_8 == VAR_0)
    return VAR_6;
   return VAR_4;
 }

 return VAR_4;
}
