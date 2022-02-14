
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int dsa_pointer_atomic ;
typedef scalar_t__ dsa_pointer ;
struct TYPE_20__ {int curbatch; scalar_t__ current_chunk_shared; int nbatch; int nbuckets; int area; TYPE_5__* current_chunk; TYPE_3__* batches; TYPE_4__* parallel_state; } ;
struct TYPE_15__ {scalar_t__ shared; } ;
struct TYPE_19__ {size_t maxlen; size_t used; TYPE_1__ next; } ;
struct TYPE_18__ {scalar_t__ growth; scalar_t__ space_allowed; int lock; int build_barrier; } ;
struct TYPE_17__ {int at_least_one_chunk; TYPE_2__* shared; scalar_t__ ntuples; } ;
struct TYPE_16__ {scalar_t__ size; int space_exhausted; int ntuples; scalar_t__ chunks; } ;
typedef scalar_t__ Size ;
typedef TYPE_4__ ParallelHashJoinState ;
typedef scalar_t__ ParallelHashGrowth ;
typedef TYPE_5__* HashMemoryChunk ;
typedef TYPE_5__* HashJoinTuple ;
typedef TYPE_7__* HashJoinTable ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*) ;
 TYPE_5__* FUNC_4 (TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 size_t FUNC_7 (size_t) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 TYPE_5__* FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static HashJoinTuple
FUNC_10(HashJoinTable VAR_11, size_t VAR_12,
         dsa_pointer *VAR_13)
{
 ParallelHashJoinState *VAR_14 = VAR_11->parallel_state;
 dsa_pointer VAR_15;
 HashMemoryChunk VAR_16;
 Size VAR_17;
 HashJoinTuple VAR_18;
 int VAR_19 = VAR_11->curbatch;

 VAR_12 = FUNC_7(VAR_12);





 VAR_16 = VAR_11->current_chunk;
 if (VAR_16 != ((void*)0) &&
  VAR_12 <= VAR_2 &&
  VAR_16->maxlen - VAR_16->used >= VAR_12)
 {

  VAR_15 = VAR_11->current_chunk_shared;
  FUNC_0(VAR_16 == FUNC_9(VAR_11->area, VAR_15));
  *VAR_13 = VAR_15 + VAR_0 + VAR_16->used;
  VAR_18 = (HashJoinTuple) (FUNC_4(VAR_16) + VAR_16->used);
  VAR_16->used += VAR_12;

  FUNC_0(VAR_16->used <= VAR_16->maxlen);
  FUNC_0(VAR_18 == FUNC_9(VAR_11->area, *VAR_13));

  return VAR_18;
 }


 FUNC_5(&VAR_14->lock, VAR_4);




 if (VAR_14->growth == VAR_9 ||
  VAR_14->growth == VAR_10)
 {
  ParallelHashGrowth VAR_20 = VAR_14->growth;

  VAR_11->current_chunk = ((void*)0);
  FUNC_6(&VAR_14->lock);


  if (VAR_20 == VAR_9)
   FUNC_2(VAR_11);
  else if (VAR_20 == VAR_10)
   FUNC_3(VAR_11);


  return ((void*)0);
 }


 if (VAR_12 > VAR_2)
  VAR_17 = VAR_12 + VAR_0;
 else
  VAR_17 = VAR_1;


 if (VAR_14->growth != VAR_8)
 {
  FUNC_0(VAR_19 == 0);
  FUNC_0(FUNC_1(&VAR_14->build_barrier) == VAR_7);






  if (VAR_11->batches[0].at_least_one_chunk &&
   VAR_11->batches[0].shared->size +
   VAR_17 > VAR_14->space_allowed)
  {
   VAR_14->growth = VAR_9;
   VAR_11->batches[0].shared->space_exhausted = 1;
   FUNC_6(&VAR_14->lock);

   return ((void*)0);
  }


  if (VAR_11->nbatch == 1)
  {
   VAR_11->batches[0].shared->ntuples += VAR_11->batches[0].ntuples;
   VAR_11->batches[0].ntuples = 0;

   if (VAR_11->batches[0].shared->ntuples + 1 >
    VAR_11->nbuckets * VAR_6 &&
    VAR_11->nbuckets < (VAR_3 / 2) &&
    VAR_11->nbuckets * 2 <=
    VAR_5 / sizeof(dsa_pointer_atomic))
   {
    VAR_14->growth = VAR_10;
    FUNC_6(&VAR_14->lock);

    return ((void*)0);
   }
  }
 }


 VAR_15 = FUNC_8(VAR_11->area, VAR_17);
 VAR_11->batches[VAR_19].shared->size += VAR_17;
 VAR_11->batches[VAR_19].at_least_one_chunk = 1;


 VAR_16 = (HashMemoryChunk) FUNC_9(VAR_11->area, VAR_15);
 *VAR_13 = VAR_15 + VAR_0;
 VAR_16->maxlen = VAR_17 - VAR_0;
 VAR_16->used = VAR_12;






 VAR_16->next.shared = VAR_11->batches[VAR_19].shared->chunks;
 VAR_11->batches[VAR_19].shared->chunks = VAR_15;

 if (VAR_12 <= VAR_2)
 {




  VAR_11->current_chunk = VAR_16;
  VAR_11->current_chunk_shared = VAR_15;
 }
 FUNC_6(&VAR_14->lock);

 FUNC_0(FUNC_4(VAR_16) == FUNC_9(VAR_11->area, *VAR_13));
 VAR_18 = (HashJoinTuple) FUNC_4(VAR_16);

 return VAR_18;
}
