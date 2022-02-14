
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int flags; } ;
struct TYPE_13__ {int fullScan; int itemptr; } ;
struct TYPE_12__ {void* buffer; } ;
struct TYPE_11__ {int isFinished; int offset; int nlist; void* buffer; int * list; TYPE_5__ btree; int curItem; } ;
struct TYPE_10__ {int index; } ;
typedef int Snapshot ;
typedef int Page ;
typedef int ItemPointerData ;
typedef TYPE_1__ GinState ;
typedef TYPE_2__* GinScanEntry ;
typedef TYPE_3__ GinBtreeStack ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_2 (int ,int*,int ) ;
 int * FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_9__* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (void*) ;
 void* VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,scalar_t__,int ) ;
 int FUNC_11 (void*,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (void*) ;
 int FUNC_15 (int ,char*,scalar_t__,int ,int) ;
 int FUNC_16 (TYPE_3__*) ;
 scalar_t__ FUNC_17 (int *,int *) ;
 TYPE_3__* FUNC_18 (TYPE_5__*,int,int,int ) ;
 void* FUNC_19 (void*,int ,int ) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static void
FUNC_21(GinState *VAR_7, GinScanEntry VAR_8,
       ItemPointerData VAR_9, Snapshot VAR_10)
{
 Page VAR_11;
 int VAR_12;
 bool VAR_13;

 if (!FUNC_1(VAR_8->buffer))
 {
  VAR_8->isFinished = 1;
  return;
 }







 if (FUNC_17(&VAR_8->curItem, &VAR_9) == 0)
 {
  VAR_13 = 1;
  FUNC_11(VAR_8->buffer, VAR_3);
 }
 else
 {
  GinBtreeStack *VAR_14;

  FUNC_13(VAR_8->buffer);




  if (FUNC_9(&VAR_9))
  {
   FUNC_10(&VAR_8->btree.itemptr,
         FUNC_4(&VAR_9) + 1,
         VAR_1);
  }
  else
  {
   FUNC_10(&VAR_8->btree.itemptr,
         FUNC_4(&VAR_9),
         FUNC_12(FUNC_5(&VAR_9)));
  }
  VAR_8->btree.fullScan = 0;
  VAR_14 = FUNC_18(&VAR_8->btree, 1, 0, VAR_10);


  VAR_8->buffer = VAR_14->buffer;
  FUNC_8(VAR_8->buffer);
  FUNC_16(VAR_14);
  VAR_13 = 0;
 }

 FUNC_15(VAR_0, "entryLoadMoreItems, %u/%u, skip: %d",
   FUNC_4(&VAR_9),
   FUNC_5(&VAR_9),
   !VAR_13);

 VAR_11 = FUNC_0(VAR_8->buffer);
 for (;;)
 {
  VAR_8->offset = VAR_6;
  if (VAR_8->list)
  {
   FUNC_20(VAR_8->list);
   VAR_8->list = ((void*)0);
   VAR_8->nlist = 0;
  }

  if (VAR_13)
  {




   if (FUNC_7(VAR_11))
   {
    FUNC_14(VAR_8->buffer);
    VAR_8->buffer = VAR_5;
    VAR_8->isFinished = 1;
    return;
   }





   VAR_8->buffer = FUNC_19(VAR_8->buffer,
           VAR_7->index,
           VAR_3);
   VAR_11 = FUNC_0(VAR_8->buffer);
  }
  VAR_13 = 1;

  if (FUNC_6(VAR_11)->flags & VAR_2)
   continue;
  if (!FUNC_7(VAR_11) &&
   FUNC_17(&VAR_9, FUNC_3(VAR_11)) >= 0)
  {




   continue;
  }

  VAR_8->list = FUNC_2(VAR_11, &VAR_8->nlist, VAR_9);

  for (VAR_12 = 0; VAR_12 < VAR_8->nlist; VAR_12++)
  {
   if (FUNC_17(&VAR_9, &VAR_8->list[VAR_12]) < 0)
   {
    VAR_8->offset = VAR_12;

    if (FUNC_7(VAR_11))
    {

     FUNC_14(VAR_8->buffer);
     VAR_8->buffer = VAR_5;
    }
    else
     FUNC_11(VAR_8->buffer, VAR_4);
    return;
   }
  }
 }
}
