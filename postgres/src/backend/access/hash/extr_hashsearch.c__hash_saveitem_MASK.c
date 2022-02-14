
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* items; } ;
struct TYPE_10__ {TYPE_1__ currPos; } ;
struct TYPE_9__ {int indexOffset; int heapTid; } ;
struct TYPE_8__ {int t_tid; } ;
typedef int OffsetNumber ;
typedef TYPE_2__* IndexTuple ;
typedef TYPE_3__ HashScanPosItem ;
typedef TYPE_4__* HashScanOpaque ;



__attribute__((used)) static inline void
FUNC_0(HashScanOpaque VAR_0, int VAR_1,
      OffsetNumber VAR_2, IndexTuple VAR_3)
{
 HashScanPosItem *VAR_4 = &VAR_0->currPos.items[VAR_1];

 VAR_4->heapTid = VAR_3->t_tid;
 VAR_4->indexOffset = VAR_2;
}
