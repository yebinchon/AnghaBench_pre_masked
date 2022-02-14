
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StrategyNumber ;
typedef int NDBOX ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

bool
FUNC_3(NDBOX *VAR_0,
        NDBOX *VAR_1,
        StrategyNumber VAR_2)
{
 bool VAR_3;

 switch (VAR_2)
 {
  case 129:
   VAR_3 = FUNC_2(VAR_0, VAR_1);
   break;
  case 128:
   VAR_3 = (FUNC_0(VAR_0, VAR_1) == 0);
   break;
  case 132:
  case 130:
   VAR_3 = FUNC_1(VAR_0, VAR_1);
   break;
  case 133:
  case 131:
   VAR_3 = FUNC_1(VAR_1, VAR_0);
   break;
  default:
   VAR_3 = 0;
 }
 return VAR_3;
}
