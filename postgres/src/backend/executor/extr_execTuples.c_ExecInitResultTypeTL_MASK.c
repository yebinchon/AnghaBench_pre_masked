
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_5__ {int ps_ResultTupleDesc; TYPE_1__* plan; } ;
struct TYPE_4__ {int targetlist; } ;
typedef TYPE_2__ PlanState ;


 int FUNC_0 (int ) ;

void
FUNC_1(PlanState *VAR_0)
{
 TupleDesc VAR_1 = FUNC_0(VAR_0->plan->targetlist);

 VAR_0->ps_ResultTupleDesc = VAR_1;
}
