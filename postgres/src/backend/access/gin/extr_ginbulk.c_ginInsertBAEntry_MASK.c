
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int allocatedMemory; int tree; } ;
struct TYPE_5__ {int maxcount; int count; int shouldSort; int * list; int key; scalar_t__ category; int attnum; } ;
typedef int RBTNode ;
typedef int OffsetNumber ;
typedef int ItemPointerData ;
typedef int * ItemPointer ;
typedef scalar_t__ GinNullCategory ;
typedef TYPE_1__ GinEntryAccumulator ;
typedef int Datum ;
typedef TYPE_2__ BuildAccumulator ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int *,int*) ;

__attribute__((used)) static void
FUNC_4(BuildAccumulator *VAR_2,
     ItemPointer VAR_3, OffsetNumber VAR_4,
     Datum VAR_5, GinNullCategory VAR_6)
{
 GinEntryAccumulator VAR_7;
 GinEntryAccumulator *VAR_8;
 bool VAR_9;





 VAR_7.attnum = VAR_4;
 VAR_7.key = VAR_5;
 VAR_7.category = VAR_6;

 VAR_7.list = VAR_3;

 VAR_8 = (GinEntryAccumulator *) FUNC_3(VAR_2->tree, (RBTNode *) &VAR_7,
           &VAR_9);

 if (VAR_9)
 {




  if (VAR_6 == VAR_1)
   VAR_8->key = FUNC_1(VAR_2, VAR_4, VAR_5);
  VAR_8->maxcount = VAR_0;
  VAR_8->count = 1;
  VAR_8->shouldSort = 0;
  VAR_8->list =
   (ItemPointerData *) FUNC_2(sizeof(ItemPointerData) * VAR_0);
  VAR_8->list[0] = *VAR_3;
  VAR_2->allocatedMemory += FUNC_0(VAR_8->list);
 }
 else
 {



 }
}
