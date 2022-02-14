
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int nbatch; TYPE_3__* batches; TYPE_2__* parallel_state; } ;
struct TYPE_10__ {int at_least_one_chunk; size_t preallocated; TYPE_1__* shared; } ;
struct TYPE_9__ {scalar_t__ growth; scalar_t__ space_allowed; int lock; } ;
struct TYPE_8__ {scalar_t__ estimated_size; int space_exhausted; } ;
typedef TYPE_2__ ParallelHashJoinState ;
typedef TYPE_3__ ParallelHashJoinBatchAccessor ;
typedef scalar_t__ ParallelHashGrowth ;
typedef TYPE_4__* HashJoinTable ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 size_t FUNC_5 (size_t) ;
 size_t FUNC_6 (size_t,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static bool
FUNC_7(HashJoinTable VAR_6, int VAR_7, size_t VAR_8)
{
 ParallelHashJoinState *VAR_9 = VAR_6->parallel_state;
 ParallelHashJoinBatchAccessor *VAR_10 = &VAR_6->batches[VAR_7];
 size_t VAR_11 = FUNC_6(VAR_8, VAR_1 - VAR_0);

 FUNC_0(VAR_7 > 0);
 FUNC_0(VAR_7 < VAR_6->nbatch);
 FUNC_0(VAR_8 == FUNC_5(VAR_8));

 FUNC_3(&VAR_9->lock, VAR_2);


 if (VAR_9->growth == VAR_4 ||
  VAR_9->growth == VAR_5)
 {
  ParallelHashGrowth VAR_12 = VAR_9->growth;

  FUNC_4(&VAR_9->lock);
  if (VAR_12 == VAR_4)
   FUNC_1(VAR_6);
  else if (VAR_12 == VAR_5)
   FUNC_2(VAR_6);

  return 0;
 }

 if (VAR_9->growth != VAR_3 &&
  VAR_10->at_least_one_chunk &&
  (VAR_10->shared->estimated_size + VAR_11 + VAR_0
   > VAR_9->space_allowed))
 {




  VAR_10->shared->space_exhausted = 1;
  VAR_9->growth = VAR_4;
  FUNC_4(&VAR_9->lock);

  return 0;
 }

 VAR_10->at_least_one_chunk = 1;
 VAR_10->shared->estimated_size += VAR_11 + VAR_0;
 VAR_10->preallocated = VAR_11;
 FUNC_4(&VAR_9->lock);

 return 1;
}
