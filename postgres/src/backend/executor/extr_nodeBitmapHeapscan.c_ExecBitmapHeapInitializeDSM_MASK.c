
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int dsa_area ;
struct TYPE_13__ {TYPE_1__* plan; TYPE_6__* state; } ;
struct TYPE_14__ {TYPE_2__ ps; } ;
struct TYPE_18__ {TYPE_5__* pstate; TYPE_3__ ss; int pscan_len; } ;
struct TYPE_17__ {int es_snapshot; int * es_query_dsa; } ;
struct TYPE_16__ {int phs_snapshot_data; int cv; int state; scalar_t__ prefetch_target; scalar_t__ prefetch_pages; int mutex; scalar_t__ prefetch_iterator; scalar_t__ tbmiterator; } ;
struct TYPE_15__ {int toc; } ;
struct TYPE_12__ {int plan_node_id; } ;
typedef TYPE_4__ ParallelContext ;
typedef TYPE_5__ ParallelBitmapHeapState ;
typedef TYPE_6__ EState ;
typedef TYPE_7__ BitmapHeapScanState ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 TYPE_5__* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,TYPE_5__*) ;

void
FUNC_5(BitmapHeapScanState *VAR_1,
       ParallelContext *VAR_2)
{
 ParallelBitmapHeapState *VAR_3;
 EState *VAR_4 = VAR_1->ss.ps.state;
 dsa_area *VAR_5 = VAR_1->ss.ps.state->es_query_dsa;


 if (VAR_5 == ((void*)0))
  return;

 VAR_3 = FUNC_3(VAR_2->toc, VAR_1->pscan_len);

 VAR_3->tbmiterator = 0;
 VAR_3->prefetch_iterator = 0;


 FUNC_2(&VAR_3->mutex);
 VAR_3->prefetch_pages = 0;
 VAR_3->prefetch_target = 0;
 VAR_3->state = VAR_0;

 FUNC_0(&VAR_3->cv);
 FUNC_1(VAR_4->es_snapshot, VAR_3->phs_snapshot_data);

 FUNC_4(VAR_2->toc, VAR_1->ss.ps.plan->plan_node_id, VAR_3);
 VAR_1->pstate = VAR_3;
}
