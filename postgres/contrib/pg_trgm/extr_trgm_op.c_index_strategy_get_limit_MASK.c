
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StrategyNumber ;


 int VAR_0 ;



 int FUNC_0 (int ,char*,int) ;
 double VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;

double
FUNC_1(StrategyNumber VAR_4)
{
 switch (VAR_4)
 {
  case 130:
   return VAR_1;
  case 128:
   return VAR_3;
  case 129:
   return VAR_2;
  default:
   FUNC_0(VAR_0, "unrecognized strategy number: %d", VAR_4);
   break;
 }

 return 0.0;
}
