
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ss_ScanTupleSlot; } ;
struct TYPE_10__ {int grp_done; TYPE_1__ ss; } ;
struct TYPE_9__ {int * chgParam; } ;
typedef TYPE_2__ PlanState ;
typedef TYPE_3__ GroupState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (TYPE_3__*) ;

void
FUNC_3(GroupState *VAR_0)
{
 PlanState *VAR_1 = FUNC_2(VAR_0);

 VAR_0->grp_done = 0;

 FUNC_0(VAR_0->ss.ss_ScanTupleSlot);





 if (VAR_1->chgParam == ((void*)0))
  FUNC_1(VAR_1);
}
