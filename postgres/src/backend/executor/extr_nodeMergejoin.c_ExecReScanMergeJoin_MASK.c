
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int * chgParam; } ;
struct TYPE_6__ {TYPE_5__* righttree; TYPE_5__* lefttree; } ;
struct TYPE_7__ {TYPE_1__ ps; } ;
struct TYPE_8__ {int mj_MatchedOuter; int mj_MatchedInner; TYPE_2__ js; int * mj_InnerTupleSlot; int * mj_OuterTupleSlot; int mj_JoinState; int mj_MarkedTupleSlot; } ;
typedef TYPE_3__ MergeJoinState ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*) ;

void
FUNC_2(MergeJoinState *VAR_1)
{
 FUNC_0(VAR_1->mj_MarkedTupleSlot);

 VAR_1->mj_JoinState = VAR_0;
 VAR_1->mj_MatchedOuter = 0;
 VAR_1->mj_MatchedInner = 0;
 VAR_1->mj_OuterTupleSlot = ((void*)0);
 VAR_1->mj_InnerTupleSlot = ((void*)0);





 if (VAR_1->js.ps.lefttree->chgParam == ((void*)0))
  FUNC_1(VAR_1->js.ps.lefttree);
 if (VAR_1->js.ps.righttree->chgParam == ((void*)0))
  FUNC_1(VAR_1->js.ps.righttree);

}
