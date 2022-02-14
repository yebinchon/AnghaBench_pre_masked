
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int int64 ;
typedef int Tuplestorestate ;
struct TYPE_16__ {int* tts_isnull; scalar_t__* tts_values; } ;
typedef TYPE_3__ TupleTableSlot ;
struct TYPE_19__ {int es_direction; } ;
struct TYPE_18__ {int rowcount; int colcount; TYPE_3__* func_slot; int * tstore; int tupdesc; int setexpr; } ;
struct TYPE_14__ {int ps_ExprContext; TYPE_6__* state; } ;
struct TYPE_15__ {TYPE_1__ ps; TYPE_3__* ss_ScanTupleSlot; } ;
struct TYPE_17__ {int eflags; int ordinal; int nfuncs; scalar_t__ ordinality; int argcontext; TYPE_2__ ss; TYPE_5__* funcstates; scalar_t__ simple; } ;
typedef int ScanDirection ;
typedef TYPE_4__ FunctionScanState ;
typedef TYPE_5__ FunctionScanPerFuncState ;
typedef TYPE_6__ EState ;
typedef scalar_t__ Datum ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 void* FUNC_1 (int ,int ,int ,int ,int) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *,scalar_t__,int,TYPE_3__*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static TupleTableSlot *
FUNC_9(FunctionScanState *VAR_1)
{
 EState *VAR_2;
 ScanDirection VAR_3;
 TupleTableSlot *VAR_4;
 bool VAR_5;
 int64 VAR_6;
 int VAR_7;
 int VAR_8;




 VAR_2 = VAR_1->ss.ps.state;
 VAR_3 = VAR_2->es_direction;
 VAR_4 = VAR_1->ss.ss_ScanTupleSlot;

 if (VAR_1->simple)
 {






  Tuplestorestate *VAR_9 = VAR_1->funcstates[0].tstore;






  if (VAR_9 == ((void*)0))
  {
   VAR_1->funcstates[0].tstore = VAR_9 =
    FUNC_1(VAR_1->funcstates[0].setexpr,
           VAR_1->ss.ps.ps_ExprContext,
           VAR_1->argcontext,
           VAR_1->funcstates[0].tupdesc,
           VAR_1->eflags & VAR_0);






   FUNC_8(VAR_9);
  }




  (void) FUNC_7(VAR_9,
            FUNC_4(VAR_3),
            0,
            VAR_4);
  return VAR_4;
 }







 VAR_6 = VAR_1->ordinal;
 if (FUNC_4(VAR_3))
  VAR_1->ordinal++;
 else
  VAR_1->ordinal--;
 FUNC_0(VAR_4);
 VAR_8 = 0;
 VAR_5 = 1;
 for (VAR_7 = 0; VAR_7 < VAR_1->nfuncs; VAR_7++)
 {
  FunctionScanPerFuncState *VAR_10 = &VAR_1->funcstates[VAR_7];
  int VAR_11;






  if (VAR_10->tstore == ((void*)0))
  {
   VAR_10->tstore =
    FUNC_1(VAR_10->setexpr,
           VAR_1->ss.ps.ps_ExprContext,
           VAR_1->argcontext,
           VAR_10->tupdesc,
           VAR_1->eflags & VAR_0);






   FUNC_8(VAR_10->tstore);
  }
  if (VAR_10->rowcount != -1 && VAR_10->rowcount < VAR_6)
   FUNC_0(VAR_10->func_slot);
  else
   (void) FUNC_7(VAR_10->tstore,
             FUNC_4(VAR_3),
             0,
             VAR_10->func_slot);

  if (FUNC_5(VAR_10->func_slot))
  {







   if (FUNC_4(VAR_3) && VAR_10->rowcount == -1)
    VAR_10->rowcount = VAR_1->ordinal;




   for (VAR_11 = 0; VAR_11 < VAR_10->colcount; VAR_11++)
   {
    VAR_4->tts_values[VAR_8] = (Datum) 0;
    VAR_4->tts_isnull[VAR_8] = 1;
    VAR_8++;
   }
  }
  else
  {



   FUNC_6(VAR_10->func_slot);

   for (VAR_11 = 0; VAR_11 < VAR_10->colcount; VAR_11++)
   {
    VAR_4->tts_values[VAR_8] = VAR_10->func_slot->tts_values[VAR_11];
    VAR_4->tts_isnull[VAR_8] = VAR_10->func_slot->tts_isnull[VAR_11];
    VAR_8++;
   }





   VAR_5 = 0;
  }
 }




 if (VAR_1->ordinality)
 {
  VAR_4->tts_values[VAR_8] = FUNC_3(VAR_1->ordinal);
  VAR_4->tts_isnull[VAR_8] = 0;
 }





 if (!VAR_5)
  FUNC_2(VAR_4);

 return VAR_4;
}
