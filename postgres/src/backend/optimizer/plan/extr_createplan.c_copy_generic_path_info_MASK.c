
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int parallel_safe; int parallel_aware; TYPE_1__* pathtarget; int rows; int total_cost; int startup_cost; } ;
struct TYPE_7__ {int parallel_safe; int parallel_aware; int plan_width; int plan_rows; int total_cost; int startup_cost; } ;
struct TYPE_6__ {int width; } ;
typedef TYPE_2__ Plan ;
typedef TYPE_3__ Path ;



__attribute__((used)) static void
FUNC_0(Plan *VAR_0, Path *VAR_1)
{
 VAR_0->startup_cost = VAR_1->startup_cost;
 VAR_0->total_cost = VAR_1->total_cost;
 VAR_0->plan_rows = VAR_1->rows;
 VAR_0->plan_width = VAR_1->pathtarget->width;
 VAR_0->parallel_aware = VAR_1->parallel_aware;
 VAR_0->parallel_safe = VAR_1->parallel_safe;
}
