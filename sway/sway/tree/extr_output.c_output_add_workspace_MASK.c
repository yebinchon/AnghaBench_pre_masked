
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_workspace {int node; struct sway_output* output; } ;
struct sway_output {int node; int workspaces; } ;


 int FUNC_0 (int ,struct sway_workspace*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sway_workspace*) ;

void FUNC_3(struct sway_output *VAR_0,
  struct sway_workspace *VAR_1) {
 if (VAR_1->output) {
  FUNC_2(VAR_1);
 }
 FUNC_0(VAR_0->workspaces, VAR_1);
 VAR_1->output = VAR_0;
 FUNC_1(&VAR_0->node);
 FUNC_1(&VAR_1->node);
}
