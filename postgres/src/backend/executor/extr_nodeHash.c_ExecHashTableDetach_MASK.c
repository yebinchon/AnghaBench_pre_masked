
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int nbatch; TYPE_2__* parallel_state; int area; TYPE_1__* batches; } ;
struct TYPE_6__ {int batches; int build_barrier; } ;
struct TYPE_5__ {int outer_tuples; int inner_tuples; } ;
typedef TYPE_2__ ParallelHashJoinState ;
typedef TYPE_3__* HashJoinTable ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5(HashJoinTable VAR_1)
{
 if (VAR_1->parallel_state)
 {
  ParallelHashJoinState *VAR_2 = VAR_1->parallel_state;
  int VAR_3;


  if (VAR_1->batches)
  {
   for (VAR_3 = 0; VAR_3 < VAR_1->nbatch; ++VAR_3)
   {
    FUNC_4(VAR_1->batches[VAR_3].inner_tuples);
    FUNC_4(VAR_1->batches[VAR_3].outer_tuples);
    FUNC_3(VAR_1->batches[VAR_3].inner_tuples);
    FUNC_3(VAR_1->batches[VAR_3].outer_tuples);
   }
  }


  if (FUNC_0(&VAR_2->build_barrier))
  {
   if (FUNC_1(VAR_2->batches))
   {
    FUNC_2(VAR_1->area, VAR_2->batches);
    VAR_2->batches = VAR_0;
   }
  }

  VAR_1->parallel_state = ((void*)0);
 }
}
