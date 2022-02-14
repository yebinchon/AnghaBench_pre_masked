
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_workspace {int node; struct sway_output* output; } ;
struct sway_output {int node; int workspaces; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,struct sway_workspace*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct sway_workspace *VAR_0) {
 struct sway_output *VAR_1 = VAR_0->output;
 int VAR_2 = FUNC_1(VAR_1->workspaces, VAR_0);
 if (VAR_2 != -1) {
  FUNC_0(VAR_1->workspaces, VAR_2);
 }
 VAR_0->output = ((void*)0);

 FUNC_2(&VAR_0->node);
 FUNC_2(&VAR_1->node);
}
