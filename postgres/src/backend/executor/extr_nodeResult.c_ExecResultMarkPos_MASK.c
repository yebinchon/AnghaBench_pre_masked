
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ResultState ;
typedef int PlanState ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 (int *) ;

void
FUNC_3(ResultState *VAR_1)
{
 PlanState *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2 != ((void*)0))
  FUNC_0(VAR_2);
 else
  FUNC_1(VAR_0, "Result nodes do not support mark/restore");
}
