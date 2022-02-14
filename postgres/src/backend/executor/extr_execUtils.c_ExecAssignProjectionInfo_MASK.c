
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_6__ {int ps_ResultTupleSlot; int ps_ExprContext; TYPE_1__* plan; int ps_ProjInfo; } ;
struct TYPE_5__ {int targetlist; } ;
typedef TYPE_2__ PlanState ;


 int FUNC_0 (int ,int ,int ,TYPE_2__*,int ) ;

void
FUNC_1(PlanState *VAR_0,
       TupleDesc VAR_1)
{
 VAR_0->ps_ProjInfo =
  FUNC_0(VAR_0->plan->targetlist,
        VAR_0->ps_ExprContext,
        VAR_0->ps_ResultTupleSlot,
        VAR_0,
        VAR_1);
}
