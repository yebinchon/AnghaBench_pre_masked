
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_43__ TYPE_9__ ;
typedef struct TYPE_42__ TYPE_8__ ;
typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_1__ ;
typedef struct TYPE_35__ TYPE_10__ ;


typedef int TupleTableSlot ;
typedef int TransactionId ;
typedef TYPE_3__* TableScanDesc ;
struct TYPE_37__ {int * rs_parallel; } ;
struct TYPE_43__ {scalar_t__ rs_nblocks; scalar_t__ rs_cblock; TYPE_2__ rs_base; int rs_cbuf; } ;
struct TYPE_42__ {int t_self; int t_data; } ;
struct TYPE_41__ {int ii_BrokenHotChain; int * ii_PredicateState; int ii_ExpressionsState; int ii_Concurrent; int ii_Predicate; int * ii_ExclusionOps; scalar_t__ ii_Unique; } ;
struct TYPE_40__ {scalar_t__ phs_nblocks; } ;
struct TYPE_39__ {TYPE_1__* rd_rel; } ;
struct TYPE_38__ {scalar_t__ rs_snapshot; } ;
struct TYPE_36__ {int relam; } ;
struct TYPE_35__ {int ecxt_per_tuple_memory; int * ecxt_scantuple; } ;
typedef scalar_t__ Snapshot ;
typedef TYPE_4__* Relation ;
typedef TYPE_5__* ParallelBlockTableScanDesc ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int ItemPointerData ;
typedef TYPE_6__ IndexInfo ;
typedef int (* IndexBuildCallback ) (TYPE_4__*,int *,int *,int*,int,void*) ;
typedef TYPE_8__* HeapTuple ;
typedef TYPE_9__* HeapScanDesc ;
typedef int ExprState ;
typedef TYPE_10__ ExprContext ;
typedef int EState ;
typedef int Datum ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int * FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,TYPE_10__*) ;
 int FUNC_7 (TYPE_8__*,int *,int ) ;
 int FUNC_8 (TYPE_6__*,int *,int *,int *,int*) ;
 int VAR_4 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_4__*,int ) ;
 TYPE_10__* FUNC_11 (int *) ;
 int FUNC_12 () ;





 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (TYPE_8__*) ;
 int FUNC_16 (TYPE_8__*) ;
 int FUNC_17 (TYPE_8__*,int ,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_18 () ;
 scalar_t__ FUNC_19 (scalar_t__) ;
 int FUNC_20 (TYPE_4__*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,int ,int) ;
 int FUNC_24 (int ,int ) ;
 int VAR_8 ;
 int FUNC_25 (int ) ;
 int VAR_9 ;
 int FUNC_26 (int) ;
 int FUNC_27 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_28 (int ) ;
 int FUNC_29 (TYPE_4__*) ;
 scalar_t__ VAR_13 ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (scalar_t__) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_33 (int ,TYPE_4__*,int *,int ) ;
 int FUNC_34 (int ,char*,...) ;
 int FUNC_35 (int ,int ) ;
 int FUNC_36 (int ) ;
 int FUNC_37 (char*,int ,int,int ) ;
 int FUNC_38 (int ,int*) ;
 TYPE_8__* FUNC_39 (TYPE_3__*,int ) ;
 int FUNC_40 (TYPE_3__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_41 (TYPE_9__*) ;
 int FUNC_42 (int ,scalar_t__) ;
 TYPE_3__* FUNC_43 (TYPE_4__*,scalar_t__,int ,int *,int,int) ;
 int FUNC_44 (TYPE_3__*) ;
 int * FUNC_45 (TYPE_4__*,int *) ;

__attribute__((used)) static double
FUNC_46(Relation VAR_16,
         Relation VAR_17,
         IndexInfo *VAR_18,
         bool VAR_19,
         bool VAR_20,
         bool VAR_21,
         BlockNumber VAR_22,
         BlockNumber VAR_23,
         IndexBuildCallback VAR_24,
         void *VAR_25,
         TableScanDesc VAR_26)
{
 HeapScanDesc VAR_27;
 bool VAR_28;
 bool VAR_29;
 HeapTuple VAR_30;
 Datum VAR_31[VAR_5];
 bool VAR_32[VAR_5];
 double VAR_33;
 ExprState *VAR_34;
 TupleTableSlot *VAR_35;
 EState *VAR_36;
 ExprContext *VAR_37;
 Snapshot VAR_38;
 bool VAR_39 = 0;
 TransactionId VAR_40;
 BlockNumber VAR_41 = VAR_6;
 BlockNumber VAR_42 = VAR_6;
 OffsetNumber VAR_43[VAR_8];




 FUNC_0(FUNC_27(VAR_17->rd_rel->relam));


 VAR_28 = FUNC_20(VAR_16);


 VAR_29 = (VAR_18->ii_Unique ||
         VAR_18->ii_ExclusionOps != ((void*)0));





 FUNC_0(!(VAR_20 && VAR_29));





 VAR_36 = FUNC_3();
 VAR_37 = FUNC_11(VAR_36);
 VAR_35 = FUNC_45(VAR_16, ((void*)0));


 VAR_37->ecxt_scantuple = VAR_35;


 VAR_34 = FUNC_5(VAR_18->ii_Predicate, VAR_36);
 VAR_40 = VAR_7;


 if (!FUNC_18() && !VAR_18->ii_Concurrent)
  VAR_40 = FUNC_10(VAR_16, VAR_10);

 if (!VAR_26)
 {






  if (!FUNC_31(VAR_40))
  {
   VAR_38 = FUNC_28(FUNC_12());
   VAR_39 = 1;
  }
  else
   VAR_38 = VAR_13;

  VAR_26 = FUNC_43(VAR_16,
          VAR_38,
          0,
          ((void*)0),
          1,
          VAR_19);
 }
 else
 {







  FUNC_0(!FUNC_18());
  FUNC_0(VAR_19);
  VAR_38 = VAR_26->rs_snapshot;
 }

 VAR_27 = (HeapScanDesc) VAR_26;


 if (VAR_21)
 {
  BlockNumber VAR_44;

  if (VAR_27->rs_base.rs_parallel != ((void*)0))
  {
   ParallelBlockTableScanDesc VAR_45;

   VAR_45 = (ParallelBlockTableScanDesc) VAR_27->rs_base.rs_parallel;
   VAR_44 = VAR_45->phs_nblocks;
  }
  else
   VAR_44 = VAR_27->rs_nblocks;

  FUNC_42(VAR_12,
          VAR_44);
 }







 FUNC_0(VAR_38 == VAR_13 || FUNC_19(VAR_38));
 FUNC_0(VAR_38 == VAR_13 ? FUNC_31(VAR_40) :
     !FUNC_31(VAR_40));
 FUNC_0(VAR_38 == VAR_13 || !VAR_20);


 if (!VAR_19)
  FUNC_40(VAR_26, VAR_22, VAR_23);
 else
 {

  FUNC_0(VAR_22 == 0);
  FUNC_0(VAR_23 == VAR_6);
 }

 VAR_33 = 0;




 while ((VAR_30 = FUNC_39(VAR_26, VAR_4)) != ((void*)0))
 {
  bool VAR_46;

  FUNC_2();


  if (VAR_21)
  {
   BlockNumber VAR_47 = FUNC_41(VAR_27);

   if (VAR_47 != VAR_41)
   {
    FUNC_42(VAR_11,
            VAR_47);
    VAR_41 = VAR_47;
   }
  }
  if (VAR_27->rs_cblock != VAR_42)
  {
   Page VAR_48 = FUNC_1(VAR_27->rs_cbuf);

   FUNC_24(VAR_27->rs_cbuf, VAR_0);
   FUNC_38(VAR_48, VAR_43);
   FUNC_24(VAR_27->rs_cbuf, VAR_1);

   VAR_42 = VAR_27->rs_cblock;
  }

  if (VAR_38 == VAR_13)
  {

   bool VAR_49;
   TransactionId VAR_50;

 recheck:







   FUNC_24(VAR_27->rs_cbuf, VAR_0);
   switch (FUNC_17(VAR_30, VAR_40,
            VAR_27->rs_cbuf))
   {
    case 132:

     VAR_49 = 0;
     VAR_46 = 0;
     break;
    case 129:

     VAR_49 = 1;
     VAR_46 = 1;

     VAR_33 += 1;
     break;
    case 128:
     if (FUNC_16(VAR_30))
     {
      VAR_49 = 0;

      VAR_18->ii_BrokenHotChain = 1;
     }
     else
      VAR_49 = 1;

     VAR_46 = 0;
     break;
    case 130:





     if (VAR_20)
     {
      VAR_49 = 1;
      VAR_46 = 1;
      VAR_33 += 1;
      break;
     }
     VAR_50 = FUNC_14(VAR_30->t_data);
     if (!FUNC_30(VAR_50))
     {
      if (!VAR_28)
       FUNC_34(VAR_14, "concurrent insert in progress within table \"%s\"",
         FUNC_29(VAR_16));







      if (VAR_29)
      {



       FUNC_24(VAR_27->rs_cbuf, VAR_1);
       FUNC_33(VAR_50, VAR_16,
             &VAR_30->t_self,
             VAR_15);
       FUNC_2();
       goto recheck;
      }
     }
     else
     {






      VAR_33 += 1;
     }





     VAR_49 = 1;
     VAR_46 = 1;
     break;
    case 131:






     if (VAR_20)
     {
      VAR_49 = 1;
      VAR_46 = 0;
      VAR_33 += 1;
      break;
     }

     VAR_50 = FUNC_13(VAR_30->t_data);
     if (!FUNC_30(VAR_50))
     {
      if (!VAR_28)
       FUNC_34(VAR_14, "concurrent delete in progress within table \"%s\"",
         FUNC_29(VAR_16));
      if (VAR_29 ||
       FUNC_16(VAR_30))
      {



       FUNC_24(VAR_27->rs_cbuf, VAR_1);
       FUNC_33(VAR_50, VAR_16,
             &VAR_30->t_self,
             VAR_15);
       FUNC_2();
       goto recheck;
      }





      VAR_49 = 1;
      VAR_33 += 1;
     }
     else if (FUNC_16(VAR_30))
     {






      VAR_49 = 0;

      VAR_18->ii_BrokenHotChain = 1;
     }
     else
     {





      VAR_49 = 1;
     }

     VAR_46 = 0;
     break;
    default:
     FUNC_34(VAR_3, "unexpected HeapTupleSatisfiesVacuum result");
     VAR_49 = VAR_46 = 0;
     break;
   }

   FUNC_24(VAR_27->rs_cbuf, VAR_1);

   if (!VAR_49)
    continue;
  }
  else
  {

   VAR_46 = 1;
   VAR_33 += 1;
  }

  FUNC_25(VAR_37->ecxt_per_tuple_memory);


  FUNC_7(VAR_30, VAR_35, VAR_27->rs_cbuf);





  if (VAR_34 != ((void*)0))
  {
   if (!FUNC_6(VAR_34, VAR_37))
    continue;
  }






  FUNC_8(VAR_18,
        VAR_35,
        VAR_36,
        VAR_31,
        VAR_32);







  if (FUNC_15(VAR_30))
  {




   ItemPointerData VAR_51;
   OffsetNumber VAR_52;

   VAR_52 = FUNC_22(&VAR_30->t_self);

   if (!FUNC_26(VAR_43[VAR_52 - 1]))
    FUNC_35(VAR_3,
      (FUNC_36(VAR_2),
       FUNC_37("failed to find parent tuple for heap-only tuple at (%u,%u) in table \"%s\"",
           FUNC_21(&VAR_30->t_self),
           VAR_52,
           FUNC_29(VAR_16))));

   FUNC_23(&VAR_51, FUNC_21(&VAR_30->t_self),
         VAR_43[VAR_52 - 1]);


   VAR_24(VAR_17, &VAR_51, VAR_31, VAR_32, VAR_46,
      VAR_25);
  }
  else
  {

   VAR_24(VAR_17, &VAR_30->t_self, VAR_31, VAR_32,
      VAR_46, VAR_25);
  }
 }


 if (VAR_21)
 {
  BlockNumber VAR_53;

  if (VAR_27->rs_base.rs_parallel != ((void*)0))
  {
   ParallelBlockTableScanDesc VAR_54;

   VAR_54 = (ParallelBlockTableScanDesc) VAR_27->rs_base.rs_parallel;
   VAR_53 = VAR_54->phs_nblocks;
  }
  else
   VAR_53 = VAR_27->rs_nblocks;

  FUNC_42(VAR_11,
          VAR_53);
 }

 FUNC_44(VAR_26);


 if (VAR_39)
  FUNC_32(VAR_38);

 FUNC_4(VAR_35);

 FUNC_9(VAR_36);


 VAR_18->ii_ExpressionsState = VAR_9;
 VAR_18->ii_PredicateState = ((void*)0);

 return VAR_33;
}
