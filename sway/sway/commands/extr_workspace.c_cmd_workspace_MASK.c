
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct workspace_config {int outputs; } ;
struct sway_workspace {int dummy; } ;
struct sway_seat {char* prev_workspace_name; } ;
struct cmd_results {int dummy; } ;
struct TYPE_6__ {struct sway_seat* seat; } ;
struct TYPE_8__ {TYPE_2__ handler_context; int active; scalar_t__ reading; } ;
struct TYPE_7__ {scalar_t__ fullscreen_global; TYPE_1__* outputs; } ;
struct TYPE_5__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*,...) ;
 struct cmd_results* FUNC_2 (int,char**,int) ;
 TYPE_4__* VAR_5 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char) ;
 char* FUNC_5 (char**,int) ;
 int FUNC_6 (int ,int ) ;
 TYPE_3__* VAR_6 ;
 int FUNC_7 (struct sway_seat*) ;
 struct sway_workspace* FUNC_8 (struct sway_seat*) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;
 struct sway_workspace* FUNC_11 (char*) ;
 struct sway_workspace* FUNC_12 (char*) ;
 struct workspace_config* FUNC_13 (char*) ;
 struct sway_workspace* FUNC_14 (int *,char*) ;
 struct sway_workspace* FUNC_15 (struct sway_workspace*,int) ;
 struct sway_workspace* FUNC_16 (struct sway_workspace*,int) ;
 int FUNC_17 (struct sway_workspace*,int) ;

struct cmd_results *FUNC_18(int VAR_7, char **VAR_8) {
 struct cmd_results *VAR_9 = ((void*)0);
 if ((VAR_9 = FUNC_0(VAR_7, "workspace", VAR_4, 1))) {
  return VAR_9;
 }

 int VAR_10 = -1;
 int VAR_11 = -1;

 for (int VAR_12 = 0; VAR_12 < VAR_7; ++VAR_12) {
  if (FUNC_9(VAR_8[VAR_12], "output") == 0) {
   VAR_10 = VAR_12;
   break;
  }
 }
 for (int VAR_13 = 0; VAR_13 < VAR_7; ++VAR_13) {
  if (FUNC_9(VAR_8[VAR_13], "gaps") == 0) {
   VAR_11 = VAR_13;
   break;
  }
 }
 if (VAR_10 >= 0) {
  if ((VAR_9 = FUNC_0(VAR_7, "workspace", VAR_4,
      VAR_10 + 2))) {
   return VAR_9;
  }
  char *VAR_14 = FUNC_5(VAR_8, VAR_10);
  struct workspace_config *VAR_15 = FUNC_13(VAR_14);
  FUNC_3(VAR_14);
  if (!VAR_15) {
   return FUNC_1(VAR_1,
     "Unable to allocate workspace output");
  }
  for (int VAR_16 = VAR_10 + 1; VAR_16 < VAR_7; ++VAR_16) {
   FUNC_6(VAR_15->outputs, FUNC_10(VAR_8[VAR_16]));
  }
 } else if (VAR_11 >= 0) {
  if ((VAR_9 = FUNC_2(VAR_7, VAR_8, VAR_11))) {
   return VAR_9;
  }
 } else {
  if (VAR_5->reading || !VAR_5->active) {
   return FUNC_1(VAR_0, ((void*)0));
  } else if (!VAR_6->outputs->length) {
   return FUNC_1(VAR_2,
     "Can't run this command while there's no outputs connected.");
  }

  if (VAR_6->fullscreen_global) {
   return FUNC_1(VAR_1, "workspace",
    "Can't switch workspaces while fullscreen global");
  }

  bool VAR_17 = 0;
  while (FUNC_9(VAR_8[0], "--no-auto-back-and-forth") == 0) {
   VAR_17 = 1;
   if ((VAR_9 = FUNC_0(--VAR_7, "workspace", VAR_4, 1))) {
    return VAR_9;
   }
   ++VAR_8;
  }

  bool VAR_18 = VAR_7 > 1 && FUNC_9(VAR_8[1], "--create") == 0;
  struct sway_seat *VAR_19 = VAR_5->handler_context.seat;
  struct sway_workspace *VAR_20 = FUNC_8(VAR_19);
  if (!VAR_20) {
   return FUNC_1(VAR_1, "No workspace to switch from");
  }

  struct sway_workspace *VAR_21 = ((void*)0);
  if (FUNC_9(VAR_8[0], "number") == 0) {
   if (VAR_7 < 2) {
    return FUNC_1(VAR_2,
      "Expected workspace number");
   }
   if (!FUNC_4(VAR_8[1][0])) {
    return FUNC_1(VAR_2,
      "Invalid workspace number '%s'", VAR_8[1]);
   }
   if (!(VAR_21 = FUNC_12(VAR_8[1]))) {
    char *VAR_22 = FUNC_5(VAR_8 + 1, VAR_7 - 1);
    VAR_21 = FUNC_14(((void*)0), VAR_22);
    FUNC_3(VAR_22);
   }
  } else if (FUNC_9(VAR_8[0], "next") == 0 ||
    FUNC_9(VAR_8[0], "prev") == 0 ||
    FUNC_9(VAR_8[0], "current") == 0) {
   VAR_21 = FUNC_11(VAR_8[0]);
  } else if (FUNC_9(VAR_8[0], "next_on_output") == 0) {
   VAR_21 = FUNC_15(VAR_20, VAR_18);
  } else if (FUNC_9(VAR_8[0], "prev_on_output") == 0) {
   VAR_21 = FUNC_16(VAR_20, VAR_18);
  } else if (FUNC_9(VAR_8[0], "back_and_forth") == 0) {
   if (!VAR_19->prev_workspace_name) {
    return FUNC_1(VAR_2,
      "There is no previous workspace");
   }
   if (!(VAR_21 = FUNC_11(VAR_8[0]))) {
    VAR_21 = FUNC_14(((void*)0), VAR_19->prev_workspace_name);
   }
  } else {
   char *VAR_23 = FUNC_5(VAR_8, VAR_7);
   if (!(VAR_21 = FUNC_11(VAR_23))) {
    VAR_21 = FUNC_14(((void*)0), VAR_23);
   }
   FUNC_3(VAR_23);
  }
  if (!VAR_21) {
   return FUNC_1(VAR_1, "No workspace to switch to");
  }
  FUNC_17(VAR_21, VAR_17);
  FUNC_7(VAR_19);
 }
 return FUNC_1(VAR_3, ((void*)0));
}
