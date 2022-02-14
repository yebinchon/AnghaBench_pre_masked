
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int in_index ;
struct TYPE_25__ {int htups; int tups_inserted; int tuplesort; } ;
typedef TYPE_2__ ValidateIndexState ;
typedef int TupleTableSlot ;
typedef scalar_t__ TableScanDesc ;
struct TYPE_30__ {int ecxt_per_tuple_memory; int * ecxt_scantuple; } ;
struct TYPE_29__ {scalar_t__ rs_nblocks; scalar_t__ rs_cblock; int rs_cbuf; } ;
struct TYPE_28__ {int t_self; } ;
struct TYPE_27__ {int * ii_PredicateState; int ii_ExpressionsState; scalar_t__ ii_Unique; int ii_Predicate; } ;
struct TYPE_26__ {TYPE_1__* rd_rel; } ;
struct TYPE_24__ {int relam; } ;
typedef int Snapshot ;
typedef TYPE_3__* Relation ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int ItemPointerData ;
typedef int * ItemPointer ;
typedef TYPE_4__ IndexInfo ;
typedef TYPE_5__* HeapTuple ;
typedef TYPE_6__* HeapScanDesc ;
typedef int ExprState ;
typedef TYPE_7__ ExprContext ;
typedef int EState ;
typedef int Datum ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int * FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,TYPE_7__*) ;
 int FUNC_9 (TYPE_5__*,int *,int) ;
 int FUNC_10 (TYPE_4__*,int *,int *,int *,int*) ;
 int VAR_4 ;
 int FUNC_11 (int *) ;
 TYPE_7__* FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (TYPE_5__*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_14 (int *,int *) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int ,int ) ;
 int * FUNC_19 (int ,int *) ;
 int VAR_7 ;
 int FUNC_20 (int ) ;
 int VAR_8 ;
 int FUNC_21 (int) ;
 int FUNC_22 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_23 (TYPE_3__*) ;
 int FUNC_24 (TYPE_3__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (char*,scalar_t__,int,int ) ;
 int FUNC_28 (int ,int*) ;
 TYPE_5__* FUNC_29 (scalar_t__,int ) ;
 int FUNC_30 (TYPE_3__*,int *,int*,int *,TYPE_3__*,int ,TYPE_4__*) ;
 int FUNC_31 (int *,int ) ;
 int FUNC_32 (int*,int ,int) ;
 int FUNC_33 (int ) ;
 int FUNC_34 (int ,scalar_t__) ;
 scalar_t__ FUNC_35 (TYPE_3__*,int ,int ,int *,int,int) ;
 int FUNC_36 (scalar_t__) ;
 int FUNC_37 (int ,int,int *,int*,int *) ;

__attribute__((used)) static void
FUNC_38(Relation VAR_14,
         Relation VAR_15,
         IndexInfo *VAR_16,
         Snapshot VAR_17,
         ValidateIndexState *VAR_18)
{
 TableScanDesc VAR_19;
 HeapScanDesc VAR_20;
 HeapTuple VAR_21;
 Datum VAR_22[VAR_5];
 bool VAR_23[VAR_5];
 ExprState *VAR_24;
 TupleTableSlot *VAR_25;
 EState *VAR_26;
 ExprContext *VAR_27;
 BlockNumber VAR_28 = VAR_6;
 OffsetNumber VAR_29[VAR_7];
 bool VAR_30[VAR_7];
 BlockNumber VAR_31 = VAR_6;


 ItemPointer VAR_32 = ((void*)0);
 ItemPointerData VAR_33;
 bool VAR_34 = 0;




 FUNC_0(FUNC_22(VAR_15->rd_rel->relam));





 VAR_26 = FUNC_3();
 VAR_27 = FUNC_12(VAR_26);
 VAR_25 = FUNC_19(FUNC_23(VAR_14),
         &VAR_11);


 VAR_27->ecxt_scantuple = VAR_25;


 VAR_24 = FUNC_7(VAR_16->ii_Predicate, VAR_26);







 VAR_19 = FUNC_35(VAR_14,
         VAR_17,
         0,
         ((void*)0),
         1,
         0);
 VAR_20 = (HeapScanDesc) VAR_19;

 FUNC_34(VAR_10,
         VAR_20->rs_nblocks);




 while ((VAR_21 = FUNC_29(VAR_19, VAR_4)) != ((void*)0))
 {
  ItemPointer VAR_35 = &VAR_21->t_self;
  ItemPointerData VAR_36;
  OffsetNumber VAR_37;

  FUNC_2();

  VAR_18->htups += 1;

  if ((VAR_31 == VAR_6) ||
   (VAR_20->rs_cblock != VAR_31))
  {
   FUNC_34(VAR_9,
           VAR_20->rs_cblock);
   VAR_31 = VAR_20->rs_cblock;
  }
  if (VAR_20->rs_cblock != VAR_28)
  {
   Page VAR_38 = FUNC_1(VAR_20->rs_cbuf);

   FUNC_18(VAR_20->rs_cbuf, VAR_0);
   FUNC_28(VAR_38, VAR_29);
   FUNC_18(VAR_20->rs_cbuf, VAR_1);

   FUNC_32(VAR_30, 0, sizeof(VAR_30));

   VAR_28 = VAR_20->rs_cblock;
  }


  VAR_36 = *VAR_35;
  VAR_37 = FUNC_16(VAR_35);

  if (FUNC_13(VAR_21))
  {
   VAR_37 = VAR_29[VAR_37 - 1];
   if (!FUNC_21(VAR_37))
    FUNC_25(VAR_3,
      (FUNC_26(VAR_2),
       FUNC_27("failed to find parent tuple for heap-only tuple at (%u,%u) in table \"%s\"",
           FUNC_15(VAR_35),
           FUNC_16(VAR_35),
           FUNC_24(VAR_14))));
   FUNC_17(&VAR_36, VAR_37);
  }





  while (!VAR_34 &&
      (!VAR_32 ||
    FUNC_14(VAR_32, &VAR_36) < 0))
  {
   Datum VAR_39;
   bool VAR_40;

   if (VAR_32)
   {



    if (FUNC_15(VAR_32) == VAR_28)
     VAR_30[FUNC_16(VAR_32) - 1] = 1;
   }

   VAR_34 = !FUNC_37(VAR_18->tuplesort, 1,
              &VAR_39, &VAR_40, ((void*)0));
   FUNC_0(VAR_34 || !VAR_40);
   if (!VAR_34)
   {
    FUNC_31(&VAR_33, FUNC_4(VAR_39));
    VAR_32 = &VAR_33;



    FUNC_33(FUNC_5(VAR_39));

   }
   else
   {

    VAR_32 = ((void*)0);
   }
  }





  if ((VAR_34 ||
    FUNC_14(VAR_32, &VAR_36) > 0) &&
   !VAR_30[VAR_37 - 1])
  {
   FUNC_20(VAR_27->ecxt_per_tuple_memory);


   FUNC_9(VAR_21, VAR_25, 0);





   if (VAR_24 != ((void*)0))
   {
    if (!FUNC_8(VAR_24, VAR_27))
     continue;
   }






   FUNC_10(VAR_16,
         VAR_25,
         VAR_26,
         VAR_22,
         VAR_23);
   FUNC_30(VAR_15,
       VAR_22,
       VAR_23,
       &VAR_36,
       VAR_14,
       VAR_16->ii_Unique ?
       VAR_13 : VAR_12,
       VAR_16);

   VAR_18->tups_inserted += 1;
  }
 }

 FUNC_36(VAR_19);

 FUNC_6(VAR_25);

 FUNC_11(VAR_26);


 VAR_16->ii_ExpressionsState = VAR_8;
 VAR_16->ii_PredicateState = ((void*)0);
}
