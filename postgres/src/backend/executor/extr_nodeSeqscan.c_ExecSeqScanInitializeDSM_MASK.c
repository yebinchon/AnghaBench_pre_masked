
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int es_snapshot; } ;
struct TYPE_13__ {int toc; } ;
struct TYPE_10__ {TYPE_1__* plan; TYPE_6__* state; } ;
struct TYPE_11__ {int ss_currentRelation; int ss_currentScanDesc; TYPE_2__ ps; } ;
struct TYPE_12__ {TYPE_3__ ss; int pscan_len; } ;
struct TYPE_9__ {int plan_node_id; } ;
typedef TYPE_4__ SeqScanState ;
typedef int ParallelTableScanDesc ;
typedef TYPE_5__ ParallelContext ;
typedef TYPE_6__ EState ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

void
FUNC_4(SeqScanState *VAR_0,
       ParallelContext *VAR_1)
{
 EState *VAR_2 = VAR_0->ss.ps.state;
 ParallelTableScanDesc VAR_3;

 VAR_3 = FUNC_0(VAR_1->toc, VAR_0->pscan_len);
 FUNC_3(VAR_0->ss.ss_currentRelation,
          VAR_3,
          VAR_2->es_snapshot);
 FUNC_1(VAR_1->toc, VAR_0->ss.ps.plan->plan_node_id, VAR_3);
 VAR_0->ss.ss_currentScanDesc =
  FUNC_2(VAR_0->ss.ss_currentRelation, VAR_3);
}
