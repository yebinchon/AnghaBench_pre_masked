
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int nbatch; TYPE_3__* batches; TYPE_2__* parallel_state; } ;
struct TYPE_8__ {TYPE_1__* shared; scalar_t__ old_ntuples; scalar_t__ ntuples; scalar_t__ estimated_size; scalar_t__ size; } ;
struct TYPE_7__ {int lock; scalar_t__ total_tuples; } ;
struct TYPE_6__ {scalar_t__ ntuples; int old_ntuples; int estimated_size; int size; } ;
typedef TYPE_2__ ParallelHashJoinState ;
typedef TYPE_3__ ParallelHashJoinBatchAccessor ;
typedef TYPE_4__* HashJoinTable ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(HashJoinTable VAR_1)
{
 ParallelHashJoinState *VAR_2 = VAR_1->parallel_state;
 int VAR_3;

 FUNC_0(&VAR_2->lock, VAR_0);
 VAR_2->total_tuples = 0;
 for (VAR_3 = 0; VAR_3 < VAR_1->nbatch; ++VAR_3)
 {
  ParallelHashJoinBatchAccessor *VAR_4 = &VAR_1->batches[VAR_3];

  VAR_4->shared->size += VAR_4->size;
  VAR_4->shared->estimated_size += VAR_4->estimated_size;
  VAR_4->shared->ntuples += VAR_4->ntuples;
  VAR_4->shared->old_ntuples += VAR_4->old_ntuples;
  VAR_4->size = 0;
  VAR_4->estimated_size = 0;
  VAR_4->ntuples = 0;
  VAR_4->old_ntuples = 0;
  VAR_2->total_tuples += VAR_4->shared->ntuples;
 }
 FUNC_1(&VAR_2->lock);
}
