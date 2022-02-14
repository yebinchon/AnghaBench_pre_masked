
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TableScanDesc ;
struct TYPE_8__ {scalar_t__ ps_ResultTupleSlot; } ;
struct TYPE_6__ {scalar_t__ ss_ScanTupleSlot; TYPE_4__ ps; int ss_currentScanDesc; } ;
struct TYPE_7__ {scalar_t__ vmbuffer; scalar_t__ pvmbuffer; scalar_t__ shared_prefetch_iterator; scalar_t__ shared_tbmiterator; scalar_t__ tbm; scalar_t__ prefetch_iterator; scalar_t__ tbmiterator; TYPE_1__ ss; } ;
typedef TYPE_2__ BitmapHeapScanState ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;

void
FUNC_9(BitmapHeapScanState *VAR_1)
{
 TableScanDesc VAR_2;




 VAR_2 = VAR_1->ss.ss_currentScanDesc;




 FUNC_2(&VAR_1->ss.ps);




 if (VAR_1->ss.ps.ps_ResultTupleSlot)
  FUNC_0(VAR_1->ss.ps.ps_ResultTupleSlot);
 FUNC_0(VAR_1->ss.ss_ScanTupleSlot);




 FUNC_1(FUNC_4(VAR_1));




 if (VAR_1->tbmiterator)
  FUNC_6(VAR_1->tbmiterator);
 if (VAR_1->prefetch_iterator)
  FUNC_6(VAR_1->prefetch_iterator);
 if (VAR_1->tbm)
  FUNC_8(VAR_1->tbm);
 if (VAR_1->shared_tbmiterator)
  FUNC_7(VAR_1->shared_tbmiterator);
 if (VAR_1->shared_prefetch_iterator)
  FUNC_7(VAR_1->shared_prefetch_iterator);
 if (VAR_1->vmbuffer != VAR_0)
  FUNC_3(VAR_1->vmbuffer);
 if (VAR_1->pvmbuffer != VAR_0)
  FUNC_3(VAR_1->pvmbuffer);




 FUNC_5(VAR_2);
}
