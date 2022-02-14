
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ verbose; int rtable; } ;
typedef int PlanState ;
typedef int List ;
typedef TYPE_1__ ExplainState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*,int *,int *,int,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(List *VAR_0, const char *VAR_1,
    PlanState *VAR_2, List *VAR_3,
    ExplainState *VAR_4)
{
 bool VAR_5;

 VAR_5 = (FUNC_0(VAR_4->rtable) > 1 || VAR_4->verbose);
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5, VAR_4);
}
