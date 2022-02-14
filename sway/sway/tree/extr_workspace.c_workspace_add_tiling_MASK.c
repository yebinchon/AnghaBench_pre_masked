
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_workspace {int node; int tiling; } ;
struct sway_container {int node; struct sway_workspace* workspace; } ;


 int FUNC_0 (struct sway_container*) ;
 int FUNC_1 (struct sway_container*,int ,int *) ;
 int FUNC_2 (struct sway_container*) ;
 int FUNC_3 (int ,struct sway_container*) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (struct sway_workspace*) ;

void FUNC_6(struct sway_workspace *VAR_1,
  struct sway_container *VAR_2) {
 if (VAR_2->workspace) {
  FUNC_0(VAR_2);
 }
 FUNC_3(VAR_1->tiling, VAR_2);
 VAR_2->workspace = VAR_1;
 FUNC_1(VAR_2, VAR_0, ((void*)0));
 FUNC_2(VAR_2);
 FUNC_5(VAR_1);
 FUNC_4(&VAR_1->node);
 FUNC_4(&VAR_2->node);
}
