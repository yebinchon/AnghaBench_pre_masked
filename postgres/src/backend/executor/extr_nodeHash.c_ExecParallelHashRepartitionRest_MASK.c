
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_12__ {TYPE_1__* batches; int area; TYPE_2__* parallel_state; } ;
struct TYPE_11__ {scalar_t__ t_len; } ;
struct TYPE_10__ {int old_nbatch; int fileset; int old_batches; } ;
struct TYPE_9__ {size_t estimated_size; int inner_tuples; int old_ntuples; int ntuples; } ;
typedef int SharedTuplestoreAccessor ;
typedef TYPE_2__ ParallelHashJoinState ;
typedef int ParallelHashJoinBatch ;
typedef TYPE_3__* MinimalTuple ;
typedef TYPE_4__* HashJoinTable ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_4__*,int ,int*,int*) ;
 scalar_t__ VAR_0 ;
 size_t FUNC_2 (scalar_t__) ;
 int * FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int ** FUNC_6 (int) ;
 int FUNC_7 (int **) ;
 int * FUNC_8 (int ,scalar_t__,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 TYPE_3__* FUNC_11 (int *,int *) ;
 int FUNC_12 (int ,int *,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_13(HashJoinTable VAR_2)
{
 ParallelHashJoinState *VAR_3 = VAR_2->parallel_state;
 int VAR_4 = VAR_3->old_nbatch;
 SharedTuplestoreAccessor **VAR_5;
 ParallelHashJoinBatch *VAR_6;
 int VAR_7;


 VAR_6 = (ParallelHashJoinBatch *)
  FUNC_5(VAR_2->area, VAR_3->old_batches);
 VAR_5 = FUNC_6(sizeof(SharedTuplestoreAccessor *) * VAR_4);
 for (VAR_7 = 1; VAR_7 < VAR_4; ++VAR_7)
 {
  ParallelHashJoinBatch *VAR_8 =
  FUNC_3(VAR_6, VAR_7);

  VAR_5[VAR_7] = FUNC_8(FUNC_4(VAR_8),
           VAR_1 + 1,
           &VAR_3->fileset);
 }


 for (VAR_7 = 1; VAR_7 < VAR_4; ++VAR_7)
 {
  MinimalTuple VAR_9;
  uint32 VAR_10;


  FUNC_9(VAR_5[VAR_7]);
  while ((VAR_9 = FUNC_11(VAR_5[VAR_7], &VAR_10)))
  {
   size_t VAR_11 = FUNC_2(VAR_0 + VAR_9->t_len);
   int VAR_12;
   int VAR_13;


   FUNC_1(VAR_2, VAR_10, &VAR_12,
           &VAR_13);

   VAR_2->batches[VAR_13].estimated_size += VAR_11;
   ++VAR_2->batches[VAR_13].ntuples;
   ++VAR_2->batches[VAR_7].old_ntuples;


   FUNC_12(VAR_2->batches[VAR_13].inner_tuples,
       &VAR_10, VAR_9);

   FUNC_0();
  }
  FUNC_10(VAR_5[VAR_7]);
 }

 FUNC_7(VAR_5);
}
