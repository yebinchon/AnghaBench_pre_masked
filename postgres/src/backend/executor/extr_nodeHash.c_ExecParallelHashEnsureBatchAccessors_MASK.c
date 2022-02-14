
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ nbatch; TYPE_2__* batches; int area; int hashCxt; TYPE_1__* parallel_state; } ;
struct TYPE_7__ {int done; void* outer_tuples; void* inner_tuples; scalar_t__ preallocated; int * shared; } ;
struct TYPE_6__ {scalar_t__ nbatch; int fileset; int nparticipants; int batches; } ;
typedef TYPE_1__ ParallelHashJoinState ;
typedef TYPE_2__ ParallelHashJoinBatchAccessor ;
typedef int ParallelHashJoinBatch ;
typedef int MemoryContext ;
typedef TYPE_3__* HashJoinTable ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int) ;
 void* FUNC_8 (int ,scalar_t__,int *) ;

__attribute__((used)) static void
FUNC_9(HashJoinTable VAR_1)
{
 ParallelHashJoinState *VAR_2 = VAR_1->parallel_state;
 ParallelHashJoinBatch *VAR_3;
 MemoryContext VAR_4;
 int VAR_5;

 if (VAR_1->batches != ((void*)0))
 {
  if (VAR_1->nbatch == VAR_2->nbatch)
   return;
  FUNC_1(VAR_1);
 }
 if (!FUNC_0(VAR_2->batches))
  return;


 VAR_4 = FUNC_2(VAR_1->hashCxt);


 VAR_1->nbatch = VAR_2->nbatch;
 VAR_1->batches = (ParallelHashJoinBatchAccessor *)
  FUNC_7(sizeof(ParallelHashJoinBatchAccessor) * VAR_1->nbatch);


 VAR_3 = (ParallelHashJoinBatch *)
  FUNC_6(VAR_1->area, VAR_2->batches);


 for (VAR_5 = 0; VAR_5 < VAR_1->nbatch; ++VAR_5)
 {
  ParallelHashJoinBatchAccessor *VAR_6 = &VAR_1->batches[VAR_5];
  ParallelHashJoinBatch *VAR_7 = FUNC_3(VAR_3, VAR_5);

  VAR_6->shared = VAR_7;
  VAR_6->preallocated = 0;
  VAR_6->done = 0;
  VAR_6->inner_tuples =
   FUNC_8(FUNC_4(VAR_7),
        VAR_0 + 1,
        &VAR_2->fileset);
  VAR_6->outer_tuples =
   FUNC_8(FUNC_5(VAR_7,
              VAR_2->nparticipants),
        VAR_0 + 1,
        &VAR_2->fileset);
 }

 FUNC_2(VAR_4);
}
