
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nitems; int node; int * items; int * seg; int action; } ;
typedef TYPE_1__ leafSegmentInfo ;
struct TYPE_6__ {int oldformat; int segments; } ;
typedef TYPE_2__ disassembledLeaf ;
typedef scalar_t__ Pointer ;
typedef int Page ;
typedef int ItemPointerData ;
typedef int ItemPointer ;
typedef int GinPostingList ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ,int) ;
 void* FUNC_8 (int) ;
 TYPE_2__* FUNC_9 (int) ;

__attribute__((used)) static disassembledLeaf *
FUNC_10(Page VAR_2)
{
 disassembledLeaf *VAR_3;
 GinPostingList *VAR_4;
 Pointer VAR_5;
 Pointer VAR_6;

 VAR_3 = FUNC_9(sizeof(disassembledLeaf));
 FUNC_5(&VAR_3->segments);

 if (FUNC_3(VAR_2))
 {



  VAR_4 = FUNC_0(VAR_2);
  VAR_5 = (Pointer) VAR_4;
  VAR_6 = VAR_5 + FUNC_1(VAR_2);
  while ((Pointer) VAR_4 < VAR_6)
  {
   leafSegmentInfo *VAR_7 = FUNC_8(sizeof(leafSegmentInfo));

   VAR_7->action = VAR_1;
   VAR_7->seg = VAR_4;
   VAR_7->items = ((void*)0);
   VAR_7->nitems = 0;
   FUNC_6(&VAR_3->segments, &VAR_7->node);

   VAR_4 = FUNC_2(VAR_4);
  }
  VAR_3->oldformat = 0;
 }
 else
 {





  ItemPointer VAR_8;
  int VAR_9;
  leafSegmentInfo *VAR_10;

  VAR_8 = FUNC_4(VAR_2, &VAR_9);

  if (VAR_9 > 0)
  {
   VAR_10 = FUNC_8(sizeof(leafSegmentInfo));

   VAR_10->action = VAR_0;
   VAR_10->seg = ((void*)0);
   VAR_10->items = FUNC_8(VAR_9 * sizeof(ItemPointerData));
   FUNC_7(VAR_10->items, VAR_8, VAR_9 * sizeof(ItemPointerData));
   VAR_10->nitems = VAR_9;

   FUNC_6(&VAR_3->segments, &VAR_10->node);
  }

  VAR_3->oldformat = 1;
 }

 return VAR_3;
}
