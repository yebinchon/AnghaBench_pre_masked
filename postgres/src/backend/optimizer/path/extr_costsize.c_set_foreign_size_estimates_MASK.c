
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ relid; int rows; int baserestrictinfo; int baserestrictcost; } ;
typedef TYPE_1__ RelOptInfo ;
typedef int PlannerInfo ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;

void
FUNC_3(PlannerInfo *VAR_0, RelOptInfo *VAR_1)
{

 FUNC_0(VAR_1->relid > 0);

 VAR_1->rows = 1000;

 FUNC_1(&VAR_1->baserestrictcost, VAR_1->baserestrictinfo, VAR_0);

 FUNC_2(VAR_0, VAR_1);
}
