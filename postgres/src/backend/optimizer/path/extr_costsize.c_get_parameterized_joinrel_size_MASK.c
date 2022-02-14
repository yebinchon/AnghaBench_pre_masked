
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int rows; int parent; } ;
struct TYPE_7__ {double rows; } ;
typedef int SpecialJoinInfo ;
typedef TYPE_1__ RelOptInfo ;
typedef int PlannerInfo ;
typedef TYPE_2__ Path ;
typedef int List ;


 double FUNC_0 (int *,TYPE_1__*,int ,int ,int ,int ,int *,int *) ;

double
FUNC_1(PlannerInfo *VAR_0, RelOptInfo *VAR_1,
          Path *VAR_2,
          Path *VAR_3,
          SpecialJoinInfo *VAR_4,
          List *VAR_5)
{
 double VAR_6;
 VAR_6 = FUNC_0(VAR_0,
            VAR_1,
            VAR_2->parent,
            VAR_3->parent,
            VAR_2->rows,
            VAR_3->rows,
            VAR_4,
            VAR_5);

 if (VAR_6 > VAR_1->rows)
  VAR_6 = VAR_1->rows;
 return VAR_6;
}
