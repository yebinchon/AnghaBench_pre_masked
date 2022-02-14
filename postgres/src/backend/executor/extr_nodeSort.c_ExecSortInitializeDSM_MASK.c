
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int TuplesortInstrumentation ;
struct TYPE_16__ {int num_workers; } ;
struct TYPE_15__ {int nworkers; int toc; } ;
struct TYPE_13__ {TYPE_1__* plan; int instrument; } ;
struct TYPE_12__ {TYPE_3__ ps; } ;
struct TYPE_14__ {TYPE_6__* shared_info; TYPE_2__ ss; } ;
struct TYPE_11__ {int plan_node_id; } ;
typedef TYPE_4__ SortState ;
typedef scalar_t__ Size ;
typedef TYPE_5__ ParallelContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 TYPE_6__* FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int ,TYPE_6__*) ;
 int VAR_1 ;

void
FUNC_4(SortState *VAR_2, ParallelContext *VAR_3)
{
 Size VAR_4;


 if (!VAR_2->ss.ps.instrument || VAR_3->nworkers == 0)
  return;

 VAR_4 = FUNC_1(VAR_0, VAR_1)
  + VAR_3->nworkers * sizeof(TuplesortInstrumentation);
 VAR_2->shared_info = FUNC_2(VAR_3->toc, VAR_4);

 FUNC_0(VAR_2->shared_info, 0, VAR_4);
 VAR_2->shared_info->num_workers = VAR_3->nworkers;
 FUNC_3(VAR_3->toc, VAR_2->ss.ps.plan->plan_node_id,
       VAR_2->shared_info);
}
