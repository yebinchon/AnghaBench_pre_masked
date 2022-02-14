
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_17__ {TYPE_1__* rd_rel; } ;
struct TYPE_16__ {int * origslot; int recheckestate; TYPE_4__** relsubs_rowmark; } ;
struct TYPE_15__ {int wholeAttNo; int ctidAttNo; int toidAttNo; TYPE_3__* rowmark; } ;
struct TYPE_14__ {scalar_t__ markType; scalar_t__ rti; scalar_t__ prti; scalar_t__ relid; TYPE_6__* relation; } ;
struct TYPE_13__ {int (* RefetchForeignRow ) (int ,TYPE_3__*,int ,int *,int*) ;} ;
struct TYPE_12__ {scalar_t__ relkind; } ;
typedef scalar_t__ Oid ;
typedef int ItemPointer ;
typedef int Index ;
typedef TYPE_2__ FdwRoutine ;
typedef TYPE_3__ ExecRowMark ;
typedef TYPE_4__ ExecAuxRowMark ;
typedef TYPE_5__ EPQState ;
typedef int Datum ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int ,int*) ;
 int FUNC_4 (int ,int *) ;
 TYPE_2__* FUNC_5 (TYPE_6__*,int) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (TYPE_6__*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (int ,TYPE_3__*,int ,int *,int*) ;
 int FUNC_15 (TYPE_6__*,int ,int ,int *) ;

bool
FUNC_16(EPQState *VAR_6, Index VAR_7, TupleTableSlot *VAR_8)
{
 ExecAuxRowMark *VAR_9 = VAR_6->relsubs_rowmark[VAR_7 - 1];
 ExecRowMark *VAR_10 = VAR_9->rowmark;
 Datum VAR_11;
 bool VAR_12;

 FUNC_0(VAR_9 != ((void*)0));
 FUNC_0(VAR_6->origslot != ((void*)0));

 if (FUNC_8(VAR_10->markType))
  FUNC_10(VAR_1, "EvalPlanQual doesn't support locking rowmarks");


 if (VAR_10->rti != VAR_10->prti)
 {
  Oid VAR_13;

  VAR_11 = FUNC_3(VAR_6->origslot,
          VAR_9->toidAttNo,
          &VAR_12);

  if (VAR_12)
   return 0;

  VAR_13 = FUNC_1(VAR_11);

  FUNC_0(FUNC_6(VAR_10->relid));
  if (VAR_13 != VAR_10->relid)
  {

   return 0;
  }
 }

 if (VAR_10->markType == VAR_4)
 {
  FUNC_0(VAR_10->relation != ((void*)0));


  VAR_11 = FUNC_3(VAR_6->origslot,
          VAR_9->ctidAttNo,
          &VAR_12);

  if (VAR_12)
   return 0;


  if (VAR_10->relation->rd_rel->relkind == VAR_2)
  {
   FdwRoutine *VAR_14;
   bool VAR_15 = 0;

   VAR_14 = FUNC_5(VAR_10->relation, 0);

   if (VAR_14->RefetchForeignRow == ((void*)0))
    FUNC_11(VAR_1,
      (FUNC_12(VAR_0),
       FUNC_13("cannot lock rows in foreign table \"%s\"",
        FUNC_7(VAR_10->relation))));

   VAR_14->RefetchForeignRow(VAR_6->recheckestate,
            VAR_10,
            VAR_11,
            VAR_8,
            &VAR_15);
   if (FUNC_9(VAR_8))
    FUNC_10(VAR_1, "failed to fetch tuple for EvalPlanQual recheck");






   return 1;
  }
  else
  {

   if (!FUNC_15(VAR_10->relation,
              (ItemPointer) FUNC_2(VAR_11),
              VAR_5, VAR_8))
    FUNC_10(VAR_1, "failed to fetch tuple for EvalPlanQual recheck");
   return 1;
  }
 }
 else
 {
  FUNC_0(VAR_10->markType == VAR_3);


  VAR_11 = FUNC_3(VAR_6->origslot,
          VAR_9->wholeAttNo,
          &VAR_12);

  if (VAR_12)
   return 0;

  FUNC_4(VAR_11, VAR_8);
  return 1;
 }
}
