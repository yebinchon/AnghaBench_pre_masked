
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sway_workspace {int output; } ;
struct sway_seat {int dummy; } ;
struct sway_output {int dummy; } ;
struct sway_node {scalar_t__ type; struct sway_container* sway_container; } ;
struct sway_container {int dummy; } ;
struct cmd_results {int dummy; } ;
typedef enum wlr_direction { ____Placeholder_wlr_direction } wlr_direction ;
struct TYPE_6__ {struct sway_seat* seat; struct sway_workspace* workspace; struct sway_container* container; struct sway_node* node; } ;
struct TYPE_8__ {TYPE_2__ handler_context; int active; scalar_t__ reading; } ;
struct TYPE_7__ {TYPE_1__* outputs; } ;
struct TYPE_5__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct cmd_results* FUNC_0 (int ,char*) ;
 TYPE_4__* VAR_6 ;
 scalar_t__ FUNC_1 (struct sway_container*) ;
 scalar_t__ FUNC_2 (struct sway_container*) ;
 scalar_t__ FUNC_3 (struct sway_container*) ;
 int FUNC_4 (struct sway_container*) ;
 struct cmd_results* FUNC_5 () ;
 struct cmd_results* FUNC_6 (struct sway_workspace*,struct sway_seat*,int) ;
 struct cmd_results* FUNC_7 (struct sway_seat*,int,char**) ;
 struct cmd_results* FUNC_8 () ;
 int FUNC_9 (struct sway_container*,struct sway_seat*,char*,int*) ;
 struct sway_node* FUNC_10 (struct sway_output*,int) ;
 struct sway_node* FUNC_11 (struct sway_container*,struct sway_seat*,int) ;
 struct sway_node* FUNC_12 (struct sway_container*,struct sway_seat*,int,int) ;
 struct sway_output* FUNC_13 (int ,int) ;
 int FUNC_14 (char*,int*) ;
 TYPE_3__* VAR_7 ;
 int FUNC_15 (struct sway_container*) ;
 int FUNC_16 (struct sway_seat*) ;
 int FUNC_17 (struct sway_seat*,struct sway_node*) ;
 int FUNC_18 (struct sway_seat*,struct sway_container*) ;
 scalar_t__ FUNC_19 (char*,char*) ;
 scalar_t__ FUNC_20 (char*,char*) ;
 int FUNC_21 (struct sway_container*,char*) ;

struct cmd_results *FUNC_22(int VAR_8, char **VAR_9) {
 if (VAR_6->reading || !VAR_6->active) {
  return FUNC_0(VAR_0, ((void*)0));
 }
 if (!VAR_7->outputs->length) {
  return FUNC_0(VAR_2,
    "Can't run this command while there's no outputs connected.");
 }
 struct sway_node *VAR_10 = VAR_6->handler_context.node;
 struct sway_container *VAR_11 = VAR_6->handler_context.container;
 struct sway_workspace *VAR_12 = VAR_6->handler_context.workspace;
 struct sway_seat *VAR_13 = VAR_6->handler_context.seat;
 if (VAR_10->type < VAR_5) {
  return FUNC_0(VAR_1,
   "Command 'focus' cannot be used above the workspace level");
 }

 if (VAR_8 == 0 && VAR_11) {
  if (FUNC_3(VAR_11)) {
   FUNC_15(VAR_11);
  }
  FUNC_18(VAR_13, VAR_11);
  FUNC_16(VAR_13);
  FUNC_4(VAR_11);
  return FUNC_0(VAR_3, ((void*)0));
 }

 if (FUNC_20(VAR_9[0], "floating") == 0) {
  return FUNC_6(VAR_12, VAR_13, 1);
 } else if (FUNC_20(VAR_9[0], "tiling") == 0) {
  return FUNC_6(VAR_12, VAR_13, 0);
 } else if (FUNC_20(VAR_9[0], "mode_toggle") == 0) {
  bool VAR_14 = VAR_11 && FUNC_2(VAR_11);
  return FUNC_6(VAR_12, VAR_13, !VAR_14);
 }

 if (FUNC_20(VAR_9[0], "output") == 0) {
  VAR_8--; VAR_9++;
  return FUNC_7(VAR_13, VAR_8, VAR_9);
 }

 if (FUNC_19(VAR_9[0], "parent") == 0) {
  return FUNC_8();
 }
 if (FUNC_19(VAR_9[0], "child") == 0) {
  return FUNC_5();
 }

 enum wlr_direction VAR_15 = 0;
 bool VAR_16 = 1;
 if (!FUNC_14(VAR_9[0], &VAR_15)) {
  if (!FUNC_9(VAR_11, VAR_13, VAR_9[0], &VAR_15)) {
   return FUNC_0(VAR_2,
    "Expected 'focus <direction|next|prev|parent|child|mode_toggle|floating|tiling>' "
    "or 'focus output <direction|name>'");
  } else if (VAR_8 == 2 && FUNC_19(VAR_9[1], "sibling") == 0) {
   VAR_16 = 0;
  }
 }

 if (!VAR_15) {
  return FUNC_0(VAR_3, ((void*)0));
 }

 if (VAR_10->type == VAR_5) {

  struct sway_output *VAR_17 =
   FUNC_13(VAR_12->output, VAR_15);
  if (!VAR_17) {
   return FUNC_0(VAR_3, ((void*)0));
  }

  struct sway_node *VAR_18 =
   FUNC_10(VAR_17, VAR_15);
  FUNC_17(VAR_13, VAR_18);
  FUNC_16(VAR_13);
  return FUNC_0(VAR_3, ((void*)0));
 }

 if (!FUNC_21(VAR_11, "Expected container to be non null")) {
  return FUNC_0(VAR_1, "");
 }
 struct sway_node *VAR_19 = ((void*)0);
 if (FUNC_1(VAR_11)) {
  VAR_19 = FUNC_11(VAR_11, VAR_13, VAR_15);
 } else {
  VAR_19 = FUNC_12(VAR_11, VAR_13, VAR_15, VAR_16);
 }
 if (VAR_19) {
  FUNC_17(VAR_13, VAR_19);
  FUNC_16(VAR_13);

  if (VAR_19->type == VAR_4) {
   FUNC_4(VAR_19->sway_container);
  }
 }

 return FUNC_0(VAR_3, ((void*)0));
}
