
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int decimal ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (int *,int *,int *,int ) ;
 int VAR_3 ;

int
FUNC_1(decimal *VAR_4, decimal *VAR_5, decimal *VAR_6)
{
 int VAR_7;

 VAR_3 = 0;
 VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_2);

 if (VAR_7 != 0)
  switch (VAR_3)
  {
   case 128:
    return VAR_0;
    break;
   default:
    return VAR_1;
    break;
  }

 return 0;
}
