
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* plan; } ;
struct TYPE_8__ {int ss_currentRelation; TYPE_2__ ps; } ;
struct TYPE_12__ {scalar_t__ iss_NumRuntimeKeys; int iss_NumOrderByKeys; int iss_OrderByKeys; int iss_NumScanKeys; int iss_ScanKeys; int iss_ScanDesc; scalar_t__ iss_RuntimeKeysReady; int iss_RelationDesc; TYPE_1__ ss; } ;
struct TYPE_11__ {int toc; } ;
struct TYPE_10__ {int plan_node_id; } ;
typedef TYPE_4__ ParallelWorkerContext ;
typedef int ParallelIndexScanDesc ;
typedef TYPE_5__ IndexScanState ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

void
FUNC_3(IndexScanState *VAR_0,
         ParallelWorkerContext *VAR_1)
{
 ParallelIndexScanDesc VAR_2;

 VAR_2 = FUNC_2(VAR_1->toc, VAR_0->ss.ps.plan->plan_node_id, 0);
 VAR_0->iss_ScanDesc =
  FUNC_0(VAR_0->ss.ss_currentRelation,
         VAR_0->iss_RelationDesc,
         VAR_0->iss_NumScanKeys,
         VAR_0->iss_NumOrderByKeys,
         VAR_2);





 if (VAR_0->iss_NumRuntimeKeys == 0 || VAR_0->iss_RuntimeKeysReady)
  FUNC_1(VAR_0->iss_ScanDesc,
      VAR_0->iss_ScanKeys, VAR_0->iss_NumScanKeys,
      VAR_0->iss_OrderByKeys, VAR_0->iss_NumOrderByKeys);
}
