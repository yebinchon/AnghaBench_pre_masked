
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sway_switch_binding {char const* command; } ;
struct cmd_results {int dummy; } ;
struct TYPE_6__ {int length; struct sway_switch_binding** items; } ;
typedef TYPE_2__ list_t ;
struct TYPE_7__ {TYPE_1__* current_mode; } ;
struct TYPE_5__ {TYPE_2__* switch_bindings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sway_switch_binding*,struct sway_switch_binding*) ;
 struct cmd_results* FUNC_1 (int ,int *) ;
 TYPE_4__* VAR_3 ;
 int FUNC_2 (char*,char const*,char const*,char const*) ;
 int FUNC_3 (struct sway_switch_binding*) ;
 int FUNC_4 (TYPE_2__*,struct sway_switch_binding*) ;
 int FUNC_5 (int ,char*,char const*,char const*,char const*) ;

__attribute__((used)) static struct cmd_results *FUNC_6(
  struct sway_switch_binding *VAR_4, const char *VAR_5,
  const char *VAR_6, bool VAR_7) {
 list_t *VAR_8 = VAR_3->current_mode->switch_bindings;

 bool VAR_9 = 0;
 for (int VAR_10 = 0; VAR_10 < VAR_8->length; ++VAR_10) {
  struct sway_switch_binding *VAR_11 = VAR_8->items[VAR_10];
  if (FUNC_0(VAR_4, VAR_11)) {
   FUNC_5(VAR_2, "Overwriting binding '%s' to `%s` from `%s`",
     VAR_6, VAR_4->command, VAR_11->command);
   if (VAR_7) {
    FUNC_2("Overwriting binding"
      "'%s' to `%s` from `%s`",
      VAR_6, VAR_4->command,
      VAR_11->command);
   }
   FUNC_3(VAR_11);
   VAR_8->items[VAR_10] = VAR_4;
   VAR_9 = 1;
  }
 }

 if (!VAR_9) {
  FUNC_4(VAR_8, VAR_4);
  FUNC_5(VAR_1, "%s - Bound %s to command `%s`",
    VAR_5, VAR_6, VAR_4->command);
 }

 return FUNC_1(VAR_0, ((void*)0));
}
