
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* partrelprunedata; } ;
struct TYPE_5__ {scalar_t__* subplan_map; int* subpart_map; int * present_parts; scalar_t__ exec_pruning_steps; int exec_context; scalar_t__ initial_pruning_steps; int initial_context; } ;
typedef TYPE_1__ PartitionedRelPruningData ;
typedef TYPE_2__ PartitionPruningData ;
typedef int Bitmapset ;


 int * FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 () ;
 int * FUNC_3 (int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(PartitionPruningData *VAR_0,
          PartitionedRelPruningData *VAR_1,
          bool VAR_2,
          Bitmapset **VAR_3)
{
 Bitmapset *VAR_4;
 int VAR_5;


 FUNC_2();


 if (VAR_2 && VAR_1->initial_pruning_steps)
 {
  VAR_4 = FUNC_3(&VAR_1->initial_context,
            VAR_1->initial_pruning_steps);
 }
 else if (!VAR_2 && VAR_1->exec_pruning_steps)
 {
  VAR_4 = FUNC_3(&VAR_1->exec_context,
            VAR_1->exec_pruning_steps);
 }
 else
 {




  VAR_4 = VAR_1->present_parts;
 }


 VAR_5 = -1;
 while ((VAR_5 = FUNC_1(VAR_4, VAR_5)) >= 0)
 {
  if (VAR_1->subplan_map[VAR_5] >= 0)
   *VAR_3 = FUNC_0(*VAR_3,
           VAR_1->subplan_map[VAR_5]);
  else
  {
   int VAR_6 = VAR_1->subpart_map[VAR_5];

   if (VAR_6 >= 0)
    FUNC_4(VAR_0,
              &VAR_0->partrelprunedata[VAR_6],
              VAR_2, VAR_3);
   else
   {







   }
  }
 }
}
