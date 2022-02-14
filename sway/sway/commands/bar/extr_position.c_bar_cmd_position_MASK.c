
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int valid ;
struct cmd_results {int dummy; } ;
struct TYPE_4__ {TYPE_1__* current_bar; } ;
struct TYPE_3__ {int position; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*,...) ;
 TYPE_2__* VAR_4 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,char*,int ) ;

struct cmd_results *FUNC_6(int VAR_5, char **VAR_6) {
 struct cmd_results *VAR_7 = ((void*)0);
 if ((VAR_7 = FUNC_0(VAR_5, "position", VAR_2, 1))) {
  return VAR_7;
 }
 char *VAR_8[] = { "top", "bottom" };
 for (size_t VAR_9 = 0; VAR_9 < sizeof(VAR_8) / sizeof(VAR_8[0]); ++VAR_9) {
  if (FUNC_3(VAR_8[VAR_9], VAR_6[0]) == 0) {
   FUNC_5(VAR_3, "Setting bar position '%s' for bar: %s",
     VAR_6[0], VAR_4->current_bar->id);
   FUNC_2(VAR_4->current_bar->position);
   VAR_4->current_bar->position = FUNC_4(VAR_6[0]);
   return FUNC_1(VAR_1, ((void*)0));
  }
 }
 return FUNC_1(VAR_0, "Invalid value %s", VAR_6[0]);
}
