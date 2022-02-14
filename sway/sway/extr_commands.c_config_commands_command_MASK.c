
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct command_policy {char* command; int context; } ;
struct cmd_results {int dummy; } ;
struct cmd_handler {int dummy; } ;
typedef enum command_context { ____Placeholder_command_context } command_context ;
typedef int context_names ;
struct TYPE_4__ {TYPE_1__* command_policies; } ;
struct TYPE_3__ {int length; struct command_policy** items; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct command_policy* FUNC_0 (char*) ;
 struct cmd_results* FUNC_1 (int ,char*,...) ;
 TYPE_2__* VAR_9 ;
 struct cmd_handler* FUNC_2 (char*,int *,int ) ;
 int FUNC_3 (int,char**) ;
 int FUNC_4 (TYPE_1__*,struct command_policy*) ;
 char** FUNC_5 (char*,int*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (struct command_policy*,char*) ;
 int FUNC_8 (int ,char*,char*,int) ;

struct cmd_results *FUNC_9(char *VAR_10) {
 struct cmd_results *VAR_11 = ((void*)0);
 int VAR_12;
 char **VAR_13 = FUNC_5(VAR_10, &VAR_12);
 if (!VAR_12) {
  VAR_11 = FUNC_1(VAR_2, ((void*)0));
  goto cleanup;
 }


 char *VAR_14 = VAR_13[0];

 if (FUNC_6(VAR_14, "}") == 0) {
  VAR_11 = FUNC_1(VAR_0, ((void*)0));
  goto cleanup;
 }

 struct cmd_handler *VAR_15 = FUNC_2(VAR_14, ((void*)0), 0);
 if (!VAR_15 && FUNC_6(VAR_14, "*") != 0) {
  VAR_11 = FUNC_1(VAR_1,
   "Unknown/invalid command '%s'", VAR_14);
  goto cleanup;
 }

 enum command_context VAR_16 = 0;

 struct {
  char *name;
  enum command_context context;
 } VAR_17[] = {
  { "config", VAR_5 },
  { "binding", VAR_4 },
  { "ipc", VAR_7 },
  { "criteria", VAR_6 },
  { "all", VAR_3 },
 };

 for (int VAR_18 = 1; VAR_18 < VAR_12; ++VAR_18) {
  size_t VAR_19;
  for (VAR_19 = 0; VAR_19 < sizeof(VAR_17) / sizeof(VAR_17[0]); ++VAR_19) {
   if (FUNC_6(VAR_17[VAR_19].name, VAR_13[VAR_18]) == 0) {
    break;
   }
  }
  if (VAR_19 == sizeof(VAR_17) / sizeof(VAR_17[0])) {
   VAR_11 = FUNC_1(VAR_1,
     "Invalid command context %s", VAR_13[VAR_18]);
   goto cleanup;
  }
  VAR_16 |= VAR_17[VAR_19].context;
 }

 struct command_policy *VAR_20 = ((void*)0);
 for (int VAR_21 = 0; VAR_21 < VAR_9->command_policies->length; ++VAR_21) {
  struct command_policy *VAR_22 = VAR_9->command_policies->items[VAR_21];
  if (FUNC_6(VAR_22->command, VAR_14) == 0) {
   VAR_20 = VAR_22;
   break;
  }
 }
 if (!VAR_20) {
  VAR_20 = FUNC_0(VAR_14);
  if (!FUNC_7(VAR_20, "Unable to allocate security policy")) {
   VAR_11 = FUNC_1(VAR_1,
     "Unable to allocate memory");
   goto cleanup;
  }
  FUNC_4(VAR_9->command_policies, VAR_20);
 }
 VAR_20->context = VAR_16;

 FUNC_8(VAR_8, "Set command policy for %s to %d",
   VAR_20->command, VAR_20->context);

 VAR_11 = FUNC_1(VAR_2, ((void*)0));

cleanup:
 FUNC_3(VAR_12, VAR_13);
 return VAR_11;
}
