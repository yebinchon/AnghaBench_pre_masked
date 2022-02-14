
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int numeric ;
typedef int decimal ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,double*) ;

int
FUNC_4(decimal *VAR_1, double *VAR_2)
{
 int VAR_3;
 numeric *VAR_4 = FUNC_2();

 if (VAR_4 == ((void*)0))
  return VAR_0;

 if (FUNC_1(VAR_1, VAR_4) != 0)
 {
  FUNC_0(VAR_4);
  return VAR_0;
 }

 VAR_3 = FUNC_3(VAR_4, VAR_2);
 FUNC_0(VAR_4);

 return VAR_3;
}
