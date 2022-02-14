
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_view {TYPE_1__* executed_criteria; } ;
struct criteria {int dummy; } ;
struct TYPE_2__ {int length; struct criteria** items; } ;



__attribute__((used)) static bool FUNC_0(struct sway_view *VAR_0,
  struct criteria *VAR_1) {
 for (int VAR_2 = 0; VAR_2 < VAR_0->executed_criteria->length; ++VAR_2) {
  struct criteria *VAR_3 = VAR_0->executed_criteria->items[VAR_2];
  if (VAR_3 == VAR_1) {
   return 1;
  }
 }
 return 0;
}
