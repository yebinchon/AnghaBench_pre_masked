
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ blkno; scalar_t__ lsn; int retry_from_parent; int buffer; struct TYPE_17__* parent; void* page; void* downlinkoffnum; } ;
struct TYPE_16__ {int is_build; TYPE_3__* stack; void* r; void* heapRel; int freespace; } ;
struct TYPE_15__ {int t_tid; } ;
typedef int Size ;
typedef void* Relation ;
typedef void* Page ;
typedef void* OffsetNumber ;
typedef int ItemId ;
typedef TYPE_1__* IndexTuple ;
typedef int GISTSTATE ;
typedef TYPE_2__ GISTInsertState ;
typedef TYPE_3__ GISTInsertStack ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 void* VAR_5 ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (void*,int ) ;
 int FUNC_11 (void*,void*) ;
 scalar_t__ FUNC_12 (void*) ;
 int FUNC_13 (void*,scalar_t__) ;
 int FUNC_14 (void*) ;
 int FUNC_15 (void*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (char*,int ) ;
 int FUNC_23 (void*,int ) ;
 void* FUNC_24 (void*,void*,TYPE_1__*,int *) ;
 int FUNC_25 (TYPE_2__*,int *) ;
 TYPE_1__* FUNC_26 (void*,TYPE_1__*,TYPE_1__*,int *) ;
 scalar_t__ FUNC_27 (TYPE_2__*,TYPE_3__*,int *,TYPE_1__*,void*) ;
 int FUNC_28 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_29 (int) ;

void
FUNC_30(Relation VAR_6, IndexTuple VAR_7, Size VAR_8,
    GISTSTATE *VAR_9, Relation VAR_10, bool VAR_11)
{
 ItemId VAR_12;
 IndexTuple VAR_13;
 GISTInsertStack VAR_14;
 GISTInsertStack *VAR_15;
 GISTInsertState VAR_16;
 bool VAR_17 = 0;

 FUNC_28(&VAR_16, 0, sizeof(GISTInsertState));
 VAR_16.freespace = VAR_8;
 VAR_16.r = VAR_6;
 VAR_16.heapRel = VAR_10;
 VAR_16.is_build = VAR_11;


 VAR_14.blkno = VAR_2;
 VAR_14.lsn = 0;
 VAR_14.retry_from_parent = 0;
 VAR_14.parent = ((void*)0);
 VAR_14.downlinkoffnum = VAR_5;
 VAR_16.stack = VAR_15 = &VAR_14;







 for (;;)
 {






  while (VAR_15->retry_from_parent)
  {
   if (VAR_17)
    FUNC_9(VAR_15->buffer, VAR_4);
   VAR_17 = 0;
   FUNC_16(VAR_15->buffer);
   VAR_16.stack = VAR_15 = VAR_15->parent;
  }

  if (FUNC_18(VAR_15->lsn))
   VAR_15->buffer = FUNC_13(VAR_16.r, VAR_15->blkno);





  if (!VAR_17)
  {
   FUNC_9(VAR_15->buffer, VAR_3);
   FUNC_23(VAR_16.r, VAR_15->buffer);
  }

  VAR_15->page = (Page) FUNC_2(VAR_15->buffer);
  VAR_15->lsn = VAR_17 ?
   FUNC_12(VAR_15->page) : FUNC_1(VAR_15->buffer);
  FUNC_0(!FUNC_15(VAR_16.r) || !FUNC_18(VAR_15->lsn));






  if (FUNC_3(VAR_15->page))
  {
   if (!VAR_17)
   {
    FUNC_9(VAR_15->buffer, VAR_4);
    FUNC_9(VAR_15->buffer, VAR_1);
    VAR_17 = 1;

    if (!FUNC_3(VAR_15->page))
     continue;
   }
   FUNC_25(&VAR_16, VAR_9);

   FUNC_17(VAR_15->buffer);
   VAR_17 = 0;
   VAR_16.stack = VAR_15 = VAR_15->parent;
   continue;
  }

  if ((VAR_15->blkno != VAR_2 &&
    VAR_15->parent->lsn < FUNC_4(VAR_15->page)) ||
   FUNC_5(VAR_15->page))
  {






   FUNC_17(VAR_15->buffer);
   VAR_17 = 0;
   VAR_16.stack = VAR_15 = VAR_15->parent;
   continue;
  }

  if (!FUNC_6(VAR_15->page))
  {




   BlockNumber VAR_18;
   IndexTuple VAR_19;
   GISTInsertStack *VAR_20;
   OffsetNumber VAR_21;

   VAR_21 = FUNC_24(VAR_16.r, VAR_15->page, VAR_7, VAR_9);
   VAR_12 = FUNC_11(VAR_15->page, VAR_21);
   VAR_13 = (IndexTuple) FUNC_10(VAR_15->page, VAR_12);
   VAR_18 = FUNC_8(&(VAR_13->t_tid));




   if (FUNC_7(VAR_13))
    FUNC_19(VAR_0,
      (FUNC_22("index \"%s\" contains an inner tuple marked as invalid",
        FUNC_14(VAR_6)),
       FUNC_20("This is caused by an incomplete page split at crash recovery before upgrading to PostgreSQL 9.1."),
       FUNC_21("Please REINDEX it.")));





   VAR_19 = FUNC_26(VAR_16.r, VAR_13, VAR_7, VAR_9);
   if (VAR_19)
   {




    if (!VAR_17)
    {
     FUNC_9(VAR_15->buffer, VAR_4);
     FUNC_9(VAR_15->buffer, VAR_1);
     VAR_17 = 1;
     VAR_15->page = (Page) FUNC_2(VAR_15->buffer);

     if (FUNC_12(VAR_15->page) != VAR_15->lsn)
     {

      continue;
     }
    }
    if (FUNC_27(&VAR_16, VAR_15, VAR_9, VAR_19,
         VAR_21))
    {






     if (VAR_15->blkno != VAR_2)
     {
      FUNC_17(VAR_15->buffer);
      VAR_17 = 0;
      VAR_16.stack = VAR_15 = VAR_15->parent;
     }
     continue;
    }
   }
   FUNC_9(VAR_15->buffer, VAR_4);
   VAR_17 = 0;


   VAR_20 = (GISTInsertStack *) FUNC_29(sizeof(GISTInsertStack));
   VAR_20->blkno = VAR_18;
   VAR_20->parent = VAR_15;
   VAR_20->downlinkoffnum = VAR_21;
   VAR_16.stack = VAR_15 = VAR_20;
  }
  else
  {
   if (!VAR_17)
   {
    FUNC_9(VAR_15->buffer, VAR_4);
    FUNC_9(VAR_15->buffer, VAR_1);
    VAR_17 = 1;
    VAR_15->page = (Page) FUNC_2(VAR_15->buffer);
    VAR_15->lsn = FUNC_12(VAR_15->page);

    if (VAR_15->blkno == VAR_2)
    {




     if (!FUNC_6(VAR_15->page))
     {




      FUNC_9(VAR_15->buffer, VAR_4);
      VAR_17 = 0;
      continue;
     }





    }
    else if ((FUNC_3(VAR_15->page) ||
        VAR_15->parent->lsn < FUNC_4(VAR_15->page)) &&
       FUNC_5(VAR_15->page))
    {




     FUNC_17(VAR_15->buffer);
     VAR_17 = 0;
     VAR_16.stack = VAR_15 = VAR_15->parent;
     continue;
    }
   }



   FUNC_27(&VAR_16, VAR_15, VAR_9, VAR_7,
       VAR_5);
   FUNC_9(VAR_15->buffer, VAR_4);


   for (; VAR_15; VAR_15 = VAR_15->parent)
    FUNC_16(VAR_15->buffer);
   break;
  }
 }
}
