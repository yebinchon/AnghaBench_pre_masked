
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int nullsFirst; int collations; int sortOperators; int sortColIdx; int numCols; } ;
struct TYPE_5__ {scalar_t__ plan; } ;
struct TYPE_6__ {TYPE_1__ ps; } ;
typedef int PlanState ;
typedef TYPE_2__ MergeAppendState ;
typedef TYPE_3__ MergeAppend ;
typedef int List ;
typedef int ExplainState ;


 int FUNC_0 (int *,char*,int ,int ,int ,int ,int ,int *,int *) ;

__attribute__((used)) static void
FUNC_1(MergeAppendState *VAR_0, List *VAR_1,
        ExplainState *VAR_2)
{
 MergeAppend *VAR_3 = (MergeAppend *) VAR_0->ps.plan;

 FUNC_0((PlanState *) VAR_0, "Sort Key",
       VAR_3->numCols, VAR_3->sortColIdx,
       VAR_3->sortOperators, VAR_3->collations,
       VAR_3->nullsFirst,
       VAR_1, VAR_2);
}
