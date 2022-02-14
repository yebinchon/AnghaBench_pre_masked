
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int dsa_pointer_atomic ;
typedef int dsa_pointer ;
struct TYPE_12__ {int curbatch; int nbuckets; int spacePeak; int area; TYPE_1__* batches; int * parallel_state; } ;
struct TYPE_9__ {int shared; } ;
struct TYPE_11__ {TYPE_2__ next; } ;
struct TYPE_10__ {scalar_t__ size; int buckets; int chunks; int batch_barrier; } ;
struct TYPE_8__ {int outer_tuples; int inner_tuples; TYPE_3__* shared; } ;
typedef TYPE_3__ ParallelHashJoinBatch ;
typedef TYPE_4__* HashMemoryChunk ;
typedef TYPE_5__* HashJoinTable ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int ,int ) ;
 TYPE_4__* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;

void
FUNC_8(HashJoinTable VAR_2)
{
 if (VAR_2->parallel_state != ((void*)0) &&
  VAR_2->curbatch >= 0)
 {
  int VAR_3 = VAR_2->curbatch;
  ParallelHashJoinBatch *VAR_4 = VAR_2->batches[VAR_3].shared;


  FUNC_7(VAR_2->batches[VAR_3].inner_tuples);
  FUNC_7(VAR_2->batches[VAR_3].outer_tuples);


  if (FUNC_1(&VAR_4->batch_barrier))
  {





   FUNC_0(FUNC_2(&VAR_4->batch_barrier) == VAR_1);


   while (FUNC_3(VAR_4->chunks))
   {
    HashMemoryChunk VAR_5 =
    FUNC_6(VAR_2->area, VAR_4->chunks);
    dsa_pointer VAR_6 = VAR_5->next.shared;

    FUNC_5(VAR_2->area, VAR_4->chunks);
    VAR_4->chunks = VAR_6;
   }
   if (FUNC_3(VAR_4->buckets))
   {
    FUNC_5(VAR_2->area, VAR_4->buckets);
    VAR_4->buckets = VAR_0;
   }
  }






  VAR_2->spacePeak =
   FUNC_4(VAR_2->spacePeak,
    VAR_4->size + sizeof(dsa_pointer_atomic) * VAR_2->nbuckets);


  VAR_2->curbatch = -1;
 }
}
