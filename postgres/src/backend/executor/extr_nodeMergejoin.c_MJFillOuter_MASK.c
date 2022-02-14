
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_12__ {int ecxt_innertuple; int ecxt_outertuple; } ;
struct TYPE_9__ {int ps_ProjInfo; int * qual; TYPE_4__* ps_ExprContext; } ;
struct TYPE_10__ {TYPE_1__ ps; } ;
struct TYPE_11__ {TYPE_2__ js; int mj_NullInnerTupleSlot; int mj_OuterTupleSlot; } ;
typedef TYPE_3__ MergeJoinState ;
typedef int ExprState ;
typedef TYPE_4__ ExprContext ;


 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static TupleTableSlot *
FUNC_5(MergeJoinState *VAR_0)
{
 ExprContext *VAR_1 = VAR_0->js.ps.ps_ExprContext;
 ExprState *VAR_2 = VAR_0->js.ps.qual;

 FUNC_4(VAR_1);

 VAR_1->ecxt_outertuple = VAR_0->mj_OuterTupleSlot;
 VAR_1->ecxt_innertuple = VAR_0->mj_NullInnerTupleSlot;

 if (FUNC_1(VAR_2, VAR_1))
 {




  FUNC_3("ExecMergeJoin: returning outer fill tuple\n");

  return FUNC_0(VAR_0->js.ps.ps_ProjInfo);
 }
 else
  FUNC_2(VAR_0, 1);

 return ((void*)0);
}
