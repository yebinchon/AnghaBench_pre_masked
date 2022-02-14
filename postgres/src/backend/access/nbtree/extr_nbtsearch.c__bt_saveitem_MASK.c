
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ nextTupleOffset; TYPE_3__* items; } ;
struct TYPE_12__ {TYPE_1__ currPos; scalar_t__ currTuples; } ;
struct TYPE_11__ {scalar_t__ tupleOffset; int indexOffset; int heapTid; } ;
struct TYPE_10__ {int t_tid; } ;
typedef int Size ;
typedef int OffsetNumber ;
typedef TYPE_2__* IndexTuple ;
typedef TYPE_3__ BTScanPosItem ;
typedef TYPE_4__* BTScanOpaque ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_3(BTScanOpaque VAR_0, int VAR_1,
    OffsetNumber VAR_2, IndexTuple VAR_3)
{
 BTScanPosItem *VAR_4 = &VAR_0->currPos.items[VAR_1];

 VAR_4->heapTid = VAR_3->t_tid;
 VAR_4->indexOffset = VAR_2;
 if (VAR_0->currTuples)
 {
  Size VAR_5 = FUNC_0(VAR_3);

  VAR_4->tupleOffset = VAR_0->currPos.nextTupleOffset;
  FUNC_2(VAR_0->currTuples + VAR_0->currPos.nextTupleOffset, VAR_3, VAR_5);
  VAR_0->currPos.nextTupleOffset += FUNC_1(VAR_5);
 }
}
