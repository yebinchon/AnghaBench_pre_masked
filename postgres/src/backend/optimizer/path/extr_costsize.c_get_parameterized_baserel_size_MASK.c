
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double tuples; double rows; int relid; int baserestrictinfo; } ;
typedef TYPE_1__ RelOptInfo ;
typedef int PlannerInfo ;
typedef int List ;


 int VAR_0 ;
 double FUNC_0 (double) ;
 double FUNC_1 (int *,int *,int ,int ,int *) ;
 int * FUNC_2 (int *,int ) ;

double
FUNC_3(PlannerInfo *VAR_1, RelOptInfo *VAR_2,
          List *VAR_3)
{
 List *VAR_4;
 double VAR_5;







 VAR_4 = FUNC_2(VAR_3, VAR_2->baserestrictinfo);
 VAR_5 = VAR_2->tuples *
  FUNC_1(VAR_1,
          VAR_4,
          VAR_2->relid,
          VAR_0,
          ((void*)0));
 VAR_5 = FUNC_0(VAR_5);

 if (VAR_5 > VAR_2->rows)
  VAR_5 = VAR_2->rows;
 return VAR_5;
}
