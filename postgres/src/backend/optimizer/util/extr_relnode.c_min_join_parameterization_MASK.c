
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lateral_relids; } ;
typedef int * Relids ;
typedef TYPE_1__ RelOptInfo ;
typedef int PlannerInfo ;


 int * FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ) ;

Relids
FUNC_3(PlannerInfo *VAR_0,
        Relids VAR_1,
        RelOptInfo *VAR_2,
        RelOptInfo *VAR_3)
{
 Relids VAR_4;
 VAR_4 = FUNC_2(VAR_2->lateral_relids, VAR_3->lateral_relids);
 VAR_4 = FUNC_0(VAR_4, VAR_1);


 if (FUNC_1(VAR_4))
  VAR_4 = ((void*)0);

 return VAR_4;
}
