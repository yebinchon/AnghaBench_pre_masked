
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PlanState ;
typedef int List ;
typedef int ExplainState ;


 int FUNC_0 (int *,int *,char*,int *,int *) ;
 int FUNC_1 (char*,int *,int,int *) ;

__attribute__((used)) static void
FUNC_2(PlanState **VAR_0, int VAR_1, int VAR_2,
       List *VAR_3, ExplainState *VAR_4)
{
 int VAR_5;
 if (VAR_1 < VAR_2)
  FUNC_1("Subplans Removed", ((void*)0), VAR_2 - VAR_1, VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  FUNC_0(VAR_0[VAR_5], VAR_3,
     "Member", ((void*)0), VAR_4);
}
