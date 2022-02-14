
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t ntuples; scalar_t__ blockno; scalar_t__* offsets; } ;
struct TYPE_6__ {int isFinished; int reduceResult; size_t offset; size_t nlist; int * list; int curItem; int buffer; TYPE_2__* matchResult; int * matchIterator; scalar_t__ matchBitmap; } ;
typedef int Snapshot ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemPointerData ;
typedef int GinState ;
typedef TYPE_1__* GinScanEntry ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,scalar_t__) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *,TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 TYPE_2__* FUNC_13 (int *) ;

__attribute__((used)) static void
FUNC_14(GinState *VAR_0, GinScanEntry VAR_1,
    ItemPointerData VAR_2, Snapshot VAR_3)
{
 FUNC_0(!VAR_1->isFinished);

 FUNC_0(!FUNC_5(&VAR_1->curItem) ||
     FUNC_11(&VAR_1->curItem, &VAR_2) <= 0);

 if (VAR_1->matchBitmap)
 {

  BlockNumber VAR_4 = FUNC_2(&VAR_2);
  OffsetNumber VAR_5 = FUNC_3(&VAR_2);
  bool VAR_6 = 0;

  do
  {




   while (VAR_1->matchResult == ((void*)0) ||
       (VAR_1->matchResult->ntuples >= 0 &&
     VAR_1->offset >= VAR_1->matchResult->ntuples) ||
       VAR_1->matchResult->blockno < VAR_4 ||
       (FUNC_4(&VAR_2) &&
     VAR_1->matchResult->blockno == VAR_4))
   {
    VAR_1->matchResult = FUNC_13(VAR_1->matchIterator);

    if (VAR_1->matchResult == ((void*)0))
    {
     FUNC_7(&VAR_1->curItem);
     FUNC_12(VAR_1->matchIterator);
     VAR_1->matchIterator = ((void*)0);
     VAR_1->isFinished = 1;
     break;
    }







    VAR_1->offset = 0;
   }
   if (VAR_1->isFinished)
    break;





   if (VAR_1->matchResult->ntuples < 0)
   {
    FUNC_8(&VAR_1->curItem,
          VAR_1->matchResult->blockno);






    VAR_6 = 1;
    break;
   }





   if (VAR_1->matchResult->blockno == VAR_4)
   {





    if (VAR_1->matchResult->offsets[VAR_1->matchResult->ntuples - 1] <= VAR_5)
    {
     VAR_1->offset = VAR_1->matchResult->ntuples;
     continue;
    }


    while (VAR_1->matchResult->offsets[VAR_1->offset] <= VAR_5)
     VAR_1->offset++;
   }

   FUNC_6(&VAR_1->curItem,
         VAR_1->matchResult->blockno,
         VAR_1->matchResult->offsets[VAR_1->offset]);
   VAR_1->offset++;
   VAR_6 = 1;
  } while (!VAR_6 || (VAR_1->reduceResult == 1 && FUNC_9(VAR_1)));
 }
 else if (!FUNC_1(VAR_1->buffer))
 {




  do
  {
   if (VAR_1->offset >= VAR_1->nlist)
   {
    FUNC_7(&VAR_1->curItem);
    VAR_1->isFinished = 1;
    break;
   }

   VAR_1->curItem = VAR_1->list[VAR_1->offset++];
  } while (FUNC_11(&VAR_1->curItem, &VAR_2) <= 0);

 }
 else
 {

  do
  {

   while (VAR_1->offset >= VAR_1->nlist)
   {
    FUNC_10(VAR_0, VAR_1, VAR_2, VAR_3);

    if (VAR_1->isFinished)
    {
     FUNC_7(&VAR_1->curItem);
     return;
    }
   }

   VAR_1->curItem = VAR_1->list[VAR_1->offset++];

  } while (FUNC_11(&VAR_1->curItem, &VAR_2) <= 0 ||
     (VAR_1->reduceResult == 1 && FUNC_9(VAR_1)));
 }
}
