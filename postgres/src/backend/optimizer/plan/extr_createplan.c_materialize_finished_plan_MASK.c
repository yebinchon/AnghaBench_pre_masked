
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int total_cost; int startup_cost; } ;
struct TYPE_7__ {int parallel_aware; int parallel_safe; int plan_width; int plan_rows; int total_cost; int startup_cost; int initPlan; } ;
typedef TYPE_1__ Plan ;
typedef TYPE_2__ Path ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

Plan *
FUNC_2(Plan *VAR_1)
{
 Plan *VAR_2;
 Path VAR_3;

 VAR_2 = (Plan *) FUNC_1(VAR_1);
 VAR_2->initPlan = VAR_1->initPlan;
 VAR_1->initPlan = VAR_0;


 FUNC_0(&VAR_3,
      VAR_1->startup_cost,
      VAR_1->total_cost,
      VAR_1->plan_rows,
      VAR_1->plan_width);
 VAR_2->startup_cost = VAR_3.startup_cost;
 VAR_2->total_cost = VAR_3.total_cost;
 VAR_2->plan_rows = VAR_1->plan_rows;
 VAR_2->plan_width = VAR_1->plan_width;
 VAR_2->parallel_aware = 0;
 VAR_2->parallel_safe = VAR_1->parallel_safe;

 return VAR_2;
}
