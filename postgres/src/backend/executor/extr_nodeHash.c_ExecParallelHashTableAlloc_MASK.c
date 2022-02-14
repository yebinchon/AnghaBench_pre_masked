
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int dsa_pointer_atomic ;
struct TYPE_9__ {int area; TYPE_2__* parallel_state; TYPE_1__* batches; } ;
struct TYPE_8__ {int buckets; } ;
struct TYPE_7__ {int nbuckets; } ;
struct TYPE_6__ {TYPE_3__* shared; } ;
typedef TYPE_3__ ParallelHashJoinBatch ;
typedef TYPE_4__* HashJoinTable ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;

void
FUNC_3(HashJoinTable VAR_1, int VAR_2)
{
 ParallelHashJoinBatch *VAR_3 = VAR_1->batches[VAR_2].shared;
 dsa_pointer_atomic *VAR_4;
 int VAR_5 = VAR_1->parallel_state->nbuckets;
 int VAR_6;

 VAR_3->buckets =
  FUNC_0(VAR_1->area, sizeof(dsa_pointer_atomic) * VAR_5);
 VAR_4 = (dsa_pointer_atomic *)
  FUNC_1(VAR_1->area, VAR_3->buckets);
 for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6)
  FUNC_2(&VAR_4[VAR_6], VAR_0);
}
