
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PlanState ;
typedef int Node ;
typedef int List ;
typedef int ExplainState ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*,int *,int *,int,int *) ;

__attribute__((used)) static void
FUNC_2(List *VAR_1, const char *VAR_2,
    PlanState *VAR_3, List *VAR_4,
    bool VAR_5, ExplainState *VAR_6)
{
 Node *VAR_7;


 if (VAR_1 == VAR_0)
  return;


 VAR_7 = (Node *) FUNC_0(VAR_1);


 FUNC_1(VAR_7, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
