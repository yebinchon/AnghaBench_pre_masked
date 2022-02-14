
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int ecxt_per_tuple_memory; } ;
struct TYPE_11__ {int ssup; scalar_t__ risnull; int rdatum; scalar_t__ lisnull; int ldatum; } ;
struct TYPE_8__ {TYPE_5__* ps_ExprContext; } ;
struct TYPE_9__ {TYPE_1__ ps; } ;
struct TYPE_10__ {int mj_NumClauses; scalar_t__ mj_ConstFalseJoin; TYPE_4__* mj_Clauses; TYPE_2__ js; } ;
typedef TYPE_3__ MergeJoinState ;
typedef TYPE_4__* MergeJoinClause ;
typedef int MemoryContext ;
typedef TYPE_5__ ExprContext ;


 int FUNC_0 (int ,scalar_t__,int ,scalar_t__,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*) ;

__attribute__((used)) static int
FUNC_3(MergeJoinState *VAR_0)
{
 int VAR_1 = 0;
 bool VAR_2 = 0;
 ExprContext *VAR_3 = VAR_0->js.ps.ps_ExprContext;
 int VAR_4;
 MemoryContext VAR_5;





 FUNC_2(VAR_3);

 VAR_5 = FUNC_1(VAR_3->ecxt_per_tuple_memory);

 for (VAR_4 = 0; VAR_4 < VAR_0->mj_NumClauses; VAR_4++)
 {
  MergeJoinClause VAR_6 = &VAR_0->mj_Clauses[VAR_4];




  if (VAR_6->lisnull && VAR_6->risnull)
  {
   VAR_2 = 1;
   continue;
  }

  VAR_1 = FUNC_0(VAR_6->ldatum, VAR_6->lisnull,
          VAR_6->rdatum, VAR_6->risnull,
          &VAR_6->ssup);

  if (VAR_1 != 0)
   break;
 }
 if (VAR_1 == 0 &&
  (VAR_2 || VAR_0->mj_ConstFalseJoin))
  VAR_1 = 1;

 FUNC_1(VAR_5);

 return VAR_1;
}
