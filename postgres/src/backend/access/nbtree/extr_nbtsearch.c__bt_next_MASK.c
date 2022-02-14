
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ itemIndex; scalar_t__ lastItem; scalar_t__ firstItem; TYPE_3__* items; } ;
struct TYPE_10__ {scalar_t__ currTuples; TYPE_1__ currPos; } ;
struct TYPE_9__ {scalar_t__ tupleOffset; int heapTid; } ;
struct TYPE_8__ {scalar_t__ xs_itup; scalar_t__ xs_want_itup; int xs_heaptid; int opaque; } ;
typedef int ScanDirection ;
typedef scalar_t__ IndexTuple ;
typedef TYPE_2__* IndexScanDesc ;
typedef TYPE_3__ BTScanPosItem ;
typedef TYPE_4__* BTScanOpaque ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;

bool
FUNC_2(IndexScanDesc VAR_0, ScanDirection VAR_1)
{
 BTScanOpaque VAR_2 = (BTScanOpaque) VAR_0->opaque;
 BTScanPosItem *VAR_3;





 if (FUNC_0(VAR_1))
 {
  if (++VAR_2->currPos.itemIndex > VAR_2->currPos.lastItem)
  {
   if (!FUNC_1(VAR_0, VAR_1))
    return 0;
  }
 }
 else
 {
  if (--VAR_2->currPos.itemIndex < VAR_2->currPos.firstItem)
  {
   if (!FUNC_1(VAR_0, VAR_1))
    return 0;
  }
 }


 VAR_3 = &VAR_2->currPos.items[VAR_2->currPos.itemIndex];
 VAR_0->xs_heaptid = VAR_3->heapTid;
 if (VAR_0->xs_want_itup)
  VAR_0->xs_itup = (IndexTuple) (VAR_2->currTuples + VAR_3->tupleOffset);

 return 1;
}
