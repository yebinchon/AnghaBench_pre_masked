
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int xs_want_itup; } ;
struct TYPE_11__ {TYPE_1__* plan; } ;
struct TYPE_12__ {int ss_currentRelation; TYPE_2__ ps; } ;
struct TYPE_14__ {scalar_t__ ioss_NumRuntimeKeys; int ioss_NumOrderByKeys; int ioss_OrderByKeys; int ioss_NumScanKeys; int ioss_ScanKeys; TYPE_6__* ioss_ScanDesc; scalar_t__ ioss_RuntimeKeysReady; int ioss_RelationDesc; TYPE_3__ ss; } ;
struct TYPE_13__ {int toc; } ;
struct TYPE_10__ {int plan_node_id; } ;
typedef TYPE_4__ ParallelWorkerContext ;
typedef int ParallelIndexScanDesc ;
typedef TYPE_5__ IndexOnlyScanState ;


 TYPE_6__* FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_6__*,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

void
FUNC_3(IndexOnlyScanState *VAR_0,
          ParallelWorkerContext *VAR_1)
{
 ParallelIndexScanDesc VAR_2;

 VAR_2 = FUNC_2(VAR_1->toc, VAR_0->ss.ps.plan->plan_node_id, 0);
 VAR_0->ioss_ScanDesc =
  FUNC_0(VAR_0->ss.ss_currentRelation,
         VAR_0->ioss_RelationDesc,
         VAR_0->ioss_NumScanKeys,
         VAR_0->ioss_NumOrderByKeys,
         VAR_2);
 VAR_0->ioss_ScanDesc->xs_want_itup = 1;





 if (VAR_0->ioss_NumRuntimeKeys == 0 || VAR_0->ioss_RuntimeKeysReady)
  FUNC_1(VAR_0->ioss_ScanDesc,
      VAR_0->ioss_ScanKeys, VAR_0->ioss_NumScanKeys,
      VAR_0->ioss_OrderByKeys, VAR_0->ioss_NumOrderByKeys);
}
