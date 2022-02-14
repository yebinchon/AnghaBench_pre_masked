
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_24__ {scalar_t__ (* findItem ) (TYPE_4__*,TYPE_3__*) ;} ;
struct TYPE_23__ {int predictNumber; int buffer; int off; } ;
struct TYPE_22__ {int nlist; int reduceResult; int predictNumberResult; int isFinished; int attnum; int * list; int buffer; int btree; int * matchBitmap; int * matchIterator; int queryCategory; scalar_t__ isPartialMatch; int queryKey; int * matchResult; int offset; int curItem; } ;
struct TYPE_21__ {int index; } ;
typedef int Snapshot ;
typedef int Page ;
typedef int ItemPointerData ;
typedef int IndexTuple ;
typedef TYPE_1__ GinState ;
typedef TYPE_2__* GinScanEntry ;
typedef TYPE_3__ GinBtreeStack ;
typedef TYPE_4__ GinBtreeData ;
typedef int BlockNumber ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 (int ,int*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (TYPE_4__*,TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_13 (TYPE_3__*) ;
 TYPE_3__* FUNC_14 (TYPE_4__*,int,int,int ) ;
 int FUNC_15 (TYPE_4__*,int ,int ,int ,TYPE_1__*) ;
 int * FUNC_16 (TYPE_1__*,int ,int ,int*) ;
 TYPE_3__* FUNC_17 (int *,int ,int ,int ) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_20 (TYPE_4__*,TYPE_3__*) ;
 int * FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;

__attribute__((used)) static void
FUNC_25(GinState *VAR_4, GinScanEntry VAR_5, Snapshot VAR_6)
{
 GinBtreeData VAR_7;
 GinBtreeStack *VAR_8;
 Page VAR_9;
 bool VAR_10;

restartScanEntry:
 VAR_5->buffer = VAR_2;
 FUNC_7(&VAR_5->curItem);
 VAR_5->offset = VAR_3;
 if (VAR_5->list)
  FUNC_18(VAR_5->list);
 VAR_5->list = ((void*)0);
 VAR_5->nlist = 0;
 VAR_5->matchBitmap = ((void*)0);
 VAR_5->matchResult = ((void*)0);
 VAR_5->reduceResult = 0;
 VAR_5->predictNumberResult = 0;





 FUNC_15(&VAR_7, VAR_5->attnum,
      VAR_5->queryKey, VAR_5->queryCategory,
      VAR_4);
 VAR_8 = FUNC_14(&VAR_7, 1, 0, VAR_6);
 VAR_9 = FUNC_1(VAR_8->buffer);


 VAR_10 = 1;

 VAR_5->isFinished = 1;

 if (VAR_5->isPartialMatch ||
  VAR_5->queryCategory == VAR_0)
 {







  VAR_7.findItem(&VAR_7, VAR_8);
  if (FUNC_12(&VAR_7, VAR_8, VAR_5, VAR_6)
   == 0)
  {





   if (VAR_5->matchBitmap)
   {
    if (VAR_5->matchIterator)
     FUNC_22(VAR_5->matchIterator);
    VAR_5->matchIterator = ((void*)0);
    FUNC_23(VAR_5->matchBitmap);
    VAR_5->matchBitmap = ((void*)0);
   }
   FUNC_8(VAR_8->buffer, VAR_1);
   FUNC_13(VAR_8);
   goto restartScanEntry;
  }

  if (VAR_5->matchBitmap && !FUNC_24(VAR_5->matchBitmap))
  {
   VAR_5->matchIterator = FUNC_21(VAR_5->matchBitmap);
   VAR_5->isFinished = 0;
  }
 }
 else if (VAR_7.findItem(&VAR_7, VAR_8))
 {
  IndexTuple VAR_11 = (IndexTuple) FUNC_9(VAR_9, FUNC_10(VAR_9, VAR_8->off));

  if (FUNC_5(VAR_11))
  {
   BlockNumber VAR_12 = FUNC_4(VAR_11);
   GinBtreeStack *VAR_13;
   Page VAR_14;
   ItemPointerData VAR_15;






   FUNC_11(VAR_4->index, VAR_12, VAR_6);
   FUNC_8(VAR_8->buffer, VAR_1);
   VAR_10 = 0;

   VAR_13 = FUNC_17(&VAR_5->btree, VAR_4->index,
           VAR_12, VAR_6);
   VAR_5->buffer = VAR_13->buffer;






   FUNC_6(VAR_5->buffer);

   VAR_14 = FUNC_1(VAR_5->buffer);




   FUNC_7(&VAR_15);
   VAR_5->list = FUNC_2(VAR_14, &VAR_5->nlist, VAR_15);

   VAR_5->predictNumberResult = VAR_13->predictNumber * VAR_5->nlist;

   FUNC_8(VAR_5->buffer, VAR_1);
   FUNC_13(VAR_13);
   VAR_5->isFinished = 0;
  }
  else
  {
   FUNC_11(VAR_4->index,
         FUNC_0(VAR_8->buffer),
         VAR_6);
   if (FUNC_3(VAR_11) > 0)
   {
    VAR_5->list = FUNC_16(VAR_4, VAR_5->attnum, VAR_11,
             &VAR_5->nlist);
    VAR_5->predictNumberResult = VAR_5->nlist;

    VAR_5->isFinished = 0;
   }
  }
 }
 else
 {




  FUNC_11(VAR_4->index,
        FUNC_0(VAR_8->buffer), VAR_6);
 }

 if (VAR_10)
  FUNC_8(VAR_8->buffer, VAR_1);
 FUNC_13(VAR_8);
}
