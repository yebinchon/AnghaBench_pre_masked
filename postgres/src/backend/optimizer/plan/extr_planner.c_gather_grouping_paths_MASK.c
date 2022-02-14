
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {double rows; double parallel_workers; int pathkeys; } ;
struct TYPE_18__ {int group_pathkeys; } ;
struct TYPE_17__ {int reltarget; int partial_pathlist; } ;
typedef TYPE_1__ RelOptInfo ;
typedef TYPE_2__ PlannerInfo ;
typedef TYPE_3__ Path ;


 int FUNC_0 (TYPE_1__*,TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,TYPE_3__*,int ,int ,int *,double*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_1__*,TYPE_3__*,int ,double) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,int) ;
 TYPE_3__* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(PlannerInfo *VAR_0, RelOptInfo *VAR_1)
{
 Path *VAR_2;


 FUNC_3(VAR_0, VAR_1, 1);


 VAR_2 = FUNC_4(VAR_1->partial_pathlist);
 if (!FUNC_5(VAR_0->group_pathkeys,
          VAR_2->pathkeys))
 {
  Path *VAR_3;
  double VAR_4;

  VAR_4 =
   VAR_2->rows * VAR_2->parallel_workers;
  VAR_3 = (Path *) FUNC_2(VAR_0, VAR_1, VAR_2,
           VAR_0->group_pathkeys,
           -1.0);
  VAR_3 = (Path *)
   FUNC_1(VAR_0,
          VAR_1,
          VAR_3,
          VAR_1->reltarget,
          VAR_0->group_pathkeys,
          ((void*)0),
          &VAR_4);

  FUNC_0(VAR_1, VAR_3);
 }
}
