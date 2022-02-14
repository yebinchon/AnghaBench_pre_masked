
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_31__ {int total_cost; } ;
struct TYPE_30__ {int restrictlist; } ;
struct TYPE_29__ {TYPE_2__* parent; TYPE_1__* param_info; } ;
struct TYPE_28__ {scalar_t__ relids; scalar_t__ top_parent_relids; int lateral_relids; } ;
struct TYPE_27__ {scalar_t__ ppi_req_outer; } ;
typedef scalar_t__ Relids ;
typedef TYPE_2__ RelOptInfo ;
typedef int PlannerInfo ;
typedef TYPE_3__ Path ;
typedef int List ;
typedef int JoinType ;
typedef TYPE_4__ JoinPathExtraData ;
typedef TYPE_5__ JoinCostWorkspace ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int *,TYPE_2__*,int ,TYPE_5__*,TYPE_4__*,TYPE_3__*,TYPE_3__*,int ,int *,int *) ;
 int FUNC_7 (int *,TYPE_5__*,int ,TYPE_3__*,TYPE_3__*,TYPE_4__*) ;
 TYPE_3__* FUNC_8 (int *,TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_9(PlannerInfo *VAR_0,
        RelOptInfo *VAR_1,
        Path *VAR_2,
        Path *VAR_3,
        List *VAR_4,
        JoinType VAR_5,
        JoinPathExtraData *VAR_6)
{
 JoinCostWorkspace VAR_7;







 FUNC_0(FUNC_4(VAR_1->lateral_relids));
 if (VAR_3->param_info != ((void*)0))
 {
  Relids VAR_8 = VAR_3->param_info->ppi_req_outer;
  RelOptInfo *VAR_9 = VAR_2->parent;
  Relids VAR_10;






  if (VAR_9->top_parent_relids)
   VAR_10 = VAR_9->top_parent_relids;
  else
   VAR_10 = VAR_9->relids;

  if (!FUNC_5(VAR_8, VAR_10))
   return;
 }





 FUNC_7(VAR_0, &VAR_7, VAR_5,
        VAR_2, VAR_3, VAR_6);
 if (!FUNC_3(VAR_1, VAR_7.total_cost, VAR_4))
  return;





 if (FUNC_1(VAR_3, VAR_2->parent))
 {
  VAR_3 = FUNC_8(VAR_0, VAR_3,
              VAR_2->parent);




  if (!VAR_3)
   return;
 }


 FUNC_2(VAR_1, (Path *)
      FUNC_6(VAR_0,
            VAR_1,
            VAR_5,
            &VAR_7,
            VAR_6,
            VAR_2,
            VAR_3,
            VAR_6->restrictlist,
            VAR_4,
            ((void*)0)));
}
