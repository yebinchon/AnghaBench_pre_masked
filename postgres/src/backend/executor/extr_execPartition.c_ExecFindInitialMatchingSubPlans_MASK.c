
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int do_initial_prune; int num_partprunedata; int * other_subplans; TYPE_4__** partprunedata; scalar_t__ do_exec_prune; int prune_context; } ;
struct TYPE_12__ {int num_partrelprunedata; TYPE_3__* partrelprunedata; } ;
struct TYPE_10__ {TYPE_1__* planstate; } ;
struct TYPE_11__ {int nparts; int* subplan_map; int* subpart_map; int * present_parts; TYPE_2__ initial_context; scalar_t__ initial_pruning_steps; } ;
struct TYPE_9__ {int ps_ExprContext; } ;
typedef TYPE_3__ PartitionedRelPruningData ;
typedef TYPE_4__ PartitionPruningData ;
typedef TYPE_5__ PartitionPruneState ;
typedef int MemoryContext ;
typedef int Bitmapset ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int *,int) ;
 int * FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_4__*,TYPE_3__*,int,int **) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int*) ;

Bitmapset *
FUNC_14(PartitionPruneState *VAR_0, int VAR_1)
{
 Bitmapset *VAR_2 = ((void*)0);
 MemoryContext VAR_3;
 int VAR_4;


 FUNC_0(VAR_0->do_initial_prune);





 VAR_3 = FUNC_2(VAR_0->prune_context);





 for (VAR_4 = 0; VAR_4 < VAR_0->num_partprunedata; VAR_4++)
 {
  PartitionPruningData *VAR_5;
  PartitionedRelPruningData *VAR_6;

  VAR_5 = VAR_0->partprunedata[VAR_4];
  VAR_6 = &VAR_5->partrelprunedata[0];


  FUNC_11(VAR_5, VAR_6, 1, &VAR_2);


  if (VAR_6->initial_pruning_steps)
   FUNC_3(VAR_6->initial_context.planstate->ps_ExprContext);
 }


 VAR_2 = FUNC_5(VAR_2, VAR_0->other_subplans);

 FUNC_2(VAR_3);


 VAR_2 = FUNC_6(VAR_2);

 FUNC_1(VAR_0->prune_context);
 if (VAR_0->do_exec_prune && FUNC_10(VAR_2) < VAR_1)
 {
  int *VAR_7;
  Bitmapset *VAR_8;
  int VAR_9;
  int VAR_10;






  VAR_7 = (int *) FUNC_12(sizeof(int) * VAR_1);
  VAR_10 = 1;
  VAR_9 = -1;
  while ((VAR_9 = FUNC_9(VAR_2, VAR_9)) >= 0)
  {
   FUNC_0(VAR_9 < VAR_1);
   VAR_7[VAR_9] = VAR_10++;
  }






  for (VAR_9 = 0; VAR_9 < VAR_0->num_partprunedata; VAR_9++)
  {
   PartitionPruningData *VAR_11 = VAR_0->partprunedata[VAR_9];
   int VAR_12;
   for (VAR_12 = VAR_11->num_partrelprunedata - 1; VAR_12 >= 0; VAR_12--)
   {
    PartitionedRelPruningData *VAR_13 = &VAR_11->partrelprunedata[VAR_12];
    int VAR_14 = VAR_13->nparts;
    int VAR_15;


    FUNC_7(VAR_13->present_parts);
    VAR_13->present_parts = ((void*)0);

    for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
    {
     int VAR_16 = VAR_13->subplan_map[VAR_15];
     int VAR_17;
     if (VAR_16 >= 0)
     {
      FUNC_0(VAR_16 < VAR_1);
      VAR_13->subplan_map[VAR_15] = VAR_7[VAR_16] - 1;

      if (VAR_7[VAR_16] > 0)
       VAR_13->present_parts =
        FUNC_4(VAR_13->present_parts, VAR_15);
     }
     else if ((VAR_17 = VAR_13->subpart_map[VAR_15]) >= 0)
     {
      PartitionedRelPruningData *VAR_18;

      VAR_18 = &VAR_11->partrelprunedata[VAR_17];

      if (!FUNC_8(VAR_18->present_parts))
       VAR_13->present_parts =
        FUNC_4(VAR_13->present_parts, VAR_15);
     }
    }
   }
  }





  VAR_8 = ((void*)0);
  VAR_9 = -1;
  while ((VAR_9 = FUNC_9(VAR_0->other_subplans, VAR_9)) >= 0)
   VAR_8 = FUNC_4(VAR_8,
            VAR_7[VAR_9] - 1);

  FUNC_7(VAR_0->other_subplans);
  VAR_0->other_subplans = VAR_8;

  FUNC_13(VAR_7);
 }

 return VAR_2;
}
