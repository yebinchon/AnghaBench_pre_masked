
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int ecxt_outertuple; int ecxt_per_tuple_memory; } ;
struct TYPE_8__ {int ssup_nulls_first; } ;
struct TYPE_10__ {TYPE_1__ ssup; scalar_t__ lisnull; int lexpr; int ldatum; } ;
struct TYPE_9__ {int mj_NumClauses; int mj_FillOuter; TYPE_3__* mj_Clauses; int mj_OuterTupleSlot; TYPE_4__* mj_OuterEContext; } ;
typedef TYPE_2__ MergeJoinState ;
typedef TYPE_3__* MergeJoinClause ;
typedef int MemoryContext ;
typedef scalar_t__ MJEvalResult ;
typedef TYPE_4__ ExprContext ;


 int FUNC_0 (int ,TYPE_4__*,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static MJEvalResult
FUNC_4(MergeJoinState *VAR_3)
{
 ExprContext *VAR_4 = VAR_3->mj_OuterEContext;
 MJEvalResult VAR_5 = VAR_1;
 int VAR_6;
 MemoryContext VAR_7;


 if (FUNC_3(VAR_3->mj_OuterTupleSlot))
  return VAR_0;

 FUNC_2(VAR_4);

 VAR_7 = FUNC_1(VAR_4->ecxt_per_tuple_memory);

 VAR_4->ecxt_outertuple = VAR_3->mj_OuterTupleSlot;

 for (VAR_6 = 0; VAR_6 < VAR_3->mj_NumClauses; VAR_6++)
 {
  MergeJoinClause VAR_8 = &VAR_3->mj_Clauses[VAR_6];

  VAR_8->ldatum = FUNC_0(VAR_8->lexpr, VAR_4,
           &VAR_8->lisnull);
  if (VAR_8->lisnull)
  {

   if (VAR_6 == 0 && !VAR_8->ssup.ssup_nulls_first &&
    !VAR_3->mj_FillOuter)
    VAR_5 = VAR_0;
   else if (VAR_5 == VAR_1)
    VAR_5 = VAR_2;
  }
 }

 FUNC_1(VAR_7);

 return VAR_5;
}
