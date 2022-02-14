
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_container {scalar_t__ workspace; struct sway_container* parent; int * formatted_title; int children; int layout; int view; } ;


 int * FUNC_0 (size_t,int) ;
 size_t FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct sway_container*) ;
 int FUNC_3 (struct sway_container*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (scalar_t__) ;

void FUNC_7(struct sway_container *VAR_0) {
 if (!VAR_0->view) {
  size_t VAR_1 = FUNC_1(VAR_0->layout,
    VAR_0->children, ((void*)0));
  FUNC_4(VAR_0->formatted_title);
  VAR_0->formatted_title = FUNC_0(VAR_1 + 1, sizeof(char));
  if (!FUNC_5(VAR_0->formatted_title,
     "Unable to allocate title string")) {
   return;
  }
  FUNC_1(VAR_0->layout, VAR_0->children,
    VAR_0->formatted_title);
  FUNC_2(VAR_0);
  FUNC_3(VAR_0);
 }
 if (VAR_0->parent) {
  FUNC_7(VAR_0->parent);
 } else if (VAR_0->workspace) {
  FUNC_6(VAR_0->workspace);
 }
}
