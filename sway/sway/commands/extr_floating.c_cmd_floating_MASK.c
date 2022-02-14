
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
struct sway_container {scalar_t__ workspace; struct sway_container* parent; } ;
struct cmd_results {int dummy; } ;
struct TYPE_8__ {int seat; struct sway_workspace* workspace; struct sway_container* container; } ;
struct TYPE_10__ {TYPE_3__ handler_context; } ;
struct TYPE_9__ {TYPE_1__* outputs; } ;
struct TYPE_7__ {scalar_t__ length; } ;
struct TYPE_6__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 struct cmd_results* FUNC_1 (int,char*,int ,int) ;
 struct cmd_results* FUNC_2 (int ,char*) ;
 TYPE_5__* VAR_4 ;
 int FUNC_3 (struct sway_container*) ;
 scalar_t__ FUNC_4 (struct sway_container*) ;
 scalar_t__ FUNC_5 (struct sway_container*) ;
 int FUNC_6 (struct sway_container*,int) ;
 int FUNC_7 (char*,int ) ;
 TYPE_4__* VAR_5 ;
 int FUNC_8 (int ,struct sway_container*) ;
 struct sway_container* FUNC_9 (struct sway_workspace*) ;

struct cmd_results *FUNC_10(int VAR_6, char **VAR_7) {
 struct cmd_results *VAR_8 = ((void*)0);
 if ((VAR_8 = FUNC_1(VAR_6, "floating", VAR_2, 1))) {
  return VAR_8;
 }
 if (!VAR_5->outputs->length) {
  return FUNC_2(VAR_0,
    "Can't run this command while there's no outputs connected.");
 }
 struct sway_container *VAR_9 = VAR_4->handler_context.container;
 struct sway_workspace *VAR_10 = VAR_4->handler_context.workspace;
 if (!VAR_9 && VAR_10->tiling->length == 0) {
  return FUNC_2(VAR_0, "Can't float an empty workspace");
 }
 if (!VAR_9) {

  VAR_9 = FUNC_9(VAR_10);
  VAR_10->layout = VAR_3;
  FUNC_8(VAR_4->handler_context.seat, VAR_9);
 }

 if (FUNC_5(VAR_9)) {
  return FUNC_2(VAR_0,
    "Can't change floating on hidden scratchpad container");
 }



 if (FUNC_4(VAR_9)) {
  while (VAR_9->parent) {
   VAR_9 = VAR_9->parent;
  }
 }

 bool VAR_11 =
  FUNC_7(VAR_7[0], FUNC_3(VAR_9));

 FUNC_6(VAR_9, VAR_11);


 if (VAR_9->workspace) {
  FUNC_0(VAR_9->workspace);
 }

 return FUNC_2(VAR_1, ((void*)0));
}
