
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_23__ {int total_cost; int startup_cost; } ;
struct TYPE_22__ {int restrictlist; int param_source_rels; } ;
struct TYPE_21__ {int pathkeys; } ;
typedef scalar_t__ Relids ;
typedef int RelOptInfo ;
typedef int PlannerInfo ;
typedef TYPE_1__ Path ;
typedef int List ;
typedef int JoinType ;
typedef TYPE_2__ JoinPathExtraData ;
typedef TYPE_3__ JoinCostWorkspace ;


 int * VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int *,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,int *,int ,TYPE_3__*,TYPE_2__*,TYPE_1__*,TYPE_1__*,int ,int *,scalar_t__,int *,int *,int *) ;
 int FUNC_6 (int *,TYPE_3__*,int ,int *,TYPE_1__*,TYPE_1__*,int *,int *,TYPE_2__*) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int *,TYPE_1__*,TYPE_1__*,int *,int *,int *,int *,int ,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_9(PlannerInfo *VAR_1,
       RelOptInfo *VAR_2,
       Path *VAR_3,
       Path *VAR_4,
       List *VAR_5,
       List *VAR_6,
       List *VAR_7,
       List *VAR_8,
       JoinType VAR_9,
       JoinPathExtraData *VAR_10,
       bool VAR_11)
{
 Relids VAR_12;
 JoinCostWorkspace VAR_13;

 if (VAR_11)
 {
  FUNC_8(VAR_1,
           VAR_2,
           VAR_3,
           VAR_4,
           VAR_5,
           VAR_6,
           VAR_7,
           VAR_8,
           VAR_9,
           VAR_10);
  return;
 }





 VAR_12 = FUNC_4(VAR_3,
               VAR_4);
 if (VAR_12 &&
  !FUNC_3(VAR_12, VAR_10->param_source_rels))
 {

  FUNC_2(VAR_12);
  return;
 }





 if (VAR_7 &&
  FUNC_7(VAR_7, VAR_3->pathkeys))
  VAR_7 = VAR_0;
 if (VAR_8 &&
  FUNC_7(VAR_8, VAR_4->pathkeys))
  VAR_8 = VAR_0;




 FUNC_6(VAR_1, &VAR_13, VAR_9, VAR_6,
         VAR_3, VAR_4,
         VAR_7, VAR_8,
         VAR_10);

 if (FUNC_1(VAR_2,
        VAR_13.startup_cost, VAR_13.total_cost,
        VAR_5, VAR_12))
 {
  FUNC_0(VAR_2, (Path *)
     FUNC_5(VAR_1,
            VAR_2,
            VAR_9,
            &VAR_13,
            VAR_10,
            VAR_3,
            VAR_4,
            VAR_10->restrictlist,
            VAR_5,
            VAR_12,
            VAR_6,
            VAR_7,
            VAR_8));
 }
 else
 {

  FUNC_2(VAR_12);
 }
}
