
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ ps_ResultTupleSlot; } ;
struct TYPE_8__ {scalar_t__ ss_currentScanDesc; scalar_t__ ss_ScanTupleSlot; TYPE_5__ ps; } ;
struct TYPE_9__ {TYPE_2__ ss; TYPE_1__* tsmroutine; } ;
struct TYPE_7__ {int (* EndSampleScan ) (TYPE_3__*) ;} ;
typedef TYPE_3__ SampleScanState ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (scalar_t__) ;

void
FUNC_4(SampleScanState *VAR_0)
{



 if (VAR_0->tsmroutine->EndSampleScan)
  VAR_0->tsmroutine->EndSampleScan(VAR_0);




 FUNC_1(&VAR_0->ss.ps);




 if (VAR_0->ss.ps.ps_ResultTupleSlot)
  FUNC_0(VAR_0->ss.ps.ps_ResultTupleSlot);
 FUNC_0(VAR_0->ss.ss_ScanTupleSlot);




 if (VAR_0->ss.ss_currentScanDesc)
  FUNC_3(VAR_0->ss.ss_currentScanDesc);
}
