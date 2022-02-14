
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int toc; } ;
struct TYPE_9__ {TYPE_1__* plan; } ;
struct TYPE_10__ {TYPE_2__ ps; } ;
struct TYPE_11__ {int am_worker; TYPE_3__ ss; int shared_info; } ;
struct TYPE_8__ {int plan_node_id; } ;
typedef TYPE_4__ SortState ;
typedef TYPE_5__ ParallelWorkerContext ;


 int FUNC_0 (int ,int ,int) ;

void
FUNC_1(SortState *VAR_0, ParallelWorkerContext *VAR_1)
{
 VAR_0->shared_info =
  FUNC_0(VAR_1->toc, VAR_0->ss.ps.plan->plan_node_id, 1);
 VAR_0->am_worker = 1;
}
