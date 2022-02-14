
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ss_ScanTupleSlot; int ps; } ;
struct TYPE_6__ {TYPE_1__ ss; } ;
typedef int PlanState ;
typedef TYPE_2__ GroupState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_2__*) ;

void
FUNC_4(GroupState *VAR_0)
{
 PlanState *VAR_1;

 FUNC_2(&VAR_0->ss.ps);


 FUNC_0(VAR_0->ss.ss_ScanTupleSlot);

 VAR_1 = FUNC_3(VAR_0);
 FUNC_1(VAR_1);
}
