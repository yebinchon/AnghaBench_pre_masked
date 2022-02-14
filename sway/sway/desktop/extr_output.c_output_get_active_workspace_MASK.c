
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_workspace {int dummy; } ;
struct sway_seat {int dummy; } ;
struct sway_output {TYPE_1__* workspaces; int node; } ;
struct sway_node {struct sway_workspace* sway_workspace; } ;
struct TYPE_2__ {struct sway_workspace** items; int length; } ;


 struct sway_seat* FUNC_0 () ;
 struct sway_node* FUNC_1 (struct sway_seat*,int *) ;

struct sway_workspace *FUNC_2(struct sway_output *VAR_0) {
 struct sway_seat *VAR_1 = FUNC_0();
 struct sway_node *VAR_2 = FUNC_1(VAR_1, &VAR_0->node);
 if (!VAR_2) {
  if (!VAR_0->workspaces->length) {
   return ((void*)0);
  }
  return VAR_0->workspaces->items[0];
 }
 return VAR_2->sway_workspace;
}
