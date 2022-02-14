
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int decimal ;


 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (int) ;

decimal *
FUNC_2(void)
{
 decimal *VAR_0;

 if ((VAR_0 = (decimal *) FUNC_1(sizeof(decimal))) == ((void*)0))
  return ((void*)0);

 FUNC_0(VAR_0, 0, sizeof(decimal));

 return VAR_0;
}
