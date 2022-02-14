
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_30__ {int total_cost; int startup_cost; } ;
struct TYPE_29__ {int restrictlist; int param_source_rels; } ;
struct TYPE_28__ {TYPE_1__* parent; } ;
struct TYPE_27__ {scalar_t__ relids; scalar_t__ top_parent_relids; } ;
typedef scalar_t__ Relids ;
typedef TYPE_1__ RelOptInfo ;
typedef int PlannerInfo ;
typedef TYPE_2__ Path ;
typedef int List ;
typedef int JoinType ;
typedef TYPE_3__ JoinPathExtraData ;
typedef TYPE_4__ JoinCostWorkspace ;


 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int ,int *,scalar_t__) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int ) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (int *,TYPE_1__*,int ,TYPE_4__*,TYPE_3__*,TYPE_2__*,TYPE_2__*,int ,int *,scalar_t__) ;
 scalar_t__ FUNC_9 (int *,scalar_t__,scalar_t__) ;
 int FUNC_10 (int *,TYPE_4__*,int ,TYPE_2__*,TYPE_2__*,TYPE_3__*) ;
 TYPE_2__* FUNC_11 (int *,TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_12(PlannerInfo *VAR_0,
      RelOptInfo *VAR_1,
      Path *VAR_2,
      Path *VAR_3,
      List *VAR_4,
      JoinType VAR_5,
      JoinPathExtraData *VAR_6)
{
 Relids VAR_7;
 JoinCostWorkspace VAR_8;
 RelOptInfo *VAR_9 = VAR_3->parent;
 RelOptInfo *VAR_10 = VAR_2->parent;
 Relids VAR_11;
 Relids VAR_12;
 Relids VAR_13 = FUNC_1(VAR_3);
 Relids VAR_14 = FUNC_1(VAR_2);





 if (VAR_9->top_parent_relids)
  VAR_11 = VAR_9->top_parent_relids;
 else
  VAR_11 = VAR_9->relids;

 if (VAR_10->top_parent_relids)
  VAR_12 = VAR_10->top_parent_relids;
 else
  VAR_12 = VAR_10->relids;
 VAR_7 = FUNC_7(VAR_12, VAR_14,
              VAR_11, VAR_13);
 if (VAR_7 &&
  ((!FUNC_6(VAR_7, VAR_6->param_source_rels) &&
    !FUNC_4(VAR_0, VAR_12, VAR_13)) ||
   FUNC_9(VAR_0, VAR_12, VAR_13)))
 {

  FUNC_5(VAR_7);
  return;
 }
 FUNC_10(VAR_0, &VAR_8, VAR_5,
        VAR_2, VAR_3, VAR_6);

 if (FUNC_3(VAR_1,
        VAR_8.startup_cost, VAR_8.total_cost,
        VAR_4, VAR_7))
 {





  if (FUNC_0(VAR_3, VAR_2->parent))
  {
   VAR_3 = FUNC_11(VAR_0, VAR_3,
               VAR_2->parent);





   if (!VAR_3)
   {
    FUNC_5(VAR_7);
    return;
   }
  }

  FUNC_2(VAR_1, (Path *)
     FUNC_8(VAR_0,
           VAR_1,
           VAR_5,
           &VAR_8,
           VAR_6,
           VAR_2,
           VAR_3,
           VAR_6->restrictlist,
           VAR_4,
           VAR_7));
 }
 else
 {

  FUNC_5(VAR_7);
 }
}
