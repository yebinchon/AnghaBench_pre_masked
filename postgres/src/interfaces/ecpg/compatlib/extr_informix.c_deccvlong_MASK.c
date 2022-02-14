
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
 int FUNC_1 (long,int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*) ;

int
FUNC_6(long VAR_3, decimal *VAR_4)
{
 numeric *VAR_5;
 int VAR_6 = 1;

 FUNC_5(VAR_0, (char *) VAR_4);
 if (FUNC_4(VAR_1, (char *) &VAR_3))
  return 0;

 VAR_5 = FUNC_2();
 if (VAR_5 == ((void*)0))
  return VAR_2;

 VAR_6 = FUNC_1(VAR_3, VAR_5);
 if (VAR_6 == 0)
  VAR_6 = FUNC_3(VAR_5, VAR_4);

 FUNC_0(VAR_5);
 return VAR_6;
}
