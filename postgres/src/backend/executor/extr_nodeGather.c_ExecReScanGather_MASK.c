
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ rescan_param; } ;
struct TYPE_10__ {scalar_t__ plan; } ;
struct TYPE_12__ {int initialized; TYPE_1__ ps; } ;
struct TYPE_11__ {int * chgParam; } ;
typedef TYPE_2__ PlanState ;
typedef TYPE_3__ GatherState ;
typedef TYPE_4__ Gather ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int * FUNC_2 (int *,scalar_t__) ;
 TYPE_2__* FUNC_3 (TYPE_3__*) ;

void
FUNC_4(GatherState *VAR_0)
{
 Gather *VAR_1 = (Gather *) VAR_0->ps.plan;
 PlanState *VAR_2 = FUNC_3(VAR_0);


 FUNC_1(VAR_0);


 VAR_0->initialized = 0;
 if (VAR_1->rescan_param >= 0)
  VAR_2->chgParam = FUNC_2(VAR_2->chgParam,
            VAR_1->rescan_param);
 if (VAR_2->chgParam == ((void*)0))
  FUNC_0(VAR_2);
}
