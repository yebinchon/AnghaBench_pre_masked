
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int num_partprunedata; int prune_context; int other_subplans; TYPE_4__** partprunedata; int do_exec_prune; } ;
struct TYPE_12__ {TYPE_3__* partrelprunedata; } ;
struct TYPE_10__ {TYPE_1__* planstate; } ;
struct TYPE_11__ {TYPE_2__ exec_context; scalar_t__ exec_pruning_steps; } ;
struct TYPE_9__ {int ps_ExprContext; } ;
typedef TYPE_3__ PartitionedRelPruningData ;
typedef TYPE_4__ PartitionPruningData ;
typedef TYPE_5__ PartitionPruneState ;
typedef int MemoryContext ;
typedef int Bitmapset ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*,int,int **) ;

Bitmapset *
FUNC_7(PartitionPruneState *VAR_0)
{
 Bitmapset *VAR_1 = ((void*)0);
 MemoryContext VAR_2;
 int VAR_3;






 FUNC_0(VAR_0->do_exec_prune);





 VAR_2 = FUNC_2(VAR_0->prune_context);





 for (VAR_3 = 0; VAR_3 < VAR_0->num_partprunedata; VAR_3++)
 {
  PartitionPruningData *VAR_4;
  PartitionedRelPruningData *VAR_5;

  VAR_4 = VAR_0->partprunedata[VAR_3];
  VAR_5 = &VAR_4->partrelprunedata[0];

  FUNC_6(VAR_4, VAR_5, 0, &VAR_1);


  if (VAR_5->exec_pruning_steps)
   FUNC_3(VAR_5->exec_context.planstate->ps_ExprContext);
 }


 VAR_1 = FUNC_4(VAR_1, VAR_0->other_subplans);

 FUNC_2(VAR_2);


 VAR_1 = FUNC_5(VAR_1);

 FUNC_1(VAR_0->prune_context);

 return VAR_1;
}
