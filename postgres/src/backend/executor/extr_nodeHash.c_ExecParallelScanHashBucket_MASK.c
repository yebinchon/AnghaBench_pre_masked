
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef int TupleTableSlot ;
struct TYPE_13__ {int * ecxt_innertuple; } ;
struct TYPE_12__ {scalar_t__ hj_CurHashValue; TYPE_1__* hj_CurTuple; int hj_HashTupleSlot; int hj_CurBucketNo; int hj_HashTable; int * hashclauses; } ;
struct TYPE_11__ {scalar_t__ hashvalue; } ;
typedef TYPE_1__* HashJoinTuple ;
typedef int HashJoinTable ;
typedef TYPE_2__ HashJoinState ;
typedef int ExprState ;
typedef TYPE_3__ ExprContext ;


 TYPE_1__* FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,TYPE_3__*) ;
 int * FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_1__*) ;

bool
FUNC_5(HashJoinState *VAR_0,
         ExprContext *VAR_1)
{
 ExprState *VAR_2 = VAR_0->hashclauses;
 HashJoinTable VAR_3 = VAR_0->hj_HashTable;
 HashJoinTuple VAR_4 = VAR_0->hj_CurTuple;
 uint32 VAR_5 = VAR_0->hj_CurHashValue;





 if (VAR_4 != ((void*)0))
  VAR_4 = FUNC_1(VAR_3, VAR_4);
 else
  VAR_4 = FUNC_0(VAR_3,
              VAR_0->hj_CurBucketNo);

 while (VAR_4 != ((void*)0))
 {
  if (VAR_4->hashvalue == VAR_5)
  {
   TupleTableSlot *VAR_6;


   VAR_6 = FUNC_3(FUNC_4(VAR_4),
            VAR_0->hj_HashTupleSlot,
            0);
   VAR_1->ecxt_innertuple = VAR_6;

   if (FUNC_2(VAR_2, VAR_1))
   {
    VAR_0->hj_CurTuple = VAR_4;
    return 1;
   }
  }

  VAR_4 = FUNC_1(VAR_3, VAR_4);
 }




 return 0;
}
