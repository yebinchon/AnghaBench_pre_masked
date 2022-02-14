
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int decimal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (int *,int *,int *,int ) ;
 int VAR_4 ;

int
FUNC_1(decimal *VAR_5, decimal *VAR_6, decimal *VAR_7)
{
 int VAR_8;

 VAR_4 = 0;
 VAR_8 = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_3);

 if (VAR_8 != 0)
  switch (VAR_4)
  {
   case 129:
    return VAR_0;
    break;
   case 128:
    return VAR_1;
    break;
   default:
    return VAR_2;
    break;
  }

 return 0;
}
