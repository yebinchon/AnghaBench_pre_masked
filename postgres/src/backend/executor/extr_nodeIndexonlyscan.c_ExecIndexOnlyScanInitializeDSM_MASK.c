
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_17__ {int xs_want_itup; } ;
struct TYPE_16__ {int es_snapshot; } ;
struct TYPE_12__ {TYPE_1__* plan; TYPE_6__* state; } ;
struct TYPE_13__ {int ss_currentRelation; TYPE_2__ ps; } ;
struct TYPE_15__ {scalar_t__ ioss_NumRuntimeKeys; int ioss_NumOrderByKeys; int ioss_OrderByKeys; int ioss_NumScanKeys; int ioss_ScanKeys; TYPE_7__* ioss_ScanDesc; scalar_t__ ioss_RuntimeKeysReady; int ioss_VMBuffer; int ioss_RelationDesc; TYPE_3__ ss; int ioss_PscanLen; } ;
struct TYPE_14__ {int toc; } ;
struct TYPE_11__ {int plan_node_id; } ;
typedef int ParallelIndexScanDesc ;
typedef TYPE_4__ ParallelContext ;
typedef TYPE_5__ IndexOnlyScanState ;
typedef TYPE_6__ EState ;


 int VAR_0 ;
 TYPE_7__* FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_7__*,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

void
FUNC_5(IndexOnlyScanState *VAR_1,
          ParallelContext *VAR_2)
{
 EState *VAR_3 = VAR_1->ss.ps.state;
 ParallelIndexScanDesc VAR_4;

 VAR_4 = FUNC_3(VAR_2->toc, VAR_1->ioss_PscanLen);
 FUNC_1(VAR_1->ss.ss_currentRelation,
          VAR_1->ioss_RelationDesc,
          VAR_3->es_snapshot,
          VAR_4);
 FUNC_4(VAR_2->toc, VAR_1->ss.ps.plan->plan_node_id, VAR_4);
 VAR_1->ioss_ScanDesc =
  FUNC_0(VAR_1->ss.ss_currentRelation,
         VAR_1->ioss_RelationDesc,
         VAR_1->ioss_NumScanKeys,
         VAR_1->ioss_NumOrderByKeys,
         VAR_4);
 VAR_1->ioss_ScanDesc->xs_want_itup = 1;
 VAR_1->ioss_VMBuffer = VAR_0;





 if (VAR_1->ioss_NumRuntimeKeys == 0 || VAR_1->ioss_RuntimeKeysReady)
  FUNC_2(VAR_1->ioss_ScanDesc,
      VAR_1->ioss_ScanKeys, VAR_1->ioss_NumScanKeys,
      VAR_1->ioss_OrderByKeys, VAR_1->ioss_NumOrderByKeys);
}
