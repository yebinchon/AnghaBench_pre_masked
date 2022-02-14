
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32 ;
typedef int TupleTableSlot ;
struct TYPE_16__ {int * ecxt_outertuple; } ;
struct TYPE_15__ {int skewTuples; int totalTuples; scalar_t__ nbuckets; scalar_t__ nbuckets_optimal; scalar_t__ spaceUsed; scalar_t__ spacePeak; int partialTuples; int keepNulls; } ;
struct TYPE_13__ {TYPE_4__* ps_ExprContext; } ;
struct TYPE_14__ {TYPE_1__ ps; int * hashkeys; TYPE_3__* hashtable; } ;
typedef int PlanState ;
typedef int List ;
typedef TYPE_2__ HashState ;
typedef int HashJoinTuple ;
typedef TYPE_3__* HashJoinTable ;
typedef TYPE_4__ ExprContext ;


 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_4__*,int *,int,int ,int *) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int *,int ,int) ;
 int FUNC_4 (TYPE_3__*,int *,int ) ;
 int * FUNC_5 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_8(HashState *VAR_1)
{
 PlanState *VAR_2;
 List *VAR_3;
 HashJoinTable VAR_4;
 TupleTableSlot *VAR_5;
 ExprContext *VAR_6;
 uint32 VAR_7;




 VAR_2 = FUNC_7(VAR_1);
 VAR_4 = VAR_1->hashtable;




 VAR_3 = VAR_1->hashkeys;
 VAR_6 = VAR_1->ps.ps_ExprContext;





 for (;;)
 {
  VAR_5 = FUNC_5(VAR_2);
  if (FUNC_6(VAR_5))
   break;

  VAR_6->ecxt_outertuple = VAR_5;
  if (FUNC_0(VAR_4, VAR_6, VAR_3,
         0, VAR_4->keepNulls,
         &VAR_7))
  {
   int VAR_8;

   VAR_8 = FUNC_1(VAR_4, VAR_7);
   if (VAR_8 != VAR_0)
   {

    FUNC_3(VAR_4, VAR_5, VAR_7,
          VAR_8);
    VAR_4->skewTuples += 1;
   }
   else
   {

    FUNC_4(VAR_4, VAR_5, VAR_7);
   }
   VAR_4->totalTuples += 1;
  }
 }


 if (VAR_4->nbuckets != VAR_4->nbuckets_optimal)
  FUNC_2(VAR_4);


 VAR_4->spaceUsed += VAR_4->nbuckets * sizeof(HashJoinTuple);
 if (VAR_4->spaceUsed > VAR_4->spacePeak)
  VAR_4->spacePeak = VAR_4->spaceUsed;

 VAR_4->partialTuples = VAR_4->totalTuples;
}
