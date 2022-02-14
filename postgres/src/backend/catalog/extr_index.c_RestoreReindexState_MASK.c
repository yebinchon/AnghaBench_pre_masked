
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int numPendingReindexedIndexes; int * pendingReindexedIndexes; int currentlyReindexedIndex; int currentlyReindexedHeap; } ;
typedef TYPE_1__ SerializedReindexState ;
typedef int MemoryContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ VAR_4 ;

void
FUNC_3(void *VAR_5)
{
 SerializedReindexState *VAR_6 = (SerializedReindexState *) VAR_5;
 int VAR_7 = 0;
 MemoryContext VAR_8;

 VAR_2 = VAR_6->currentlyReindexedHeap;
 VAR_3 = VAR_6->currentlyReindexedIndex;

 FUNC_0(VAR_4 == VAR_0);
 VAR_8 = FUNC_1(VAR_1);
 for (VAR_7 = 0; VAR_7 < VAR_6->numPendingReindexedIndexes; ++VAR_7)
  VAR_4 =
   FUNC_2(VAR_4,
      VAR_6->pendingReindexedIndexes[VAR_7]);
 FUNC_1(VAR_8);
}
