
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_container {scalar_t__ workspace; struct sway_container* parent; int children; } ;


 int FUNC_0 (struct sway_container*) ;
 int FUNC_1 (struct sway_container*,int ,int *) ;
 int FUNC_2 (struct sway_container*) ;
 int FUNC_3 (struct sway_container*) ;
 int FUNC_4 (int ,int,struct sway_container*) ;
 int VAR_0 ;

void FUNC_5(struct sway_container *VAR_1,
  struct sway_container *VAR_2, int VAR_3) {
 if (VAR_2->workspace) {
  FUNC_0(VAR_2);
 }
 FUNC_4(VAR_1->children, VAR_3, VAR_2);
 VAR_2->parent = VAR_1;
 VAR_2->workspace = VAR_1->workspace;
 FUNC_1(VAR_2, VAR_0, ((void*)0));
 FUNC_2(VAR_2);
 FUNC_3(VAR_1);
}
