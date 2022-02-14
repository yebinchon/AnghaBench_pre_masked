
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct bar_binding {scalar_t__ button; scalar_t__ release; } ;
struct TYPE_7__ {int length; struct bar_binding** items; } ;
typedef TYPE_2__ list_t ;
struct TYPE_8__ {TYPE_1__* current_bar; } ;
struct TYPE_6__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cmd_results* FUNC_0 (int ,int *) ;
 TYPE_4__* VAR_2 ;
 int FUNC_1 (struct bar_binding*) ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*,struct bar_binding*) ;
 int FUNC_4 (int ,char*,int ,scalar_t__,char const*,char*) ;

__attribute__((used)) static struct cmd_results *FUNC_5(struct bar_binding *VAR_3,
  list_t *VAR_4) {
 const char *VAR_5 = FUNC_2(VAR_3->button);
 bool VAR_6 = 0;
 for (int VAR_7 = 0; VAR_7 < VAR_4->length; VAR_7++) {
  struct bar_binding *VAR_8 = VAR_4->items[VAR_7];
  if (VAR_8->button == VAR_3->button &&
    VAR_8->release == VAR_3->release) {
   VAR_6 = 1;
   VAR_4->items[VAR_7] = VAR_3;
   FUNC_1(VAR_8);
   FUNC_4(VAR_1, "[bar %s] Updated binding for %u (%s)%s",
     VAR_2->current_bar->id, VAR_3->button, VAR_5,
     VAR_3->release ? " - release" : "");
   break;
  }
 }
 if (!VAR_6) {
  FUNC_3(VAR_4, VAR_3);
  FUNC_4(VAR_1, "[bar %s] Added binding for %u (%s)%s",
    VAR_2->current_bar->id, VAR_3->button, VAR_5,
    VAR_3->release ? " - release" : "");
 }
 return FUNC_0(VAR_0, ((void*)0));
}
