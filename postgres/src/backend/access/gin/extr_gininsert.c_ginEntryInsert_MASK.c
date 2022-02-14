
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_28__ {scalar_t__ (* findItem ) (TYPE_5__*,TYPE_3__*) ;int isBuild; } ;
struct TYPE_27__ {int isDelete; scalar_t__ entry; } ;
struct TYPE_26__ {int buffer; int off; } ;
struct TYPE_25__ {int index; } ;
struct TYPE_24__ {int nEntries; } ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int ItemPointerData ;
typedef scalar_t__ IndexTuple ;
typedef TYPE_1__ GinStatsData ;
typedef TYPE_2__ GinState ;
typedef int GinNullCategory ;
typedef TYPE_3__ GinBtreeStack ;
typedef TYPE_4__ GinBtreeEntryInsertData ;
typedef TYPE_5__ GinBtreeData ;
typedef int Datum ;
typedef int BlockNumber ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,scalar_t__,int *,int ,TYPE_1__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ,int ,int ,int *,int ,TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_3__*) ;
 TYPE_3__* FUNC_10 (TYPE_5__*,int,int,int *) ;
 int FUNC_11 (int ,int ,int *,int ,TYPE_1__*) ;
 int FUNC_12 (TYPE_5__*,TYPE_3__*,TYPE_4__*,TYPE_1__*) ;
 int FUNC_13 (TYPE_5__*,int ,int ,int ,TYPE_2__*) ;
 int FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (TYPE_5__*,TYPE_3__*) ;

void
FUNC_16(GinState *VAR_1,
      OffsetNumber VAR_2, Datum VAR_3, GinNullCategory VAR_4,
      ItemPointerData *VAR_5, uint32 VAR_6,
      GinStatsData *VAR_7)
{
 GinBtreeData VAR_8;
 GinBtreeEntryInsertData VAR_9;
 GinBtreeStack *VAR_10;
 IndexTuple VAR_11;
 Page VAR_12;

 VAR_9.isDelete = 0;

 FUNC_13(&VAR_8, VAR_2, VAR_3, VAR_4, VAR_1);
 VAR_8.isBuild = (VAR_7 != ((void*)0));

 VAR_10 = FUNC_10(&VAR_8, 0, 0, ((void*)0));
 VAR_12 = FUNC_0(VAR_10->buffer);

 if (VAR_8.findItem(&VAR_8, VAR_10))
 {

  VAR_11 = (IndexTuple) FUNC_5(VAR_12, FUNC_6(VAR_12, VAR_10->off));

  if (FUNC_3(VAR_11))
  {

   BlockNumber VAR_13 = FUNC_2(VAR_11);


   FUNC_4(VAR_10->buffer, VAR_0);
   FUNC_9(VAR_10);


   FUNC_11(VAR_1->index, VAR_13,
          VAR_5, VAR_6,
          VAR_7);
   return;
  }

  FUNC_1(VAR_1->index, ((void*)0), VAR_10->buffer);

  VAR_11 = FUNC_7(VAR_1, VAR_11,
            VAR_5, VAR_6, VAR_7, VAR_10->buffer);

  VAR_9.isDelete = 1;
 }
 else
 {
  FUNC_1(VAR_1->index, ((void*)0), VAR_10->buffer);

  VAR_11 = FUNC_8(VAR_1, VAR_2, VAR_3, VAR_4,
           VAR_5, VAR_6, VAR_7, VAR_10->buffer);





  if (VAR_7)
   VAR_7->nEntries++;
 }


 VAR_9.entry = VAR_11;
 FUNC_12(&VAR_8, VAR_10, &VAR_9, VAR_7);
 FUNC_14(VAR_11);
}
