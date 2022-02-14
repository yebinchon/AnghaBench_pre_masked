
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
struct TYPE_10__ {int ss_currentRelation; int ss_currentScanDesc; TYPE_2__ ps; } ;
struct TYPE_11__ {TYPE_3__ ss; } ;
struct TYPE_8__ {int plan_node_id; } ;
typedef TYPE_4__ SeqScanState ;
typedef TYPE_5__ ParallelWorkerContext ;
typedef int ParallelTableScanDesc ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(SeqScanState *VAR_0,
       ParallelWorkerContext *VAR_1)
{
 ParallelTableScanDesc VAR_2;

 VAR_2 = FUNC_0(VAR_1->toc, VAR_0->ss.ps.plan->plan_node_id, 0);
 VAR_0->ss.ss_currentScanDesc =
  FUNC_1(VAR_0->ss.ss_currentRelation, VAR_2);
}
