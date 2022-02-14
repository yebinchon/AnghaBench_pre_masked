
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_29__ {scalar_t__ aggstrategy; int numCols; } ;
struct TYPE_23__ {TYPE_5__* ps_ExprContext; } ;
struct TYPE_24__ {int * ss_ScanTupleSlot; TYPE_1__ ps; } ;
struct TYPE_28__ {int agg_done; int projected_set; int input_done; int current_phase; int numphases; scalar_t__ aggstrategy; int table_filled; int * grp_firstTuple; TYPE_4__* phase; TYPE_3__* perhash; TYPE_5__** aggcontexts; TYPE_2__ ss; int * pergroups; int peragg; TYPE_5__* tmpcontext; } ;
struct TYPE_27__ {int * ecxt_outertuple; int * ecxt_innertuple; } ;
struct TYPE_26__ {scalar_t__ numsets; int* gset_lengths; int * eqfunctions; TYPE_7__* aggnode; } ;
struct TYPE_25__ {int hashiter; int hashtable; } ;
typedef TYPE_5__ ExprContext ;
typedef int AggStatePerGroup ;
typedef int AggStatePerAgg ;
typedef TYPE_6__ AggState ;
typedef TYPE_7__ Agg ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int ,TYPE_5__*) ;
 int FUNC_4 (int ,TYPE_5__*) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (TYPE_6__*) ;
 int * FUNC_11 (TYPE_6__*) ;
 int * FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (TYPE_6__*,int ,int ) ;
 int FUNC_14 (TYPE_6__*,int *,int) ;
 int FUNC_15 (TYPE_6__*,int) ;
 int FUNC_16 (TYPE_6__*) ;
 int FUNC_17 (TYPE_6__*,int *,int) ;
 int * FUNC_18 (TYPE_6__*) ;
 int FUNC_19 (TYPE_6__*,int,int) ;

__attribute__((used)) static TupleTableSlot *
FUNC_20(AggState *VAR_2)
{
 Agg *VAR_3 = VAR_2->phase->aggnode;
 ExprContext *VAR_4;
 ExprContext *VAR_5;
 AggStatePerAgg VAR_6;
 AggStatePerGroup *VAR_7;
 TupleTableSlot *VAR_8;
 TupleTableSlot *VAR_9;
 TupleTableSlot *VAR_10;
 bool VAR_11 = VAR_2->phase->numsets > 0;
 int VAR_12 = FUNC_5(VAR_2->phase->numsets, 1);
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 VAR_4 = VAR_2->ss.ps.ps_ExprContext;
 VAR_5 = VAR_2->tmpcontext;

 VAR_6 = VAR_2->peragg;
 VAR_7 = VAR_2->pergroups;
 VAR_9 = VAR_2->ss.ss_ScanTupleSlot;
 while (!VAR_2->agg_done)
 {
  FUNC_6(VAR_4);




  if (VAR_2->projected_set >= 0 &&
   VAR_2->projected_set < VAR_12)
   VAR_15 = VAR_2->projected_set + 1;
  else
   VAR_15 = VAR_12;
  for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++)
  {
   FUNC_6(VAR_2->aggcontexts[VAR_16]);
  }





  if (VAR_2->input_done == 1 &&
   VAR_2->projected_set >= (VAR_12 - 1))
  {
   if (VAR_2->current_phase < VAR_2->numphases - 1)
   {
    FUNC_15(VAR_2, VAR_2->current_phase + 1);
    VAR_2->input_done = 0;
    VAR_2->projected_set = -1;
    VAR_12 = FUNC_5(VAR_2->phase->numsets, 1);
    VAR_3 = VAR_2->phase->aggnode;
    VAR_15 = VAR_12;
   }
   else if (VAR_2->aggstrategy == VAR_0)
   {




    FUNC_15(VAR_2, 0);
    VAR_2->table_filled = 1;
    FUNC_8(VAR_2->perhash[0].hashtable,
            &VAR_2->perhash[0].hashiter);
    FUNC_19(VAR_2, 0, 1);
    return FUNC_11(VAR_2);
   }
   else
   {
    VAR_2->agg_done = 1;
    break;
   }
  }






  if (VAR_2->projected_set >= 0 &&
   VAR_2->projected_set < (VAR_12 - 1))
   VAR_14 = VAR_2->phase->gset_lengths[VAR_2->projected_set + 1];
  else
   VAR_14 = 0;
  VAR_5->ecxt_innertuple = VAR_4->ecxt_outertuple;
  if (VAR_2->input_done ||
   (VAR_3->aggstrategy != VAR_1 &&
    VAR_2->projected_set != -1 &&
    VAR_2->projected_set < (VAR_12 - 1) &&
    VAR_14 > 0 &&
    !FUNC_4(VAR_2->phase->eqfunctions[VAR_14 - 1],
          VAR_5)))
  {
   VAR_2->projected_set += 1;

   FUNC_0(VAR_2->projected_set < VAR_12);
   FUNC_0(VAR_14 > 0 || VAR_2->input_done);
  }
  else
  {





   VAR_2->projected_set = 0;





   if (VAR_2->grp_firstTuple == ((void*)0))
   {
    VAR_8 = FUNC_12(VAR_2);
    if (!FUNC_9(VAR_8))
    {




     VAR_2->grp_firstTuple = FUNC_1(VAR_8);
    }
    else
    {

     if (VAR_11)
     {
      VAR_2->input_done = 1;

      while (VAR_2->phase->gset_lengths[VAR_2->projected_set] > 0)
      {
       VAR_2->projected_set += 1;
       if (VAR_2->projected_set >= VAR_12)
       {






        break;
       }
      }

      if (VAR_2->projected_set >= VAR_12)
       continue;
     }
     else
     {
      VAR_2->agg_done = 1;

      if (VAR_3->aggstrategy != VAR_1)
       return ((void*)0);
     }
    }
   }




   FUNC_14(VAR_2, VAR_7, VAR_15);

   if (VAR_2->grp_firstTuple != ((void*)0))
   {





    FUNC_2(VAR_2->grp_firstTuple,
          VAR_9, 1);
    VAR_2->grp_firstTuple = ((void*)0);


    VAR_5->ecxt_outertuple = VAR_9;





    for (;;)
    {




     if (VAR_2->aggstrategy == VAR_0 &&
      VAR_2->current_phase == 1)
     {
      FUNC_16(VAR_2);
     }


     FUNC_10(VAR_2);


     FUNC_7(VAR_5);

     VAR_8 = FUNC_12(VAR_2);
     if (FUNC_9(VAR_8))
     {

      if (VAR_11)
      {
       VAR_2->input_done = 1;
       break;
      }
      else
      {
       VAR_2->agg_done = 1;
       break;
      }
     }

     VAR_5->ecxt_outertuple = VAR_8;





     if (VAR_3->aggstrategy != VAR_1)
     {
      VAR_5->ecxt_innertuple = VAR_9;
      if (!FUNC_3(VAR_2->phase->eqfunctions[VAR_3->numCols - 1],
           VAR_5))
      {
       VAR_2->grp_firstTuple = FUNC_1(VAR_8);
       break;
      }
     }
    }
   }
   VAR_4->ecxt_outertuple = VAR_9;
  }

  FUNC_0(VAR_2->projected_set >= 0);

  VAR_13 = VAR_2->projected_set;

  FUNC_17(VAR_2, VAR_4->ecxt_outertuple, VAR_13);

  FUNC_19(VAR_2, VAR_13, 0);

  FUNC_13(VAR_2,
       VAR_6,
       VAR_7[VAR_13]);





  VAR_10 = FUNC_18(VAR_2);
  if (VAR_10)
   return VAR_10;
 }


 return ((void*)0);
}
