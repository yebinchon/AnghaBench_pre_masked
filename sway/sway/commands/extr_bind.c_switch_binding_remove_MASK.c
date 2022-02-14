
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sway_switch_binding {int dummy; } ;
struct cmd_results {int dummy; } ;
struct TYPE_6__ {int length; struct sway_switch_binding** items; } ;
typedef TYPE_2__ list_t ;
struct TYPE_7__ {TYPE_1__* current_mode; } ;
struct TYPE_5__ {TYPE_2__* switch_bindings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sway_switch_binding*,struct sway_switch_binding*) ;
 struct cmd_results* FUNC_1 (int ,char*,...) ;
 TYPE_4__* VAR_3 ;
 int FUNC_2 (struct sway_switch_binding*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int ,char*,char const*,char const*) ;

__attribute__((used)) static struct cmd_results *FUNC_5(
  struct sway_switch_binding *VAR_4, const char *VAR_5,
  const char *VAR_6) {
 list_t *VAR_7 = VAR_3->current_mode->switch_bindings;
 for (int VAR_8 = 0; VAR_8 < VAR_7->length; ++VAR_8) {
  struct sway_switch_binding *VAR_9 = VAR_7->items[VAR_8];
  if (FUNC_0(VAR_4, VAR_9)) {
   FUNC_2(VAR_9);
   FUNC_2(VAR_4);
   FUNC_3(VAR_7, VAR_8);
   FUNC_4(VAR_2, "%s - Unbound %s switch",
     VAR_5, VAR_6);
   return FUNC_1(VAR_1, ((void*)0));
  }
 }

 FUNC_2(VAR_4);
 return FUNC_1(VAR_0, "Could not find switch binding `%s`",
   VAR_6);
}
