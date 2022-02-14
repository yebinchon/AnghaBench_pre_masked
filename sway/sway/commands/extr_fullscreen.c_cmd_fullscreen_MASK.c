
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sway_workspace {int layout; TYPE_2__* tiling; } ;
struct sway_node {scalar_t__ type; } ;
struct sway_container {scalar_t__ fullscreen_mode; struct sway_container* parent; int workspace; } ;
struct cmd_results {int dummy; } ;
typedef enum sway_fullscreen_mode { ____Placeholder_sway_fullscreen_mode } sway_fullscreen_mode ;
struct TYPE_8__ {int seat; struct sway_workspace* workspace; struct sway_container* container; struct sway_node* node; } ;
struct TYPE_10__ {TYPE_3__ handler_context; } ;
struct TYPE_9__ {TYPE_1__* outputs; } ;
struct TYPE_7__ {scalar_t__ length; } ;
struct TYPE_6__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 () ;
 struct cmd_results* FUNC_1 (int,char*,int ,int) ;
 struct cmd_results* FUNC_2 (int ,char*) ;
 TYPE_5__* VAR_8 ;
 int FUNC_3 (struct sway_container*,int) ;
 int FUNC_4 (char*,int) ;
 TYPE_4__* VAR_9 ;
 int FUNC_5 (int ,struct sway_container*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 struct sway_container* FUNC_7 (struct sway_workspace*) ;

struct cmd_results *FUNC_8(int VAR_10, char **VAR_11) {
 struct cmd_results *VAR_12 = ((void*)0);
 if ((VAR_12 = FUNC_1(VAR_10, "fullscreen", VAR_2, 2))) {
  return VAR_12;
 }
 if (!VAR_9->outputs->length) {
  return FUNC_2(VAR_0,
    "Can't run this command while there's no outputs connected.");
 }
 struct sway_node *VAR_13 = VAR_8->handler_context.node;
 struct sway_container *VAR_14 = VAR_8->handler_context.container;
 struct sway_workspace *VAR_15 = VAR_8->handler_context.workspace;
 if (VAR_13->type == VAR_7 && VAR_15->tiling->length == 0) {
  return FUNC_2(VAR_0,
    "Can't fullscreen an empty workspace");
 }


 if (VAR_14 && !VAR_14->workspace) {
  while (VAR_14->parent) {
   VAR_14 = VAR_14->parent;
  }
 }

 bool VAR_16 = 0;
 for (struct sway_container *VAR_17 = VAR_14; VAR_17; VAR_17 = VAR_17->parent) {
  if (VAR_17->fullscreen_mode != VAR_4) {
   VAR_14 = VAR_17;
   VAR_16 = 1;
   break;
  }
 }

 bool VAR_18 = 0;
 bool VAR_19 = !VAR_16;

 if (VAR_10 >= 1) {
  if (FUNC_6(VAR_11[0], "global") == 0) {
   VAR_18 = 1;
  } else {
   VAR_19 = FUNC_4(VAR_11[0], VAR_16);
  }
 }

 if (VAR_10 >= 2) {
  VAR_18 = FUNC_6(VAR_11[1], "global") == 0;
 }

 if (VAR_19 && VAR_13->type == VAR_7) {

  VAR_14 = FUNC_7(VAR_15);
  VAR_15->layout = VAR_6;
  FUNC_5(VAR_8->handler_context.seat, VAR_14);
 }

 enum sway_fullscreen_mode VAR_20 = VAR_4;
 if (VAR_19) {
  VAR_20 = VAR_18 ? VAR_3 : VAR_5;
 }

 FUNC_3(VAR_14, VAR_20);
 FUNC_0();

 return FUNC_2(VAR_1, ((void*)0));
}
