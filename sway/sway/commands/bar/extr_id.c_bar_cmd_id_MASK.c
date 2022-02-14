
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct bar_config {char* id; } ;
struct TYPE_4__ {struct bar_config* current_bar; TYPE_1__* bars; } ;
struct TYPE_3__ {int length; struct bar_config** items; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*,...) ;
 TYPE_2__* VAR_5 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (int ,char*,char const*,char const*) ;

struct cmd_results *FUNC_6(int VAR_6, char **VAR_7) {
 struct cmd_results *VAR_8 = ((void*)0);
 if ((VAR_8 = FUNC_0(VAR_6, "id", VAR_3, 1))) {
  return VAR_8;
 }

 const char *VAR_9 = VAR_7[0];
 const char *VAR_10 = VAR_5->current_bar->id;
 if (FUNC_3(VAR_9, VAR_10) == 0) {
  return FUNC_1(VAR_2, ((void*)0));
 } else if (FUNC_3(VAR_9, "id") == 0) {
  return FUNC_1(VAR_1, "id cannot be 'id'");
 }

 for (int VAR_11 = 0; VAR_11 < VAR_5->bars->length; ++VAR_11) {
  struct bar_config *VAR_12 = VAR_5->bars->items[VAR_11];
  if (FUNC_3(VAR_9, VAR_12->id) == 0 && VAR_5->current_bar != VAR_12) {
   return FUNC_1(VAR_0,
     "Id '%s' already defined for another bar. Id unchanged (%s).",
     VAR_9, VAR_10);
  }
 }

 FUNC_5(VAR_4, "Renaming bar: '%s' to '%s'", VAR_10, VAR_9);


 FUNC_2(VAR_5->current_bar->id);
 VAR_5->current_bar->id = FUNC_4(VAR_9);
 return FUNC_1(VAR_2, ((void*)0));
}
