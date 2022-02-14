
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int joininfo; } ;
typedef int RestrictInfo ;
typedef int Relids ;
typedef TYPE_1__ RelOptInfo ;
typedef int PlannerInfo ;


 int FUNC_0 (int ,int) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int *) ;

void
FUNC_3(PlannerInfo *VAR_0,
      RestrictInfo *VAR_1,
      Relids VAR_2)
{
 int VAR_3;

 VAR_3 = -1;
 while ((VAR_3 = FUNC_0(VAR_2, VAR_3)) >= 0)
 {
  RelOptInfo *VAR_4 = FUNC_1(VAR_0, VAR_3);

  VAR_4->joininfo = FUNC_2(VAR_4->joininfo, VAR_1);
 }
}
