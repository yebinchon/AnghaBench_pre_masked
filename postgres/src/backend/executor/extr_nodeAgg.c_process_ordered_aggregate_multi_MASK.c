
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int * tts_isnull; int * tts_values; } ;
typedef TYPE_2__ TupleTableSlot ;
struct TYPE_21__ {size_t current_set; TYPE_4__* tmpcontext; } ;
struct TYPE_20__ {int numTransInputs; int numDistinctCols; int ** sortstates; int equalfnMulti; TYPE_2__* uniqslot; TYPE_2__* sortslot; TYPE_3__* transfn_fcinfo; } ;
struct TYPE_19__ {TYPE_2__* ecxt_outertuple; TYPE_2__* ecxt_innertuple; } ;
struct TYPE_18__ {TYPE_1__* args; } ;
struct TYPE_16__ {int isnull; int value; } ;
typedef TYPE_3__* FunctionCallInfo ;
typedef TYPE_4__ ExprContext ;
typedef scalar_t__ Datum ;
typedef TYPE_5__* AggStatePerTrans ;
typedef int AggStatePerGroup ;
typedef TYPE_6__ AggState ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_6__*,TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int,int,TYPE_2__*,scalar_t__*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(AggState *VAR_0,
        AggStatePerTrans VAR_1,
        AggStatePerGroup VAR_2)
{
 ExprContext *VAR_3 = VAR_0->tmpcontext;
 FunctionCallInfo VAR_4 = VAR_1->transfn_fcinfo;
 TupleTableSlot *VAR_5 = VAR_1->sortslot;
 TupleTableSlot *VAR_6 = VAR_1->uniqslot;
 int VAR_7 = VAR_1->numTransInputs;
 int VAR_8 = VAR_1->numDistinctCols;
 Datum VAR_9 = (Datum) 0;
 Datum VAR_10 = (Datum) 0;
 bool VAR_11 = 0;
 TupleTableSlot *VAR_12 = VAR_0->tmpcontext->ecxt_outertuple;
 int VAR_13;

 FUNC_8(VAR_1->sortstates[VAR_0->current_set]);

 FUNC_1(VAR_5);
 if (VAR_6)
  FUNC_1(VAR_6);

 while (FUNC_7(VAR_1->sortstates[VAR_0->current_set],
          1, 1, VAR_5, &VAR_9))
 {
  FUNC_0();

  VAR_3->ecxt_outertuple = VAR_5;
  VAR_3->ecxt_innertuple = VAR_6;

  if (VAR_8 == 0 ||
   !VAR_11 ||
   VAR_9 != VAR_10 ||
   !FUNC_2(VAR_1->equalfnMulti, VAR_3))
  {




   FUNC_5(VAR_5, VAR_7);



   for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++)
   {
    VAR_4->args[VAR_13 + 1].value = VAR_5->tts_values[VAR_13];
    VAR_4->args[VAR_13 + 1].isnull = VAR_5->tts_isnull[VAR_13];
   }

   FUNC_4(VAR_0, VAR_1, VAR_2);

   if (VAR_8 > 0)
   {

    TupleTableSlot *VAR_14 = VAR_6;

    VAR_6 = VAR_5;
    VAR_5 = VAR_14;

    VAR_10 = VAR_9;
    VAR_11 = 1;
   }
  }


  FUNC_3(VAR_3);

  FUNC_1(VAR_5);
 }

 if (VAR_6)
  FUNC_1(VAR_6);

 FUNC_6(VAR_1->sortstates[VAR_0->current_set]);
 VAR_1->sortstates[VAR_0->current_set] = ((void*)0);


 VAR_3->ecxt_outertuple = VAR_12;
}
