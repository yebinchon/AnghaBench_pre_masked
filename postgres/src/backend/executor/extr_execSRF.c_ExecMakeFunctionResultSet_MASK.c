
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


struct TYPE_18__ {int tts_mcxt; } ;
typedef TYPE_3__ TupleTableSlot ;
struct TYPE_21__ {int nargs; int isnull; TYPE_2__* args; int * resultinfo; } ;
struct TYPE_20__ {int allowedModes; int returnMode; scalar_t__ isDone; int * setDesc; int * setResult; int expectedDesc; int * econtext; int type; } ;
struct TYPE_16__ {scalar_t__ fn_strict; } ;
struct TYPE_19__ {int setArgsValid; int shutdown_reg; TYPE_1__ func; int funcResultDesc; int * args; TYPE_6__* fcinfo; int * funcResultStore; TYPE_3__* funcResultSlot; scalar_t__ funcReturnsTuple; } ;
struct TYPE_17__ {scalar_t__ isnull; } ;
typedef TYPE_4__ SetExprState ;
typedef TYPE_5__ ReturnSetInfo ;
typedef int PgStat_FunctionCallUsage ;
typedef int Node ;
typedef int MemoryContext ;
typedef int List ;
typedef TYPE_6__* FunctionCallInfo ;
typedef scalar_t__ ExprDoneCond ;
typedef int ExprContext ;
typedef scalar_t__ Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*,int *,int *) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*,int *,int *,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (TYPE_6__*,int *) ;
 scalar_t__ FUNC_13 (TYPE_3__*,int,int*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int,int,TYPE_3__*) ;

Datum
FUNC_16(SetExprState *VAR_9,
        ExprContext *VAR_10,
        MemoryContext VAR_11,
        bool *VAR_12,
        ExprDoneCond *VAR_13)
{
 List *VAR_14;
 Datum VAR_15;
 FunctionCallInfo VAR_16;
 PgStat_FunctionCallUsage VAR_17;
 ReturnSetInfo VAR_18;
 bool VAR_19;
 int VAR_20;

restart:


 FUNC_7();






 if (VAR_9->funcResultStore)
 {
  TupleTableSlot *VAR_21 = VAR_9->funcResultSlot;
  MemoryContext VAR_22;
  bool VAR_23;






  VAR_22 = FUNC_4(VAR_21->tts_mcxt);
  VAR_23 = FUNC_15(VAR_9->funcResultStore, 1, 0,
             VAR_9->funcResultSlot);
  FUNC_4(VAR_22);

  if (VAR_23)
  {
   *VAR_13 = VAR_3;
   if (VAR_9->funcReturnsTuple)
   {

    *VAR_12 = 0;
    return FUNC_1(VAR_9->funcResultSlot);
   }
   else
   {

    return FUNC_13(VAR_9->funcResultSlot, 1, VAR_12);
   }
  }

  FUNC_14(VAR_9->funcResultStore);
  VAR_9->funcResultStore = ((void*)0);
  *VAR_13 = VAR_2;
  *VAR_12 = 1;
  return (Datum) 0;
 }
 VAR_16 = VAR_9->fcinfo;
 VAR_14 = VAR_9->args;
 if (!VAR_9->setArgsValid)
 {
  MemoryContext VAR_24 = FUNC_4(VAR_11);

  FUNC_0(VAR_16, VAR_14, VAR_10);
  FUNC_4(VAR_24);
 }
 else
 {

  VAR_9->setArgsValid = 0;
 }






 VAR_16->resultinfo = (Node *) &VAR_18;
 VAR_18.type = VAR_8;
 VAR_18.econtext = VAR_10;
 VAR_18.expectedDesc = VAR_9->funcResultDesc;
 VAR_18.allowedModes = (int) (VAR_6 | VAR_5);

 VAR_18.returnMode = VAR_6;

 VAR_18.setResult = ((void*)0);
 VAR_18.setDesc = ((void*)0);





 VAR_19 = 1;
 if (VAR_9->func.fn_strict)
 {
  for (VAR_20 = 0; VAR_20 < VAR_16->nargs; VAR_20++)
  {
   if (VAR_16->args[VAR_20].isnull)
   {
    VAR_19 = 0;
    break;
   }
  }
 }

 if (VAR_19)
 {
  FUNC_12(VAR_16, &VAR_17);

  VAR_16->isnull = 0;
  VAR_18.isDone = VAR_4;
  VAR_15 = FUNC_3(VAR_16);
  *VAR_12 = VAR_16->isnull;
  *VAR_13 = VAR_18.isDone;

  FUNC_11(&VAR_17,
          VAR_18.isDone != VAR_3);
 }
 else
 {

  VAR_15 = (Datum) 0;
  *VAR_12 = 1;
  *VAR_13 = VAR_2;
 }


 if (VAR_18.returnMode == VAR_6)
 {
  if (*VAR_13 != VAR_2)
  {



   if (*VAR_13 == VAR_3)
   {
    VAR_9->setArgsValid = 1;

    if (!VAR_9->shutdown_reg)
    {
     FUNC_6(VAR_10,
            VAR_7,
            FUNC_5(VAR_9));
     VAR_9->shutdown_reg = 1;
    }
   }
  }
 }
 else if (VAR_18.returnMode == VAR_5)
 {

  if (VAR_18.isDone != VAR_4)
   FUNC_8(VAR_1,
     (FUNC_9(VAR_0),
      FUNC_10("table-function protocol for materialize mode was not followed")));
  if (VAR_18.setResult != ((void*)0))
  {

   FUNC_2(VAR_9, VAR_10,
          VAR_18.setResult,
          VAR_18.setDesc);

   goto restart;
  }

  *VAR_13 = VAR_2;
  *VAR_12 = 1;
  VAR_15 = (Datum) 0;
 }
 else
  FUNC_8(VAR_1,
    (FUNC_9(VAR_0),
     FUNC_10("unrecognized table-function returnMode: %d",
      (int) VAR_18.returnMode)));

 return VAR_15;
}
