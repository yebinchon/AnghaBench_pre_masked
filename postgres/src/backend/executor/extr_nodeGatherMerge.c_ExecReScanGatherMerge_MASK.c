
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ rescan_param; } ;
struct TYPE_11__ {scalar_t__ plan; } ;
struct TYPE_13__ {int initialized; int gm_initialized; TYPE_1__ ps; } ;
struct TYPE_12__ {int * chgParam; } ;
typedef TYPE_2__ PlanState ;
typedef TYPE_3__ GatherMergeState ;
typedef TYPE_4__ GatherMerge ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int * FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_2__* FUNC_4 (TYPE_3__*) ;

void
FUNC_5(GatherMergeState *VAR_0)
{
 GatherMerge *VAR_1 = (GatherMerge *) VAR_0->ps.plan;
 PlanState *VAR_2 = FUNC_4(VAR_0);


 FUNC_1(VAR_0);


 FUNC_3(VAR_0);


 VAR_0->initialized = 0;
 VAR_0->gm_initialized = 0;
 if (VAR_1->rescan_param >= 0)
  VAR_2->chgParam = FUNC_2(VAR_2->chgParam,
            VAR_1->rescan_param);
 if (VAR_2->chgParam == ((void*)0))
  FUNC_0(VAR_2);
}
