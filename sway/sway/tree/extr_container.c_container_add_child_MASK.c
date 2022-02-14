
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_container {scalar_t__ fullscreen_mode; int node; scalar_t__ workspace; struct sway_container* parent; int children; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sway_container*) ;
 int FUNC_1 (struct sway_container*,int (*) (struct sway_container*,int*),int*) ;
 int FUNC_2 (struct sway_container*) ;
 int FUNC_3 (struct sway_container*) ;
 int FUNC_4 (int ,struct sway_container*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sway_container*,int*) ;
 int FUNC_7 (struct sway_container*,int*) ;

void FUNC_8(struct sway_container *VAR_1,
  struct sway_container *VAR_2) {
 if (VAR_2->workspace) {
  FUNC_0(VAR_2);
 }
 FUNC_4(VAR_1->children, VAR_2);
 VAR_2->parent = VAR_1;
 VAR_2->workspace = VAR_1->workspace;
 FUNC_1(VAR_2, FUNC_7, ((void*)0));
 bool VAR_3 = VAR_2->fullscreen_mode != VAR_0 ||
  VAR_1->fullscreen_mode != VAR_0;
 FUNC_6(VAR_2, &VAR_3);
 FUNC_1(VAR_2, FUNC_6, &VAR_3);
 FUNC_2(VAR_2);
 FUNC_3(VAR_1);
 FUNC_5(&VAR_2->node);
 FUNC_5(&VAR_1->node);
}
