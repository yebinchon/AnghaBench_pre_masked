
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int tts_tid; } ;
typedef TYPE_1__ TupleTableSlot ;
typedef int TableScanDesc ;
struct TYPE_15__ {int ecxt_per_tuple_memory; TYPE_1__* ecxt_scantuple; } ;
struct TYPE_14__ {int * ii_PredicateState; int ii_ExpressionsState; int ii_Predicate; } ;
typedef int Snapshot ;
typedef int Relation ;
typedef TYPE_2__ IndexInfo ;
typedef int ExprState ;
typedef TYPE_3__ ExprContext ;
typedef int EState ;
typedef int Datum ;


 int FUNC_0 () ;
 int * FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,int *,int *,int*) ;
 int VAR_0 ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 TYPE_3__* FUNC_8 (int *) ;
 int VAR_1 ;
 int FUNC_9 (int ) ;
 int VAR_2 ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ,TYPE_2__*,int *,int *,int*,int *,int) ;
 int FUNC_16 (int ,int ,int ,int *,int,int) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_19 (int ,int *) ;

__attribute__((used)) static void
FUNC_20(Relation VAR_3,
     Relation VAR_4,
     IndexInfo *VAR_5)
{
 TableScanDesc VAR_6;
 Datum VAR_7[VAR_1];
 bool VAR_8[VAR_1];
 ExprState *VAR_9;
 TupleTableSlot *VAR_10;
 EState *VAR_11;
 ExprContext *VAR_12;
 Snapshot VAR_13;






 if (FUNC_11(FUNC_12(VAR_4)))
  FUNC_13();





 VAR_11 = FUNC_1();
 VAR_12 = FUNC_8(VAR_11);
 VAR_10 = FUNC_19(VAR_3, ((void*)0));


 VAR_12->ecxt_scantuple = VAR_10;


 VAR_9 = FUNC_3(VAR_5->ii_Predicate, VAR_11);




 VAR_13 = FUNC_10(FUNC_7());
 VAR_6 = FUNC_16(VAR_3,
         VAR_13,
         0,
         ((void*)0),
         1,
         1);

 while (FUNC_18(VAR_6, VAR_0, VAR_10))
 {
  FUNC_0();




  if (VAR_9 != ((void*)0))
  {
   if (!FUNC_4(VAR_9, VAR_12))
    continue;
  }




  FUNC_5(VAR_5,
        VAR_10,
        VAR_11,
        VAR_7,
        VAR_8);




  FUNC_15(VAR_3,
           VAR_4, VAR_5,
           &(VAR_10->tts_tid), VAR_7, VAR_8,
           VAR_11, 1);

  FUNC_9(VAR_12->ecxt_per_tuple_memory);
 }

 FUNC_17(VAR_6);
 FUNC_14(VAR_13);

 FUNC_2(VAR_10);

 FUNC_6(VAR_11);


 VAR_5->ii_ExpressionsState = VAR_2;
 VAR_5->ii_PredicateState = ((void*)0);
}
