
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_10__ ;


struct TYPE_24__ {int* tts_isnull; int * tts_values; TYPE_5__* tts_tupleDescriptor; } ;
typedef TYPE_4__ TupleTableSlot ;
typedef TYPE_5__* TupleDesc ;
struct TYPE_22__ {scalar_t__ plan; } ;
struct TYPE_23__ {TYPE_4__* ss_ScanTupleSlot; TYPE_2__ ps; } ;
struct TYPE_26__ {int tupstore; int coldefexprs; int notnulls; int ordinal; TYPE_3__ ss; TYPE_8__* routine; } ;
typedef TYPE_6__ TableFuncScanState ;
struct TYPE_27__ {TYPE_1__* tablefunc; } ;
typedef TYPE_7__ TableFuncScan ;
struct TYPE_28__ {int (* GetValue ) (TYPE_6__*,int,int ,int ,int*) ;scalar_t__ (* FetchRow ) (TYPE_6__*) ;} ;
typedef TYPE_8__ TableFuncRoutine ;
struct TYPE_29__ {int attname; int atttypmod; int atttypid; } ;
struct TYPE_25__ {int natts; } ;
struct TYPE_21__ {int ordinalitycol; } ;
struct TYPE_20__ {int ecxt_per_tuple_memory; } ;
typedef int MemoryContext ;
typedef int ListCell ;
typedef TYPE_9__* Form_pg_attribute ;
typedef int ExprState ;
typedef TYPE_10__ ExprContext ;
typedef int Datum ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *,TYPE_10__*,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 TYPE_9__* FUNC_7 (TYPE_5__*,int) ;
 scalar_t__ FUNC_8 (int,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int ) ;
 scalar_t__ FUNC_12 (int *) ;
 int * FUNC_13 (int ) ;
 int * FUNC_14 (int ,int *) ;
 scalar_t__ FUNC_15 (TYPE_6__*) ;
 int FUNC_16 (TYPE_6__*,int,int ,int ,int*) ;
 int FUNC_17 (int ,TYPE_5__*,int *,int*) ;

__attribute__((used)) static void
FUNC_18(TableFuncScanState *VAR_2, ExprContext *VAR_3)
{
 const TableFuncRoutine *VAR_4 = VAR_2->routine;
 TupleTableSlot *VAR_5 = VAR_2->ss.ss_ScanTupleSlot;
 TupleDesc VAR_6 = VAR_5->tts_tupleDescriptor;
 Datum *VAR_7 = VAR_5->tts_values;
 bool *VAR_8 = VAR_5->tts_isnull;
 int VAR_9 = VAR_6->natts;
 MemoryContext VAR_10;
 int VAR_11;

 VAR_11 =
  ((TableFuncScan *) (VAR_2->ss.ps.plan))->tablefunc->ordinalitycol;







 VAR_10 = FUNC_5(VAR_3->ecxt_per_tuple_memory);




 while (VAR_4->FetchRow(VAR_2))
 {
  ListCell *VAR_12 = FUNC_13(VAR_2->coldefexprs);
  int VAR_13;

  FUNC_0();

  FUNC_1(VAR_2->ss.ss_ScanTupleSlot);





  for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++)
  {
   Form_pg_attribute VAR_14 = FUNC_7(VAR_6, VAR_13);

   if (VAR_13 == VAR_11)
   {

    VAR_7[VAR_13] = FUNC_3(VAR_2->ordinal++);
    VAR_8[VAR_13] = 0;
   }
   else
   {
    bool VAR_15;

    VAR_7[VAR_13] = VAR_4->GetValue(VAR_2,
              VAR_13,
              VAR_14->atttypid,
              VAR_14->atttypmod,
              &VAR_15);


    if (VAR_15 && VAR_12 != ((void*)0))
    {
     ExprState *VAR_16 = (ExprState *) FUNC_12(VAR_12);

     if (VAR_16 != ((void*)0))
      VAR_7[VAR_13] = FUNC_2(VAR_16, VAR_3,
              &VAR_15);
    }


    if (VAR_15 && FUNC_8(VAR_13, VAR_2->notnulls))
     FUNC_9(VAR_1,
       (FUNC_10(VAR_0),
        FUNC_11("null is not allowed in column \"%s\"",
         FUNC_6(VAR_14->attname))));

    VAR_8[VAR_13] = VAR_15;
   }


   if (VAR_12 != ((void*)0))
    VAR_12 = FUNC_14(VAR_2->coldefexprs, VAR_12);
  }

  FUNC_17(VAR_2->tupstore, VAR_6, VAR_7, VAR_8);

  FUNC_4(VAR_3->ecxt_per_tuple_memory);
 }

 FUNC_5(VAR_10);
}
