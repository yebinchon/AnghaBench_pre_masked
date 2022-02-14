
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char xcb_window_t ;
struct sway_node {int dummy; } ;
struct sway_container {int node; } ;
struct cmd_results {int dummy; } ;
struct TYPE_6__ {struct sway_container* container; } ;
struct TYPE_8__ {TYPE_2__ handler_context; } ;
struct TYPE_7__ {scalar_t__ fullscreen_global; TYPE_1__* outputs; } ;
struct TYPE_5__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sway_node*) ;
 int FUNC_1 () ;
 size_t FUNC_2 (char*) ;
 struct cmd_results* FUNC_3 (int,char*,int ,int) ;
 struct cmd_results* FUNC_4 (int ,char*,...) ;
 TYPE_4__* VAR_4 ;
 scalar_t__ FUNC_5 (struct sway_container*,struct sway_container*) ;
 int FUNC_6 (struct sway_container*,struct sway_container*) ;
 char* VAR_5 ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char**,int) ;
 struct sway_node* FUNC_9 (int *) ;
 TYPE_3__* VAR_6 ;
 struct sway_container* FUNC_10 (int ,...) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 char FUNC_12 (char*,int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

struct cmd_results *FUNC_13(int VAR_10, char **VAR_11) {
 struct cmd_results *VAR_12 = ((void*)0);
 if ((VAR_12 = FUNC_3(VAR_10, "swap", VAR_3, 4))) {
  return VAR_12;
 }
 if (!VAR_6->outputs->length) {
  return FUNC_4(VAR_1,
    "Can't run this command while there's no outputs connected.");
 }

 if (FUNC_11(VAR_11[0], "container") || FUNC_11(VAR_11[1], "with")) {
  return FUNC_4(VAR_1, VAR_5);
 }

 struct sway_container *VAR_13 = VAR_4->handler_context.container;
 struct sway_container *VAR_14 = ((void*)0);

 char *VAR_15 = FUNC_8(VAR_11 + 3, VAR_10 - 3);
 if (FUNC_11(VAR_11[2], "id") == 0) {




 } else if (FUNC_11(VAR_11[2], "con_id") == 0) {
  size_t VAR_16 = FUNC_2(VAR_15);
  VAR_14 = FUNC_10(VAR_7, &VAR_16);
 } else if (FUNC_11(VAR_11[2], "mark") == 0) {
  VAR_14 = FUNC_10(VAR_9, VAR_15);
 } else {
  FUNC_7(VAR_15);
  return FUNC_4(VAR_1, VAR_5);
 }

 if (!VAR_14) {
  VAR_12 = FUNC_4(VAR_0,
    "Failed to find %s '%s'", VAR_11[2], VAR_15);
 } else if (!VAR_13) {
  VAR_12 = FUNC_4(VAR_0,
    "Can only swap with containers and views");
 } else if (FUNC_5(VAR_13, VAR_14)
   || FUNC_5(VAR_14, VAR_13)) {
  VAR_12 = FUNC_4(VAR_0,
    "Cannot swap ancestor and descendant");
 }

 FUNC_7(VAR_15);

 if (VAR_12) {
  return VAR_12;
 }

 FUNC_6(VAR_13, VAR_14);

 if (VAR_6->fullscreen_global) {
  FUNC_1();
 } else {
  struct sway_node *VAR_17 = FUNC_9(&VAR_13->node);
  struct sway_node *VAR_18 = FUNC_9(&VAR_14->node);
  if (VAR_17) {
   FUNC_0(VAR_17);
  }
  if (VAR_18 && VAR_17 != VAR_18) {
   FUNC_0(VAR_18);
  }
 }

 return FUNC_4(VAR_2, ((void*)0));
}
