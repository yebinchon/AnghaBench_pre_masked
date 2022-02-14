
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int parallel_aware; int parallel_safe; int plan_width; int plan_rows; int total_cost; int startup_cost; } ;
typedef TYPE_1__ Plan ;



__attribute__((used)) static void
FUNC_0(Plan *VAR_0, Plan *VAR_1)
{
 VAR_0->startup_cost = VAR_1->startup_cost;
 VAR_0->total_cost = VAR_1->total_cost;
 VAR_0->plan_rows = VAR_1->plan_rows;
 VAR_0->plan_width = VAR_1->plan_width;

 VAR_0->parallel_aware = 0;

 VAR_0->parallel_safe = VAR_1->parallel_safe;
}
