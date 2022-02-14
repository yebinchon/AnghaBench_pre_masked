
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ relid; double tuples; int baserestrictinfo; int baserestrictcost; int rows; } ;
typedef TYPE_1__ RelOptInfo ;
typedef int PlannerInfo ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (double) ;
 double FUNC_2 (int *,int ,int ,int ,int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;

void
FUNC_5(PlannerInfo *VAR_1, RelOptInfo *VAR_2)
{
 double VAR_3;


 FUNC_0(VAR_2->relid > 0);

 VAR_3 = VAR_2->tuples *
  FUNC_2(VAR_1,
          VAR_2->baserestrictinfo,
          0,
          VAR_0,
          ((void*)0));

 VAR_2->rows = FUNC_1(VAR_3);

 FUNC_3(&VAR_2->baserestrictcost, VAR_2->baserestrictinfo, VAR_1);

 FUNC_4(VAR_1, VAR_2);
}
