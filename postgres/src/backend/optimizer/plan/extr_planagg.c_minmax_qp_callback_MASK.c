
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int sort_pathkeys; int query_pathkeys; TYPE_1__* parse; void* distinct_pathkeys; void* window_pathkeys; void* group_pathkeys; } ;
struct TYPE_5__ {int targetList; int sortClause; } ;
typedef TYPE_2__ PlannerInfo ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(PlannerInfo *VAR_1, void *VAR_2)
{
 VAR_1->group_pathkeys = VAR_0;
 VAR_1->window_pathkeys = VAR_0;
 VAR_1->distinct_pathkeys = VAR_0;

 VAR_1->sort_pathkeys =
  FUNC_0(VAR_1,
           VAR_1->parse->sortClause,
           VAR_1->parse->targetList);

 VAR_1->query_pathkeys = VAR_1->sort_pathkeys;
}
