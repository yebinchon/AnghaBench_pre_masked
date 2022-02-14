
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_26__ {int total_cost; } ;
struct TYPE_25__ {int restrictlist; } ;
struct TYPE_24__ {TYPE_1__* param_info; } ;
struct TYPE_23__ {int lateral_relids; } ;
struct TYPE_22__ {int ppi_req_outer; } ;
typedef int Relids ;
typedef TYPE_2__ RelOptInfo ;
typedef int PlannerInfo ;
typedef TYPE_3__ Path ;
typedef int List ;
typedef int JoinType ;
typedef TYPE_4__ JoinPathExtraData ;
typedef TYPE_5__ JoinCostWorkspace ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,TYPE_2__*,int ,TYPE_5__*,TYPE_4__*,TYPE_3__*,TYPE_3__*,int,int ,int *,int *) ;
 int FUNC_5 (int *,TYPE_5__*,int ,int *,TYPE_3__*,TYPE_3__*,TYPE_4__*,int) ;

__attribute__((used)) static void
FUNC_6(PlannerInfo *VAR_1,
        RelOptInfo *VAR_2,
        Path *VAR_3,
        Path *VAR_4,
        List *VAR_5,
        JoinType VAR_6,
        JoinPathExtraData *VAR_7,
        bool VAR_8)
{
 JoinCostWorkspace VAR_9;







 FUNC_0(FUNC_3(VAR_2->lateral_relids));
 if (VAR_4->param_info != ((void*)0))
 {
  Relids VAR_10 = VAR_4->param_info->ppi_req_outer;

  if (!FUNC_3(VAR_10))
   return;
 }





 FUNC_5(VAR_1, &VAR_9, VAR_6, VAR_5,
        VAR_3, VAR_4, VAR_7, VAR_8);
 if (!FUNC_2(VAR_2, VAR_9.total_cost, VAR_0))
  return;


 FUNC_1(VAR_2, (Path *)
      FUNC_4(VAR_1,
            VAR_2,
            VAR_6,
            &VAR_9,
            VAR_7,
            VAR_3,
            VAR_4,
            VAR_8,
            VAR_7->restrictlist,
            ((void*)0),
            VAR_5));
}
