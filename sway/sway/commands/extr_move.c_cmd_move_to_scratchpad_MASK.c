
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sway_workspace {int layout; TYPE_1__* tiling; } ;
struct sway_node {scalar_t__ type; } ;
struct sway_container {scalar_t__ workspace; int scratchpad; struct sway_container* parent; } ;
struct cmd_results {int dummy; } ;
struct TYPE_5__ {struct sway_workspace* workspace; struct sway_container* container; struct sway_node* node; } ;
struct TYPE_6__ {TYPE_2__ handler_context; } ;
struct TYPE_4__ {scalar_t__ length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct cmd_results* FUNC_0 (int ,char*) ;
 TYPE_3__* VAR_4 ;
 scalar_t__ FUNC_1 (struct sway_container*) ;
 int FUNC_2 (struct sway_container*,int *) ;
 int FUNC_3 (struct sway_container*) ;
 struct sway_container* FUNC_4 (struct sway_workspace*) ;

__attribute__((used)) static struct cmd_results *FUNC_5(void) {
 struct sway_node *VAR_5 = VAR_4->handler_context.node;
 struct sway_container *VAR_6 = VAR_4->handler_context.container;
 struct sway_workspace *VAR_7 = VAR_4->handler_context.workspace;
 if (VAR_5->type == VAR_3 && VAR_7->tiling->length == 0) {
  return FUNC_0(VAR_0,
    "Can't move an empty workspace to the scratchpad");
 }
 if (VAR_5->type == VAR_3) {

  VAR_6 = FUNC_4(VAR_7);
  VAR_7->layout = VAR_2;
 }



 if (FUNC_1(VAR_6)) {
  while (VAR_6->parent) {
   VAR_6 = VAR_6->parent;
  }
 }

 if (!VAR_6->scratchpad) {
  FUNC_2(VAR_6, ((void*)0));
 } else if (VAR_6->workspace) {
  FUNC_3(VAR_6);
 }
 return FUNC_0(VAR_1, ((void*)0));
}
