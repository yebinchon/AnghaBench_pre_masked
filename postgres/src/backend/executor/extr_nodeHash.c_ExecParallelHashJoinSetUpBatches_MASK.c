
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32 ;
typedef int name ;
struct TYPE_15__ {int nbatch; TYPE_2__* batches; int hashCxt; int area; TYPE_1__* parallel_state; } ;
struct TYPE_14__ {int batch_barrier; } ;
struct TYPE_13__ {void* outer_tuples; void* inner_tuples; TYPE_3__* shared; } ;
struct TYPE_12__ {int nbatch; int fileset; int nparticipants; int batches; } ;
typedef TYPE_1__ ParallelHashJoinState ;
typedef TYPE_2__ ParallelHashJoinBatchAccessor ;
typedef TYPE_3__ ParallelHashJoinBatch ;
typedef int MemoryContext ;
typedef TYPE_4__* HashJoinTable ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_7 (int ) ;
 TYPE_3__* FUNC_8 (TYPE_3__*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (int ,int) ;
 TYPE_3__* FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (char*,int,char*,int,int) ;
 void* FUNC_15 (int ,int ,scalar_t__,int,int ,int *,char*) ;

__attribute__((used)) static void
FUNC_16(HashJoinTable VAR_4, int VAR_5)
{
 ParallelHashJoinState *VAR_6 = VAR_4->parallel_state;
 ParallelHashJoinBatch *VAR_7;
 MemoryContext VAR_8;
 int VAR_9;

 FUNC_0(VAR_4->batches == ((void*)0));


 VAR_6->batches =
  FUNC_11(VAR_4->area,
       FUNC_6(VAR_4) * VAR_5);
 VAR_6->nbatch = VAR_5;
 VAR_7 = FUNC_12(VAR_4->area, VAR_6->batches);


 VAR_8 = FUNC_7(VAR_4->hashCxt);


 VAR_4->nbatch = VAR_5;
 VAR_4->batches = (ParallelHashJoinBatchAccessor *)
  FUNC_13(sizeof(ParallelHashJoinBatchAccessor) * VAR_4->nbatch);


 for (VAR_9 = 0; VAR_9 < VAR_4->nbatch; ++VAR_9)
 {
  ParallelHashJoinBatchAccessor *VAR_10 = &VAR_4->batches[VAR_9];
  ParallelHashJoinBatch *VAR_11 = FUNC_8(VAR_7, VAR_9);
  char VAR_12[VAR_0];





  FUNC_4(&VAR_11->batch_barrier, 0);
  if (VAR_9 == 0)
  {

   FUNC_2(&VAR_11->batch_barrier);
   while (FUNC_5(&VAR_11->batch_barrier) < VAR_1)
    FUNC_1(&VAR_11->batch_barrier, 0);
   FUNC_3(&VAR_11->batch_barrier);
  }


  VAR_10->shared = VAR_11;


  FUNC_14(VAR_12, sizeof(VAR_12), "i%dof%d", VAR_9, VAR_4->nbatch);
  VAR_10->inner_tuples =
   FUNC_15(FUNC_9(VAR_11),
         VAR_6->nparticipants,
         VAR_2 + 1,
         sizeof(uint32),
         VAR_3,
         &VAR_6->fileset,
         VAR_12);
  FUNC_14(VAR_12, sizeof(VAR_12), "o%dof%d", VAR_9, VAR_4->nbatch);
  VAR_10->outer_tuples =
   FUNC_15(FUNC_10(VAR_11,
               VAR_6->nparticipants),
         VAR_6->nparticipants,
         VAR_2 + 1,
         sizeof(uint32),
         VAR_3,
         &VAR_6->fileset,
         VAR_12);
 }

 FUNC_7(VAR_8);
}
