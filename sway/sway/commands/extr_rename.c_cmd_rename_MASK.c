
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sway_workspace {char* name; int output; } ;
struct cmd_results {int dummy; } ;
struct TYPE_6__ {struct sway_workspace* workspace; } ;
struct TYPE_8__ {TYPE_2__ handler_context; } ;
struct TYPE_7__ {TYPE_1__* outputs; } ;
struct TYPE_5__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*,...) ;
 TYPE_4__* VAR_4 ;
 char* VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,struct sway_workspace*,char*) ;
 int FUNC_4 (char) ;
 char* FUNC_5 (char**,int) ;
 int FUNC_6 (int ) ;
 TYPE_3__* VAR_6 ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (int ,char*,char*,char*) ;
 struct sway_workspace* FUNC_10 (char*) ;
 struct sway_workspace* FUNC_11 (char*) ;

struct cmd_results *FUNC_12(int VAR_7, char **VAR_8) {
 struct cmd_results *VAR_9 = ((void*)0);
 if ((VAR_9 = FUNC_0(VAR_7, "rename", VAR_2, 3))) {
  return VAR_9;
 }
 if (!VAR_6->outputs->length) {
  return FUNC_1(VAR_0,
    "Can't run this command while there's no outputs connected.");
 }
 if (FUNC_8(VAR_8[0], "workspace") != 0) {
  return FUNC_1(VAR_0, VAR_5);
 }

 int VAR_10 = 1;
 struct sway_workspace *VAR_11 = ((void*)0);

 if (FUNC_8(VAR_8[1], "to") == 0) {

  VAR_11 = VAR_4->handler_context.workspace;
 } else if (FUNC_8(VAR_8[1], "number") == 0) {

  if (!FUNC_4(VAR_8[2][0])) {
   return FUNC_1(VAR_0,
     "Invalid workspace number '%s'", VAR_8[2]);
  }
  VAR_11 = FUNC_11(VAR_8[2]);
  while (VAR_10 < VAR_7 && FUNC_8(VAR_8[VAR_10], "to") != 0) {
   ++VAR_10;
  }
 } else {

  int VAR_12 = VAR_10;
  while (VAR_12 < VAR_7 && FUNC_8(VAR_8[VAR_12], "to") != 0) {
   ++VAR_12;
  }
  char *VAR_13 = FUNC_5(VAR_8 + VAR_10, VAR_12 - VAR_10);
  VAR_11 = FUNC_10(VAR_13);
  FUNC_2(VAR_13);
  VAR_10 = VAR_12;
 }

 if (!VAR_11) {
  return FUNC_1(VAR_0,
    "There is no workspace with that name");
 }

 ++VAR_10;

 if (VAR_10 >= VAR_7) {
  return FUNC_1(VAR_0, VAR_5);
 }

 char *VAR_14 = FUNC_5(VAR_8 + VAR_10, VAR_7 - VAR_10);
 if (FUNC_8(VAR_14, "next") == 0 ||
   FUNC_8(VAR_14, "prev") == 0 ||
   FUNC_8(VAR_14, "next_on_output") == 0 ||
   FUNC_8(VAR_14, "prev_on_output") == 0 ||
   FUNC_8(VAR_14, "back_and_forth") == 0 ||
   FUNC_8(VAR_14, "current") == 0 ||
   FUNC_8(VAR_14, "number") == 0) {
  FUNC_2(VAR_14);
  return FUNC_1(VAR_0,
    "Cannot use special workspace name '%s'", VAR_8[VAR_10]);
 }
 struct sway_workspace *VAR_15 = FUNC_10(VAR_14);
 if (VAR_15) {
  FUNC_2(VAR_14);
  if (VAR_15 == VAR_11) {
   return FUNC_1(VAR_1, ((void*)0));
  } else {
   return FUNC_1(VAR_0, "Workspace already exists");
  }
 }

 FUNC_9(VAR_3, "renaming workspace '%s' to '%s'", VAR_11->name, VAR_14);

 FUNC_7(VAR_11->name, VAR_14);

 FUNC_2(VAR_11->name);
 VAR_11->name = VAR_14;

 FUNC_6(VAR_11->output);
 FUNC_3(((void*)0), VAR_11, "rename");

 return FUNC_1(VAR_1, ((void*)0));
}
