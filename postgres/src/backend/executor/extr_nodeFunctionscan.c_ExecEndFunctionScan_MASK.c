
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ ps_ResultTupleSlot; } ;
struct TYPE_8__ {int * tstore; scalar_t__ func_slot; } ;
struct TYPE_6__ {scalar_t__ ss_ScanTupleSlot; TYPE_4__ ps; } ;
struct TYPE_7__ {int nfuncs; TYPE_3__* funcstates; TYPE_1__ ss; } ;
typedef TYPE_2__ FunctionScanState ;
typedef TYPE_3__ FunctionScanPerFuncState ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(FunctionScanState *VAR_0)
{
 int VAR_1;




 FUNC_1(&VAR_0->ss.ps);




 if (VAR_0->ss.ps.ps_ResultTupleSlot)
  FUNC_0(VAR_0->ss.ps.ps_ResultTupleSlot);
 FUNC_0(VAR_0->ss.ss_ScanTupleSlot);




 for (VAR_1 = 0; VAR_1 < VAR_0->nfuncs; VAR_1++)
 {
  FunctionScanPerFuncState *VAR_2 = &VAR_0->funcstates[VAR_1];

  if (VAR_2->func_slot)
   FUNC_0(VAR_2->func_slot);

  if (VAR_2->tstore != ((void*)0))
  {
   FUNC_2(VAR_0->funcstates[VAR_1].tstore);
   VAR_2->tstore = ((void*)0);
  }
 }
}
