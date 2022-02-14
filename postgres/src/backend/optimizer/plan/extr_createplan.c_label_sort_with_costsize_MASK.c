
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int total_cost; int startup_cost; } ;
struct TYPE_9__ {int parallel_safe; int plan_width; int plan_rows; int total_cost; } ;
struct TYPE_7__ {int parallel_aware; int parallel_safe; int plan_width; int plan_rows; int total_cost; int startup_cost; TYPE_3__* lefttree; } ;
struct TYPE_8__ {TYPE_1__ plan; } ;
typedef TYPE_2__ Sort ;
typedef int PlannerInfo ;
typedef TYPE_3__ Plan ;
typedef TYPE_4__ Path ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int *,int ,int ,int ,int ,double,int ,double) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(PlannerInfo *VAR_2, Sort *VAR_3, double VAR_4)
{
 Plan *VAR_5 = VAR_3->plan.lefttree;
 Path VAR_6;

 FUNC_0(&VAR_6, VAR_2, VAR_0,
     VAR_5->total_cost,
     VAR_5->plan_rows,
     VAR_5->plan_width,
     0.0,
     VAR_1,
     VAR_4);
 VAR_3->plan.startup_cost = VAR_6.startup_cost;
 VAR_3->plan.total_cost = VAR_6.total_cost;
 VAR_3->plan.plan_rows = VAR_5->plan_rows;
 VAR_3->plan.plan_width = VAR_5->plan_width;
 VAR_3->plan.parallel_aware = 0;
 VAR_3->plan.parallel_safe = VAR_5->parallel_safe;
}
