
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int decimal ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *,int *,int ) ;
 scalar_t__ VAR_5 ;

int
FUNC_1(decimal *VAR_6, decimal *VAR_7, decimal *VAR_8)
{
 VAR_5 = 0;
 FUNC_0(VAR_6, VAR_7, VAR_8, VAR_4);

 if (VAR_5 == VAR_2)
  return VAR_0;
 else if (VAR_5 == VAR_3)
  return VAR_1;
 else if (VAR_5 != 0)
  return -1;
 else
  return 0;
}
