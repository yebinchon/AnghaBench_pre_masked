
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ ps_ResultTupleSlot; } ;
struct TYPE_5__ {scalar_t__ ss_ScanTupleSlot; TYPE_3__ ps; } ;
struct TYPE_6__ {int subplan; TYPE_1__ ss; } ;
typedef TYPE_2__ SubqueryScanState ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;

void
FUNC_3(SubqueryScanState *VAR_0)
{



 FUNC_2(&VAR_0->ss.ps);




 if (VAR_0->ss.ps.ps_ResultTupleSlot)
  FUNC_0(VAR_0->ss.ps.ps_ResultTupleSlot);
 FUNC_0(VAR_0->ss.ss_ScanTupleSlot);




 FUNC_1(VAR_0->subplan);
}
