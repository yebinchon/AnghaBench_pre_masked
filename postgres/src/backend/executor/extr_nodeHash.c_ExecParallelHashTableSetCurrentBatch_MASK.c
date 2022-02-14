
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int dsa_pointer_atomic ;
struct TYPE_7__ {int * shared; } ;
struct TYPE_11__ {int curbatch; TYPE_4__* batches; scalar_t__ current_chunk_shared; int * current_chunk; int nbuckets; int log2_nbuckets; TYPE_3__* parallel_state; int area; TYPE_1__ buckets; } ;
struct TYPE_10__ {int at_least_one_chunk; TYPE_2__* shared; } ;
struct TYPE_9__ {int nbuckets; } ;
struct TYPE_8__ {scalar_t__ buckets; } ;
typedef TYPE_5__* HashJoinTable ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;

void
FUNC_3(HashJoinTable VAR_1, int VAR_2)
{
 FUNC_0(VAR_1->batches[VAR_2].shared->buckets != VAR_0);

 VAR_1->curbatch = VAR_2;
 VAR_1->buckets.shared = (dsa_pointer_atomic *)
  FUNC_1(VAR_1->area,
      VAR_1->batches[VAR_2].shared->buckets);
 VAR_1->nbuckets = VAR_1->parallel_state->nbuckets;
 VAR_1->log2_nbuckets = FUNC_2(VAR_1->nbuckets);
 VAR_1->current_chunk = ((void*)0);
 VAR_1->current_chunk_shared = VAR_0;
 VAR_1->batches[VAR_2].at_least_one_chunk = 0;
}
