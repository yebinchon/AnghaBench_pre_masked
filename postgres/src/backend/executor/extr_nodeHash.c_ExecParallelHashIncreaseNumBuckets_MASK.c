
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int dsa_pointer_atomic ;
typedef scalar_t__ dsa_pointer ;
struct TYPE_25__ {scalar_t__ t_len; } ;
struct TYPE_20__ {int * shared; } ;
struct TYPE_24__ {TYPE_3__ buckets; TYPE_2__* batches; int area; TYPE_4__* parallel_state; } ;
struct TYPE_23__ {int hashvalue; } ;
struct TYPE_22__ {size_t used; } ;
struct TYPE_21__ {int nbuckets; int grow_buckets_barrier; int growth; int chunk_work_queue; int build_barrier; } ;
struct TYPE_19__ {TYPE_1__* shared; } ;
struct TYPE_18__ {size_t size; int chunks; int buckets; } ;
typedef TYPE_4__ ParallelHashJoinState ;
typedef TYPE_5__* HashMemoryChunk ;
typedef TYPE_6__* HashJoinTuple ;
typedef TYPE_7__* HashJoinTable ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_7__*,int ,int*,int*) ;
 int FUNC_5 (TYPE_7__*) ;
 TYPE_5__* FUNC_6 (TYPE_7__*,scalar_t__*) ;
 int FUNC_7 (int *,TYPE_6__*,scalar_t__) ;
 int FUNC_8 (TYPE_7__*,int ) ;
 int FUNC_9 (TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 TYPE_8__* FUNC_10 (TYPE_6__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t FUNC_11 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;


 int FUNC_12 (scalar_t__) ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_13 (int ,size_t) ;
 int FUNC_14 (int ,int ) ;
 scalar_t__ FUNC_15 (int ,int ) ;
 int FUNC_16 (int *,int ) ;

__attribute__((used)) static void
FUNC_17(HashJoinTable VAR_8)
{
 ParallelHashJoinState *VAR_9 = VAR_8->parallel_state;
 int VAR_10;
 HashMemoryChunk VAR_11;
 dsa_pointer VAR_12;

 FUNC_0(FUNC_2(&VAR_9->build_barrier) == VAR_3);






 switch (FUNC_12(FUNC_2(&VAR_9->grow_buckets_barrier)))
 {
  case 129:

   if (FUNC_1(&VAR_9->grow_buckets_barrier,
          VAR_6))
   {
    size_t VAR_13;
    dsa_pointer_atomic *VAR_14;


    VAR_9->nbuckets *= 2;
    VAR_13 = VAR_9->nbuckets * sizeof(dsa_pointer_atomic);
    VAR_8->batches[0].shared->size += VAR_13 / 2;
    FUNC_14(VAR_8->area, VAR_8->batches[0].shared->buckets);
    VAR_8->batches[0].shared->buckets =
     FUNC_13(VAR_8->area, VAR_13);
    VAR_14 = (dsa_pointer_atomic *)
     FUNC_15(VAR_8->area,
         VAR_8->batches[0].shared->buckets);
    for (VAR_10 = 0; VAR_10 < VAR_9->nbuckets; ++VAR_10)
     FUNC_16(&VAR_14[VAR_10], VAR_2);


    VAR_9->chunk_work_queue = VAR_8->batches[0].shared->chunks;


    VAR_9->growth = VAR_4;
   }


  case 130:

   FUNC_1(&VAR_9->grow_buckets_barrier,
         VAR_5);


  case 128:

   FUNC_5(VAR_8);
   FUNC_8(VAR_8, 0);
   while ((VAR_11 = FUNC_6(VAR_8, &VAR_12)))
   {
    size_t VAR_15 = 0;

    while (VAR_15 < VAR_11->used)
    {
     HashJoinTuple VAR_16 = (HashJoinTuple) (FUNC_9(VAR_11) + VAR_15);
     dsa_pointer VAR_17 = VAR_12 + VAR_0 + VAR_15;
     int VAR_18;
     int VAR_19;

     FUNC_4(VAR_8, VAR_16->hashvalue,
             &VAR_18, &VAR_19);
     FUNC_0(VAR_19 == 0);


     FUNC_7(&VAR_8->buckets.shared[VAR_18],
             VAR_16, VAR_17);


     VAR_15 += FUNC_11(VAR_1 +
         FUNC_10(VAR_16)->t_len);
    }


    FUNC_3();
   }
   FUNC_1(&VAR_9->grow_buckets_barrier,
         VAR_7);
 }
}
