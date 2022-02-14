
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_11__ {int * ecxt_innertuple; int ecxt_per_tuple_memory; } ;
struct TYPE_8__ {int ssup_nulls_first; } ;
struct TYPE_10__ {TYPE_1__ ssup; scalar_t__ risnull; int rexpr; int rdatum; } ;
struct TYPE_9__ {int mj_NumClauses; int mj_FillInner; TYPE_3__* mj_Clauses; TYPE_4__* mj_InnerEContext; } ;
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
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static MJEvalResult
FUNC_4(MergeJoinState *VAR_3, TupleTableSlot *VAR_4)
{
 ExprContext *VAR_5 = VAR_3->mj_InnerEContext;
 MJEvalResult VAR_6 = VAR_1;
 int VAR_7;
 MemoryContext VAR_8;


 if (FUNC_3(VAR_4))
  return VAR_0;

 FUNC_2(VAR_5);

 VAR_8 = FUNC_1(VAR_5->ecxt_per_tuple_memory);

 VAR_5->ecxt_innertuple = VAR_4;

 for (VAR_7 = 0; VAR_7 < VAR_3->mj_NumClauses; VAR_7++)
 {
  MergeJoinClause VAR_9 = &VAR_3->mj_Clauses[VAR_7];

  VAR_9->rdatum = FUNC_0(VAR_9->rexpr, VAR_5,
           &VAR_9->risnull);
  if (VAR_9->risnull)
  {

   if (VAR_7 == 0 && !VAR_9->ssup.ssup_nulls_first &&
    !VAR_3->mj_FillInner)
    VAR_6 = VAR_0;
   else if (VAR_6 == VAR_1)
    VAR_6 = VAR_2;
  }
 }

 FUNC_1(VAR_8);

 return VAR_6;
}
