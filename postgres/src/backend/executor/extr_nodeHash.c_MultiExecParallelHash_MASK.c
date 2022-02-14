
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint32 ;
typedef int TupleTableSlot ;
struct TYPE_22__ {int * ecxt_outertuple; } ;
struct TYPE_21__ {int nbatch; int curbatch; int totalTuples; int nbuckets; int log2_nbuckets; TYPE_2__* batches; int partialTuples; int keepNulls; TYPE_3__* parallel_state; } ;
struct TYPE_17__ {TYPE_6__* ps_ExprContext; } ;
struct TYPE_20__ {TYPE_1__ ps; int * hashkeys; TYPE_5__* hashtable; } ;
struct TYPE_19__ {int total_tuples; int nbuckets; int growth; int grow_batches_barrier; int grow_buckets_barrier; int build_barrier; } ;
struct TYPE_18__ {int inner_tuples; } ;
typedef int PlanState ;
typedef TYPE_3__ ParallelHashJoinState ;
typedef int List ;
typedef TYPE_4__ HashState ;
typedef TYPE_5__* HashJoinTable ;
typedef TYPE_6__ ExprContext ;
typedef int Barrier ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_5__*,TYPE_6__*,int *,int,int ,int *) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*,int *,int ) ;
 int FUNC_11 (TYPE_5__*,int ) ;
 int * FUNC_12 (int *) ;

 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_13 (int ) ;
 int VAR_4 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_16 (int ) ;
 int * FUNC_17 (TYPE_4__*) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static void
FUNC_19(HashState *VAR_7)
{
 ParallelHashJoinState *VAR_8;
 PlanState *VAR_9;
 List *VAR_10;
 HashJoinTable VAR_11;
 TupleTableSlot *VAR_12;
 ExprContext *VAR_13;
 uint32 VAR_14;
 Barrier *VAR_15;
 int VAR_16;




 VAR_9 = FUNC_17(VAR_7);
 VAR_11 = VAR_7->hashtable;




 VAR_10 = VAR_7->hashkeys;
 VAR_13 = VAR_7->ps.ps_ExprContext;
 VAR_8 = VAR_11->parallel_state;
 VAR_15 = &VAR_8->build_barrier;
 FUNC_0(FUNC_4(VAR_15) >= 129);
 switch (FUNC_4(VAR_15))
 {
  case 129:






   FUNC_1(VAR_15, VAR_5);


  case 128:
   if (FUNC_13(FUNC_2(&VAR_8->grow_batches_barrier)) !=
    VAR_3)
    FUNC_7(VAR_11);
   if (FUNC_14(FUNC_2(&VAR_8->grow_buckets_barrier)) !=
    VAR_4)
    FUNC_8(VAR_11);
   FUNC_6(VAR_11);
   FUNC_11(VAR_11, 0);
   for (;;)
   {
    VAR_12 = FUNC_12(VAR_9);
    if (FUNC_15(VAR_12))
     break;
    VAR_13->ecxt_outertuple = VAR_12;
    if (FUNC_5(VAR_11, VAR_13, VAR_10,
           0, VAR_11->keepNulls,
           &VAR_14))
     FUNC_10(VAR_11, VAR_12, VAR_14);
    VAR_11->partialTuples++;
   }





   for (VAR_16 = 0; VAR_16 < VAR_11->nbatch; ++VAR_16)
    FUNC_18(VAR_11->batches[VAR_16].inner_tuples);





   FUNC_9(VAR_11);

   FUNC_3(&VAR_8->grow_buckets_barrier);
   FUNC_3(&VAR_8->grow_batches_barrier);





   if (FUNC_1(VAR_15,
          VAR_6))
   {







    VAR_8->growth = VAR_2;
   }
 }





 VAR_11->curbatch = -1;
 VAR_11->nbuckets = VAR_8->nbuckets;
 VAR_11->log2_nbuckets = FUNC_16(VAR_11->nbuckets);
 VAR_11->totalTuples = VAR_8->total_tuples;
 FUNC_6(VAR_11);






 FUNC_0(FUNC_4(VAR_15) == VAR_1 ||
     FUNC_4(VAR_15) == VAR_0);
}
