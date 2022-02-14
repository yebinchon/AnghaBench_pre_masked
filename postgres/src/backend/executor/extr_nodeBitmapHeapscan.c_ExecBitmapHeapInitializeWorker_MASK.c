
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


struct TYPE_13__ {TYPE_2__* plan; TYPE_1__* state; } ;
struct TYPE_14__ {int ss_currentScanDesc; TYPE_3__ ps; } ;
struct TYPE_17__ {TYPE_4__ ss; TYPE_6__* pstate; } ;
struct TYPE_16__ {int phs_snapshot_data; } ;
struct TYPE_15__ {int toc; } ;
struct TYPE_12__ {int plan_node_id; } ;
struct TYPE_11__ {int * es_query_dsa; } ;
typedef int Snapshot ;
typedef TYPE_5__ ParallelWorkerContext ;
typedef TYPE_6__ ParallelBitmapHeapState ;
typedef TYPE_7__ BitmapHeapScanState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_6__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(BitmapHeapScanState *VAR_0,
          ParallelWorkerContext *VAR_1)
{
 ParallelBitmapHeapState *VAR_2;
 Snapshot VAR_3;

 FUNC_0(VAR_0->ss.ps.state->es_query_dsa != ((void*)0));

 VAR_2 = FUNC_2(VAR_1->toc, VAR_0->ss.ps.plan->plan_node_id, 0);
 VAR_0->pstate = VAR_2;

 VAR_3 = FUNC_1(VAR_2->phs_snapshot_data);
 FUNC_3(VAR_0->ss.ss_currentScanDesc, VAR_3);
}
