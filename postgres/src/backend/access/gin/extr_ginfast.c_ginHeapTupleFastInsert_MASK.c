
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_19__ ;


struct TYPE_24__ {int ntuples; scalar_t__ newRightlink; scalar_t__ prevTail; char metadata; int node; } ;
typedef TYPE_1__ ginxlogUpdateMeta ;
typedef int XLogRecPtr ;
struct TYPE_29__ {scalar_t__ head; scalar_t__ tailFreeSize; scalar_t__ tail; int nPendingPages; scalar_t__ nPendingHeapTuples; } ;
struct TYPE_28__ {TYPE_2__* index; } ;
struct TYPE_27__ {int ntuples; scalar_t__ sumsize; TYPE_6__** tuples; } ;
struct TYPE_26__ {int pd_lower; } ;
struct TYPE_25__ {int rd_node; } ;
struct TYPE_23__ {scalar_t__ rightlink; scalar_t__ maxoff; } ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__* PageHeader ;
typedef int * Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemIdData ;
typedef int Item ;
typedef TYPE_4__ GinTupleCollector ;
typedef TYPE_5__ GinState ;
typedef TYPE_6__ GinMetaPageData ;
typedef scalar_t__ Buffer ;


 int FUNC_0 (int) ;
 int * FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int *,scalar_t__) ;
 int FUNC_3 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_6 ;
 TYPE_6__* FUNC_5 (int *) ;
 TYPE_19__* FUNC_6 (int *) ;
 int FUNC_7 (TYPE_6__*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int *,int ,int,scalar_t__,int,int) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int *,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_16 (TYPE_2__*,scalar_t__) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 () ;
 int FUNC_20 (scalar_t__) ;
 int VAR_13 ;
 int FUNC_21 () ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int,char*,int) ;
 int FUNC_24 (int,scalar_t__,int) ;
 int FUNC_25 (char*,int) ;
 int FUNC_26 (int ,char*,int ) ;
 int FUNC_27 (TYPE_5__*,int,int,int,int *) ;
 int FUNC_28 (TYPE_2__*,TYPE_6__**,int,TYPE_6__*) ;
 int FUNC_29 (char*,TYPE_6__*,int) ;
 int FUNC_30 (TYPE_6__*,int ,int) ;
 scalar_t__ FUNC_31 (scalar_t__) ;

void
FUNC_32(GinState *VAR_14, GinTupleCollector *VAR_15)
{
 Relation VAR_16 = VAR_14->index;
 Buffer VAR_17;
 Page VAR_18;
 GinMetaPageData *VAR_19 = ((void*)0);
 Buffer VAR_20 = VAR_8;
 Page VAR_21 = ((void*)0);
 ginxlogUpdateMeta VAR_22;
 bool VAR_23 = 0;
 bool VAR_24 = 0;
 int VAR_25;
 bool VAR_26;

 if (VAR_15->ntuples == 0)
  return;

 VAR_26 = FUNC_18(VAR_16);

 VAR_22.node = VAR_16->rd_node;
 VAR_22.ntuples = 0;
 VAR_22.newRightlink = VAR_22.prevTail = VAR_7;

 VAR_17 = FUNC_16(VAR_16, VAR_3);
 VAR_18 = FUNC_1(VAR_17);






 FUNC_2(VAR_16, ((void*)0), VAR_17);

 if (VAR_15->sumsize + VAR_15->ntuples * sizeof(ItemIdData) > VAR_6)
 {



  VAR_23 = 1;
 }
 else
 {
  FUNC_8(VAR_17, VAR_2);
  VAR_19 = FUNC_5(VAR_18);

  if (VAR_19->head == VAR_7 ||
   VAR_15->sumsize + VAR_15->ntuples * sizeof(ItemIdData) > VAR_19->tailFreeSize)
  {






   VAR_23 = 1;
   FUNC_8(VAR_17, VAR_5);
  }
 }

 if (VAR_23)
 {



  GinMetaPageData VAR_27;

  FUNC_30(&VAR_27, 0, sizeof(GinMetaPageData));
  FUNC_28(VAR_16, VAR_15->tuples, VAR_15->ntuples, &VAR_27);

  if (VAR_26)
   FUNC_21();




  FUNC_8(VAR_17, VAR_2);
  VAR_19 = FUNC_5(VAR_18);

  if (VAR_19->head == VAR_7)
  {



   FUNC_19();

   VAR_19->head = VAR_27.head;
   VAR_19->tail = VAR_27.tail;
   VAR_19->tailFreeSize = VAR_27.tailFreeSize;

   VAR_19->nPendingPages = VAR_27.nPendingPages;
   VAR_19->nPendingHeapTuples = VAR_27.nPendingHeapTuples;
  }
  else
  {



   VAR_22.prevTail = VAR_19->tail;
   VAR_22.newRightlink = VAR_27.head;

   VAR_20 = FUNC_16(VAR_16, VAR_19->tail);
   FUNC_8(VAR_20, VAR_2);
   VAR_21 = FUNC_1(VAR_20);

   FUNC_0(FUNC_6(VAR_21)->rightlink == VAR_7);

   FUNC_19();

   FUNC_6(VAR_21)->rightlink = VAR_27.head;

   FUNC_9(VAR_20);

   VAR_19->tail = VAR_27.tail;
   VAR_19->tailFreeSize = VAR_27.tailFreeSize;

   VAR_19->nPendingPages += VAR_27.nPendingPages;
   VAR_19->nPendingHeapTuples += VAR_27.nPendingHeapTuples;

   if (VAR_26)
    FUNC_24(1, VAR_20, VAR_10);
  }
 }
 else
 {



  OffsetNumber VAR_28,
     VAR_29;
  int VAR_30,
     VAR_31;
  char *VAR_32;
  char *VAR_33;

  VAR_20 = FUNC_16(VAR_16, VAR_19->tail);
  FUNC_8(VAR_20, VAR_2);
  VAR_21 = FUNC_1(VAR_20);

  VAR_29 = (FUNC_14(VAR_21)) ? VAR_1 :
   FUNC_10(FUNC_13(VAR_21));

  VAR_33 = VAR_32 = (char *) FUNC_31(VAR_15->sumsize);

  VAR_22.ntuples = VAR_15->ntuples;

  if (VAR_26)
   FUNC_21();

  FUNC_19();




  FUNC_0(FUNC_6(VAR_21)->maxoff <= VAR_19->nPendingHeapTuples);
  FUNC_6(VAR_21)->maxoff++;
  VAR_19->nPendingHeapTuples++;

  for (VAR_30 = 0; VAR_30 < VAR_15->ntuples; VAR_30++)
  {
   VAR_31 = FUNC_7(VAR_15->tuples[VAR_30]);
   VAR_28 = FUNC_11(VAR_21, (Item) VAR_15->tuples[VAR_30], VAR_31, VAR_29, 0, 0);

   if (VAR_28 == VAR_9)
    FUNC_26(VAR_0, "failed to add item to index page in \"%s\"",
      FUNC_17(VAR_16));

   FUNC_29(VAR_32, VAR_15->tuples[VAR_30], VAR_31);
   VAR_32 += VAR_31;

   VAR_29++;
  }

  FUNC_0((VAR_32 - VAR_33) <= VAR_15->sumsize);
  if (VAR_26)
  {
   FUNC_24(1, VAR_20, VAR_10);
   FUNC_23(1, VAR_33, VAR_15->sumsize);
  }

  VAR_19->tailFreeSize = FUNC_12(VAR_21);

  FUNC_9(VAR_20);
 }
 ((PageHeader) VAR_18)->pd_lower =
  ((char *) VAR_19 + sizeof(GinMetaPageData)) - (char *) VAR_18;




 FUNC_9(VAR_17);

 if (VAR_26)
 {
  XLogRecPtr VAR_34;

  FUNC_29(&VAR_22.metadata, VAR_19, sizeof(GinMetaPageData));

  FUNC_24(0, VAR_17, VAR_11 | VAR_10);
  FUNC_25((char *) &VAR_22, sizeof(ginxlogUpdateMeta));

  VAR_34 = FUNC_22(VAR_12, VAR_13);
  FUNC_15(VAR_18, VAR_34);

  if (VAR_20 != VAR_8)
  {
   FUNC_15(VAR_21, VAR_34);
  }
 }

 if (VAR_20 != VAR_8)
  FUNC_20(VAR_20);
 VAR_25 = FUNC_4(VAR_16);
 if (VAR_19->nPendingPages * VAR_4 > VAR_25 * 1024L)
  VAR_24 = 1;

 FUNC_20(VAR_17);

 FUNC_3();





 if (VAR_24)
  FUNC_27(VAR_14, 0, 1, 0, ((void*)0));
}
