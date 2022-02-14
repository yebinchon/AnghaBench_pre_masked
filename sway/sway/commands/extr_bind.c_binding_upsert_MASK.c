
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sway_binding {int dummy; } ;
struct TYPE_4__ {int length; struct sway_binding** items; } ;
typedef TYPE_1__ list_t ;


 scalar_t__ FUNC_0 (struct sway_binding*,struct sway_binding*) ;
 int FUNC_1 (TYPE_1__*,struct sway_binding*) ;

__attribute__((used)) static struct sway_binding *FUNC_2(struct sway_binding *VAR_0,
  list_t *VAR_1) {
 for (int VAR_2 = 0; VAR_2 < VAR_1->length; ++VAR_2) {
  struct sway_binding *VAR_3 = VAR_1->items[VAR_2];
  if (FUNC_0(VAR_0, VAR_3)) {
   VAR_1->items[VAR_2] = VAR_0;
   return VAR_3;
  }
 }

 FUNC_1(VAR_1, VAR_0);
 return ((void*)0);
}
