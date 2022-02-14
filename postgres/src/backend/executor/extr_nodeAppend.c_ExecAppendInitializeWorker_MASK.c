
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* plan; } ;
struct TYPE_10__ {int choose_next_subplan; TYPE_2__ ps; int as_pstate; } ;
struct TYPE_9__ {int toc; } ;
struct TYPE_7__ {int plan_node_id; } ;
typedef TYPE_3__ ParallelWorkerContext ;
typedef TYPE_4__ AppendState ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

void
FUNC_1(AppendState *VAR_1, ParallelWorkerContext *VAR_2)
{
 VAR_1->as_pstate = FUNC_0(VAR_2->toc, VAR_1->ps.plan->plan_node_id, 0);
 VAR_1->choose_next_subplan = VAR_0;
}
