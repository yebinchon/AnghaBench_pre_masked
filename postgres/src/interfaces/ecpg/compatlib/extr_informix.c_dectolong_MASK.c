
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int numeric ;
typedef int decimal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,long*) ;

int
FUNC_4(decimal *VAR_3, long *VAR_4)
{
 int VAR_5;
 numeric *VAR_6 = FUNC_2();

 if (VAR_6 == ((void*)0))
  return VAR_1;

 if (FUNC_1(VAR_3, VAR_6) != 0)
 {
  FUNC_0(VAR_6);
  return VAR_1;
 }

 VAR_5 = FUNC_3(VAR_6, VAR_4);
 FUNC_0(VAR_6);

 if (VAR_5 == VAR_2)
  VAR_5 = VAR_0;

 return VAR_5;
}
