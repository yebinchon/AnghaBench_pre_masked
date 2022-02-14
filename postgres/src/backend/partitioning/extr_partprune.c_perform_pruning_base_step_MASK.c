
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_21__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_27__ {scalar_t__ fn_oid; } ;
struct TYPE_26__ {int partnatts; int strategy; TYPE_5__* stepcmpfuncs; int ppccontext; TYPE_21__* partsupfunc; } ;
struct TYPE_22__ {int step_id; } ;
struct TYPE_25__ {int nullkeys; int opstrategy; TYPE_1__ step; int cmpfns; int exprs; } ;
struct TYPE_24__ {int scan_default; int scan_null; int * bound_offsets; } ;
struct TYPE_23__ {scalar_t__ fn_oid; } ;
typedef TYPE_2__ PruneStepResult ;
typedef TYPE_3__ PartitionPruneStepOp ;
typedef TYPE_4__ PartitionPruneContext ;
typedef scalar_t__ Oid ;
typedef int ListCell ;
typedef TYPE_5__ FmgrInfo ;
typedef int Expr ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;



 int FUNC_2 (int,int ,int) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (TYPE_5__*,TYPE_21__*,int ) ;
 int FUNC_6 (scalar_t__,TYPE_5__*,int ) ;
 TYPE_2__* FUNC_7 (TYPE_4__*,int ,int *,int,TYPE_5__*,int ) ;
 TYPE_2__* FUNC_8 (TYPE_4__*,int ,int ,int,TYPE_5__*,int ) ;
 TYPE_2__* FUNC_9 (TYPE_4__*,int ,int *,int,TYPE_5__*,int ) ;
 int * FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int * FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int * FUNC_14 (int ,int *) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (TYPE_4__*,int *,int,int *,int*) ;

__attribute__((used)) static PruneStepResult *
FUNC_17(PartitionPruneContext *VAR_2,
        PartitionPruneStepOp *VAR_3)
{
 ListCell *VAR_4,
      *VAR_5;
 int VAR_6,
    VAR_7;
 Datum VAR_8[VAR_1];
 FmgrInfo *VAR_9;
 int VAR_10;




 FUNC_0(FUNC_13(VAR_3->exprs) == FUNC_13(VAR_3->cmpfns));

 VAR_7 = 0;
 VAR_4 = FUNC_12(VAR_3->exprs);
 VAR_5 = FUNC_12(VAR_3->cmpfns);





 for (VAR_6 = 0; VAR_6 < VAR_2->partnatts; VAR_6++)
 {





  if (FUNC_3(VAR_6, VAR_3->nullkeys))
   continue;





  if (VAR_6 > VAR_7 && VAR_2->strategy == 128)
   break;

  if (VAR_4 != ((void*)0))
  {
   Expr *VAR_11;
   Datum VAR_12;
   bool VAR_13;
   Oid VAR_14;

   VAR_11 = FUNC_10(VAR_4);
   VAR_10 = FUNC_2(VAR_2->partnatts,
          VAR_3->step.step_id, VAR_6);
   FUNC_16(VAR_2, VAR_11, VAR_10,
         &VAR_12, &VAR_13);






   if (VAR_13)
   {
    PruneStepResult *VAR_15;

    VAR_15 = (PruneStepResult *) FUNC_15(sizeof(PruneStepResult));
    VAR_15->bound_offsets = ((void*)0);
    VAR_15->scan_default = 0;
    VAR_15->scan_null = 0;

    return VAR_15;
   }


   VAR_14 = FUNC_11(VAR_5);
   FUNC_0(FUNC_1(VAR_14));
   if (VAR_14 != VAR_2->stepcmpfuncs[VAR_10].fn_oid)
   {






    if (VAR_14 == VAR_2->partsupfunc[VAR_6].fn_oid)
     FUNC_5(&VAR_2->stepcmpfuncs[VAR_10],
           &VAR_2->partsupfunc[VAR_6],
           VAR_2->ppccontext);
    else
     FUNC_6(VAR_14, &VAR_2->stepcmpfuncs[VAR_10],
          VAR_2->ppccontext);
   }

   VAR_8[VAR_6] = VAR_12;
   VAR_7++;

   VAR_4 = FUNC_14(VAR_3->exprs, VAR_4);
   VAR_5 = FUNC_14(VAR_3->cmpfns, VAR_5);
  }
 }





 VAR_10 = FUNC_2(VAR_2->partnatts, VAR_3->step.step_id, 0);
 VAR_9 = &VAR_2->stepcmpfuncs[VAR_10];

 switch (VAR_2->strategy)
 {
  case 130:
   return FUNC_7(VAR_2,
           VAR_3->opstrategy,
           VAR_8, VAR_7,
           VAR_9,
           VAR_3->nullkeys);

  case 129:
   return FUNC_8(VAR_2,
           VAR_3->opstrategy,
           VAR_8[0], VAR_7,
           &VAR_9[0],
           VAR_3->nullkeys);

  case 128:
   return FUNC_9(VAR_2,
            VAR_3->opstrategy,
            VAR_8, VAR_7,
            VAR_9,
            VAR_3->nullkeys);

  default:
   FUNC_4(VAR_0, "unexpected partition strategy: %d",
     (int) VAR_2->strategy);
   break;
 }

 return ((void*)0);
}
