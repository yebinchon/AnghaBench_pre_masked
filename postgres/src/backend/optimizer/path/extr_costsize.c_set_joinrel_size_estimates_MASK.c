
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int rows; } ;
typedef int SpecialJoinInfo ;
typedef TYPE_1__ RelOptInfo ;
typedef int PlannerInfo ;
typedef int List ;


 int FUNC_0 (int *,TYPE_1__*,TYPE_1__*,TYPE_1__*,int ,int ,int *,int *) ;

void
FUNC_1(PlannerInfo *VAR_0, RelOptInfo *VAR_1,
         RelOptInfo *VAR_2,
         RelOptInfo *VAR_3,
         SpecialJoinInfo *VAR_4,
         List *VAR_5)
{
 VAR_1->rows = FUNC_0(VAR_0,
             VAR_1,
             VAR_2,
             VAR_3,
             VAR_2->rows,
             VAR_3->rows,
             VAR_4,
             VAR_5);
}
