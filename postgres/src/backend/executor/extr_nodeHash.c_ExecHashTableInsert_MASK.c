
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint32 ;
typedef int TupleTableSlot ;
struct TYPE_16__ {TYPE_4__** unshared; } ;
struct TYPE_19__ {int curbatch; double totalTuples; double skewTuples; int nbatch; double nbuckets_optimal; int log2_nbuckets_optimal; scalar_t__ spaceUsed; scalar_t__ spacePeak; scalar_t__ spaceAllowed; int * innerBatchFile; TYPE_2__ buckets; } ;
struct TYPE_15__ {TYPE_4__* unshared; } ;
struct TYPE_18__ {TYPE_1__ next; int hashvalue; } ;
struct TYPE_17__ {int t_len; } ;
typedef TYPE_3__* MinimalTuple ;
typedef TYPE_4__* HashJoinTuple ;
typedef TYPE_5__* HashJoinTable ;


 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (int *,int*) ;
 int FUNC_2 (TYPE_5__*,int ,int*,int*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_3__*,int ,int *) ;
 int FUNC_5 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 double VAR_3 ;
 scalar_t__ FUNC_7 (TYPE_5__*,int) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int ,TYPE_3__*,int ) ;

void
FUNC_10(HashJoinTable VAR_4,
     TupleTableSlot *VAR_5,
     uint32 VAR_6)
{
 bool VAR_7;
 MinimalTuple VAR_8 = FUNC_1(VAR_5, &VAR_7);
 int VAR_9;
 int VAR_10;

 FUNC_2(VAR_4, VAR_6,
         &VAR_9, &VAR_10);




 if (VAR_10 == VAR_4->curbatch)
 {



  HashJoinTuple VAR_11;
  int VAR_12;
  double VAR_13 = (VAR_4->totalTuples - VAR_4->skewTuples);


  VAR_12 = VAR_0 + VAR_8->t_len;
  VAR_11 = (HashJoinTuple) FUNC_7(VAR_4, VAR_12);

  VAR_11->hashvalue = VAR_6;
  FUNC_9(FUNC_5(VAR_11), VAR_8, VAR_8->t_len);







  FUNC_6(FUNC_5(VAR_11));


  VAR_11->next.unshared = VAR_4->buckets.unshared[VAR_9];
  VAR_4->buckets.unshared[VAR_9] = VAR_11;






  if (VAR_4->nbatch == 1 &&
   VAR_13 > (VAR_4->nbuckets_optimal * VAR_3))
  {

   if (VAR_4->nbuckets_optimal <= VAR_1 / 2 &&
    VAR_4->nbuckets_optimal * 2 <= VAR_2 / sizeof(HashJoinTuple))
   {
    VAR_4->nbuckets_optimal *= 2;
    VAR_4->log2_nbuckets_optimal += 1;
   }
  }


  VAR_4->spaceUsed += VAR_12;
  if (VAR_4->spaceUsed > VAR_4->spacePeak)
   VAR_4->spacePeak = VAR_4->spaceUsed;
  if (VAR_4->spaceUsed +
   VAR_4->nbuckets_optimal * sizeof(HashJoinTuple)
   > VAR_4->spaceAllowed)
   FUNC_3(VAR_4);
 }
 else
 {



  FUNC_0(VAR_10 > VAR_4->curbatch);
  FUNC_4(VAR_8,
         VAR_6,
         &VAR_4->innerBatchFile[VAR_10]);
 }

 if (VAR_7)
  FUNC_8(VAR_8);
}
