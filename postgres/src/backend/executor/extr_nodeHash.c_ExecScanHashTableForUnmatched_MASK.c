
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_18__ {int * ecxt_innertuple; } ;
struct TYPE_17__ {size_t hj_CurBucketNo; size_t hj_CurSkewBucketNo; TYPE_4__* hj_CurTuple; int hj_HashTupleSlot; TYPE_5__* hj_HashTable; } ;
struct TYPE_12__ {TYPE_4__** unshared; } ;
struct TYPE_16__ {size_t nbuckets; size_t nSkewBuckets; int* skewBucketNums; TYPE_2__** skewBucket; TYPE_1__ buckets; } ;
struct TYPE_14__ {TYPE_4__* unshared; } ;
struct TYPE_15__ {TYPE_3__ next; } ;
struct TYPE_13__ {TYPE_4__* tuples; } ;
typedef TYPE_4__* HashJoinTuple ;
typedef TYPE_5__* HashJoinTable ;
typedef TYPE_6__ HashJoinState ;
typedef TYPE_7__ ExprContext ;


 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_7__*) ;

bool
FUNC_5(HashJoinState *VAR_0, ExprContext *VAR_1)
{
 HashJoinTable VAR_2 = VAR_0->hj_HashTable;
 HashJoinTuple VAR_3 = VAR_0->hj_CurTuple;

 for (;;)
 {





  if (VAR_3 != ((void*)0))
   VAR_3 = VAR_3->next.unshared;
  else if (VAR_0->hj_CurBucketNo < VAR_2->nbuckets)
  {
   VAR_3 = VAR_2->buckets.unshared[VAR_0->hj_CurBucketNo];
   VAR_0->hj_CurBucketNo++;
  }
  else if (VAR_0->hj_CurSkewBucketNo < VAR_2->nSkewBuckets)
  {
   int VAR_4 = VAR_2->skewBucketNums[VAR_0->hj_CurSkewBucketNo];

   VAR_3 = VAR_2->skewBucket[VAR_4]->tuples;
   VAR_0->hj_CurSkewBucketNo++;
  }
  else
   break;

  while (VAR_3 != ((void*)0))
  {
   if (!FUNC_3(FUNC_2(VAR_3)))
   {
    TupleTableSlot *VAR_5;


    VAR_5 = FUNC_1(FUNC_2(VAR_3),
             VAR_0->hj_HashTupleSlot,
             0);
    VAR_1->ecxt_innertuple = VAR_5;






    FUNC_4(VAR_1);

    VAR_0->hj_CurTuple = VAR_3;
    return 1;
   }

   VAR_3 = VAR_3->next.unshared;
  }


  FUNC_0();
 }




 return 0;
}
