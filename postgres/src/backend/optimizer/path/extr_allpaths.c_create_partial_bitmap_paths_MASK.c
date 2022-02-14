
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int lateral_relids; } ;
typedef TYPE_1__ RelOptInfo ;
typedef int PlannerInfo ;
typedef int Path ;


 int FUNC_0 (TYPE_1__*,int *) ;
 double FUNC_1 (int *,TYPE_1__*,int *,double,int *,int *) ;
 int FUNC_2 (TYPE_1__*,double,int,int ) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*,int *,int ,double,int) ;
 int VAR_0 ;

void
FUNC_4(PlannerInfo *VAR_1, RelOptInfo *VAR_2,
       Path *VAR_3)
{
 int VAR_4;
 double VAR_5;


 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, 1.0,
           ((void*)0), ((void*)0));

 VAR_4 = FUNC_2(VAR_2, VAR_5, -1,
              VAR_0);

 if (VAR_4 <= 0)
  return;

 FUNC_0(VAR_2, (Path *) FUNC_3(VAR_1, VAR_2,
                 VAR_3, VAR_2->lateral_relids, 1.0, VAR_4));
}
