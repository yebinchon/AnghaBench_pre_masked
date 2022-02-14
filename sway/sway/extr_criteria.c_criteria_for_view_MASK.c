
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sway_view {int dummy; } ;
struct criteria {int type; } ;
struct TYPE_6__ {int length; struct criteria** items; } ;
typedef TYPE_1__ list_t ;
typedef enum criteria_type { ____Placeholder_criteria_type } criteria_type ;
struct TYPE_7__ {TYPE_1__* criteria; } ;


 TYPE_5__* VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 scalar_t__ FUNC_1 (struct criteria*,struct sway_view*) ;
 int FUNC_2 (TYPE_1__*,struct criteria*) ;

list_t *FUNC_3(struct sway_view *VAR_1, enum criteria_type VAR_2) {
 list_t *VAR_3 = VAR_0->criteria;
 list_t *VAR_4 = FUNC_0();
 for (int VAR_5 = 0; VAR_5 < VAR_3->length; ++VAR_5) {
  struct criteria *VAR_6 = VAR_3->items[VAR_5];
  if ((VAR_6->type & VAR_2) && FUNC_1(VAR_6, VAR_1)) {
   FUNC_2(VAR_4, VAR_6);
  }
 }
 return VAR_4;
}
