
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* plan; } ;
struct TYPE_15__ {int choose_next_subplan; TYPE_4__* as_pstate; TYPE_1__ ps; int pstate_len; } ;
struct TYPE_14__ {int pa_lock; } ;
struct TYPE_13__ {int toc; } ;
struct TYPE_12__ {int plan_node_id; } ;
typedef TYPE_3__ ParallelContext ;
typedef TYPE_4__ ParallelAppendState ;
typedef TYPE_5__ AppendState ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*,int ,int ) ;
 TYPE_4__* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,TYPE_4__*) ;

void
FUNC_4(AppendState *VAR_2,
      ParallelContext *VAR_3)
{
 ParallelAppendState *VAR_4;

 VAR_4 = FUNC_2(VAR_3->toc, VAR_2->pstate_len);
 FUNC_1(VAR_4, 0, VAR_2->pstate_len);
 FUNC_0(&VAR_4->pa_lock, VAR_0);
 FUNC_3(VAR_3->toc, VAR_2->ps.plan->plan_node_id, VAR_4);

 VAR_2->as_pstate = VAR_4;
 VAR_2->choose_next_subplan = VAR_1;
}
