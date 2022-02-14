
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int nullsFirst; int collations; int sortOperators; int sortColIdx; int numCols; } ;
struct TYPE_6__ {scalar_t__ plan; } ;
struct TYPE_7__ {TYPE_1__ ps; } ;
struct TYPE_8__ {TYPE_2__ ss; } ;
typedef TYPE_3__ SortState ;
typedef TYPE_4__ Sort ;
typedef int PlanState ;
typedef int List ;
typedef int ExplainState ;


 int FUNC_0 (int *,char*,int ,int ,int ,int ,int ,int *,int *) ;

__attribute__((used)) static void
FUNC_1(SortState *VAR_0, List *VAR_1, ExplainState *VAR_2)
{
 Sort *VAR_3 = (Sort *) VAR_0->ss.ps.plan;

 FUNC_0((PlanState *) VAR_0, "Sort Key",
       VAR_3->numCols, VAR_3->sortColIdx,
       VAR_3->sortOperators, VAR_3->collations,
       VAR_3->nullsFirst,
       VAR_1, VAR_2);
}
