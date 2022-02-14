
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


typedef scalar_t__ uint32 ;
typedef int TupleTableSlot ;
struct TYPE_18__ {int * ecxt_innertuple; } ;
struct TYPE_17__ {scalar_t__ hj_CurHashValue; size_t hj_CurSkewBucketNo; size_t hj_CurBucketNo; TYPE_4__* hj_CurTuple; int hj_HashTupleSlot; TYPE_5__* hj_HashTable; int * hashclauses; } ;
struct TYPE_13__ {TYPE_4__** unshared; } ;
struct TYPE_16__ {TYPE_2__ buckets; TYPE_1__** skewBucket; } ;
struct TYPE_14__ {TYPE_4__* unshared; } ;
struct TYPE_15__ {scalar_t__ hashvalue; TYPE_3__ next; } ;
struct TYPE_12__ {TYPE_4__* tuples; } ;
typedef TYPE_4__* HashJoinTuple ;
typedef TYPE_5__* HashJoinTable ;
typedef TYPE_6__ HashJoinState ;
typedef int ExprState ;
typedef TYPE_7__ ExprContext ;


 scalar_t__ FUNC_0 (int *,TYPE_7__*) ;
 int * FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_4__*) ;
 size_t VAR_0 ;

bool
FUNC_3(HashJoinState *VAR_1,
       ExprContext *VAR_2)
{
 ExprState *VAR_3 = VAR_1->hashclauses;
 HashJoinTable VAR_4 = VAR_1->hj_HashTable;
 HashJoinTuple VAR_5 = VAR_1->hj_CurTuple;
 uint32 VAR_6 = VAR_1->hj_CurHashValue;
 if (VAR_5 != ((void*)0))
  VAR_5 = VAR_5->next.unshared;
 else if (VAR_1->hj_CurSkewBucketNo != VAR_0)
  VAR_5 = VAR_4->skewBucket[VAR_1->hj_CurSkewBucketNo]->tuples;
 else
  VAR_5 = VAR_4->buckets.unshared[VAR_1->hj_CurBucketNo];

 while (VAR_5 != ((void*)0))
 {
  if (VAR_5->hashvalue == VAR_6)
  {
   TupleTableSlot *VAR_7;


   VAR_7 = FUNC_1(FUNC_2(VAR_5),
            VAR_1->hj_HashTupleSlot,
            0);
   VAR_2->ecxt_innertuple = VAR_7;

   if (FUNC_0(VAR_3, VAR_2))
   {
    VAR_1->hj_CurTuple = VAR_5;
    return 1;
   }
  }

  VAR_5 = VAR_5->next.unshared;
 }




 return 0;
}
