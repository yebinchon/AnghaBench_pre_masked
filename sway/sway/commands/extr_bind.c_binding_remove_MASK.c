
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sway_binding {int input; } ;
struct cmd_results {int dummy; } ;
struct TYPE_4__ {int length; struct sway_binding** items; } ;
typedef TYPE_1__ list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sway_binding*,struct sway_binding*) ;
 struct cmd_results* FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct sway_binding*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ,char*,char const*,char const*,int ) ;

__attribute__((used)) static struct cmd_results *FUNC_5(struct sway_binding *VAR_3,
  list_t *VAR_4, const char *VAR_5,
  const char *VAR_6) {
 for (int VAR_7 = 0; VAR_7 < VAR_4->length; ++VAR_7) {
  struct sway_binding *VAR_8 = VAR_4->items[VAR_7];
  if (FUNC_0(VAR_3, VAR_8)) {
   FUNC_4(VAR_2, "%s - Unbound `%s` from device '%s'",
     VAR_5, VAR_6, VAR_3->input);
   FUNC_2(VAR_8);
   FUNC_2(VAR_3);
   FUNC_3(VAR_4, VAR_7);
   return FUNC_1(VAR_1, ((void*)0));
  }
 }
 FUNC_2(VAR_3);
 return FUNC_1(VAR_0, "Could not find binding `%s` "
   "for the given flags", VAR_6);
}
