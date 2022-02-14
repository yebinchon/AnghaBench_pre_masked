
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int allocatedMemory; } ;
struct TYPE_3__ {int count; int maxcount; int shouldSort; int * list; } ;
typedef int RBTNode ;
typedef int ItemPointerData ;
typedef TYPE_1__ GinEntryAccumulator ;
typedef TYPE_2__ BuildAccumulator ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int) ;

__attribute__((used)) static void
FUNC_8(RBTNode *VAR_3, const RBTNode *VAR_4, void *VAR_5)
{
 GinEntryAccumulator *VAR_6 = (GinEntryAccumulator *) VAR_3;
 const GinEntryAccumulator *VAR_7 = (const GinEntryAccumulator *) VAR_4;
 BuildAccumulator *VAR_8 = (BuildAccumulator *) VAR_5;




 if (VAR_6->count >= VAR_6->maxcount)
 {
  if (VAR_6->maxcount > VAR_2)
   FUNC_2(VAR_1,
     (FUNC_3(VAR_0),
      FUNC_5("posting list is too long"),
      FUNC_4("Reduce maintenance_work_mem.")));

  VAR_8->allocatedMemory -= FUNC_1(VAR_6->list);
  VAR_6->maxcount *= 2;
  VAR_6->list = (ItemPointerData *)
   FUNC_7(VAR_6->list, sizeof(ItemPointerData) * VAR_6->maxcount);
  VAR_8->allocatedMemory += FUNC_1(VAR_6->list);
 }


 if (VAR_6->shouldSort == 0)
 {
  int VAR_9;

  VAR_9 = FUNC_6(VAR_6->list + VAR_6->count - 1, VAR_7->list);
  FUNC_0(VAR_9 != 0);

  if (VAR_9 > 0)
   VAR_6->shouldSort = 1;
 }

 VAR_6->list[VAR_6->count] = VAR_7->list[0];
 VAR_6->count++;
}
