
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
struct TYPE_10__ {TYPE_1__* plan; TYPE_6__* state; } ;
struct TYPE_11__ {int ss_currentRelation; TYPE_2__ ps; } ;
struct TYPE_13__ {scalar_t__ iss_NumRuntimeKeys; int iss_NumOrderByKeys; int iss_OrderByKeys; int iss_NumScanKeys; int iss_ScanKeys; int iss_ScanDesc; scalar_t__ iss_RuntimeKeysReady; int iss_RelationDesc; TYPE_3__ ss; int iss_PscanLen; } ;
struct TYPE_12__ {int toc; } ;
struct TYPE_9__ {int plan_node_id; } ;
typedef int ParallelIndexScanDesc ;
typedef TYPE_4__ ParallelContext ;
typedef TYPE_5__ IndexScanState ;
typedef TYPE_6__ EState ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

void
FUNC_5(IndexScanState *VAR_0,
         ParallelContext *VAR_1)
{
 EState *VAR_2 = VAR_0->ss.ps.state;
 ParallelIndexScanDesc VAR_3;

 VAR_3 = FUNC_3(VAR_1->toc, VAR_0->iss_PscanLen);
 FUNC_1(VAR_0->ss.ss_currentRelation,
          VAR_0->iss_RelationDesc,
          VAR_2->es_snapshot,
          VAR_3);
 FUNC_4(VAR_1->toc, VAR_0->ss.ps.plan->plan_node_id, VAR_3);
 VAR_0->iss_ScanDesc =
  FUNC_0(VAR_0->ss.ss_currentRelation,
         VAR_0->iss_RelationDesc,
         VAR_0->iss_NumScanKeys,
         VAR_0->iss_NumOrderByKeys,
         VAR_3);





 if (VAR_0->iss_NumRuntimeKeys == 0 || VAR_0->iss_RuntimeKeysReady)
  FUNC_2(VAR_0->iss_ScanDesc,
      VAR_0->iss_ScanKeys, VAR_0->iss_NumScanKeys,
      VAR_0->iss_OrderByKeys, VAR_0->iss_NumOrderByKeys);
}
