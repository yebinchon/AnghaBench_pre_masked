
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int nl_NeedNewOuter; int nl_MatchedOuter; } ;
struct TYPE_7__ {int * chgParam; } ;
typedef TYPE_1__ PlanState ;
typedef TYPE_2__ NestLoopState ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;

void
FUNC_2(NestLoopState *VAR_0)
{
 PlanState *VAR_1 = FUNC_1(VAR_0);





 if (VAR_1->chgParam == ((void*)0))
  FUNC_0(VAR_1);







 VAR_0->nl_NeedNewOuter = 1;
 VAR_0->nl_MatchedOuter = 0;
}
