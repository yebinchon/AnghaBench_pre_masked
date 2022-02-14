
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* plan; int instrument; } ;
struct TYPE_12__ {int * hinstrument; TYPE_2__ ps; } ;
struct TYPE_11__ {int toc; } ;
struct TYPE_10__ {int * hinstrument; } ;
struct TYPE_8__ {int plan_node_id; } ;
typedef TYPE_3__ SharedHashInfo ;
typedef TYPE_4__ ParallelWorkerContext ;
typedef TYPE_5__ HashState ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;

void
FUNC_1(HashState *VAR_1, ParallelWorkerContext *VAR_2)
{
 SharedHashInfo *VAR_3;


 if (!VAR_1->ps.instrument)
  return;

 VAR_3 = (SharedHashInfo *)
  FUNC_0(VAR_2->toc, VAR_1->ps.plan->plan_node_id, 0);
 VAR_1->hinstrument = &VAR_3->hinstrument[VAR_0];
}
