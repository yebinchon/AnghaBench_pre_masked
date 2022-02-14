
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int total_cost; int startup_cost; } ;
struct TYPE_8__ {int restrictlist; int param_source_rels; } ;
typedef scalar_t__ Relids ;
typedef int RelOptInfo ;
typedef int PlannerInfo ;
typedef int Path ;
typedef int List ;
typedef int JoinType ;
typedef TYPE_1__ JoinPathExtraData ;
typedef TYPE_2__ JoinCostWorkspace ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int ,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *,int ,TYPE_2__*,TYPE_1__*,int *,int *,int,int ,scalar_t__,int *) ;
 int FUNC_6 (int *,TYPE_2__*,int ,int *,int *,int *,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_7(PlannerInfo *VAR_1,
      RelOptInfo *VAR_2,
      Path *VAR_3,
      Path *VAR_4,
      List *VAR_5,
      JoinType VAR_6,
      JoinPathExtraData *VAR_7)
{
 Relids VAR_8;
 JoinCostWorkspace VAR_9;





 VAR_8 = FUNC_4(VAR_3,
               VAR_4);
 if (VAR_8 &&
  !FUNC_3(VAR_8, VAR_7->param_source_rels))
 {

  FUNC_2(VAR_8);
  return;
 }





 FUNC_6(VAR_1, &VAR_9, VAR_6, VAR_5,
        VAR_3, VAR_4, VAR_7, 0);

 if (FUNC_1(VAR_2,
        VAR_9.startup_cost, VAR_9.total_cost,
        VAR_0, VAR_8))
 {
  FUNC_0(VAR_2, (Path *)
     FUNC_5(VAR_1,
           VAR_2,
           VAR_6,
           &VAR_9,
           VAR_7,
           VAR_3,
           VAR_4,
           0,
           VAR_7->restrictlist,
           VAR_8,
           VAR_5));
 }
 else
 {

  FUNC_2(VAR_8);
 }
}
