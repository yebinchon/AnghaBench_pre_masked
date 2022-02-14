
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_workspace {int dummy; } ;
struct sway_container {struct sway_container* parent; TYPE_1__* children; struct sway_workspace* workspace; scalar_t__ view; } ;
struct TYPE_2__ {scalar_t__ length; } ;


 int FUNC_0 (struct sway_container*) ;
 int FUNC_1 (struct sway_workspace*) ;

void FUNC_2(struct sway_container *VAR_0) {
 if (VAR_0->view) {
  return;
 }
 struct sway_workspace *VAR_1 = VAR_0->workspace;
 while (VAR_0) {
  if (VAR_0->children->length) {
   return;
  }
  struct sway_container *VAR_2 = VAR_0->parent;
  FUNC_0(VAR_0);
  VAR_0 = VAR_2;
 }
 if (VAR_1) {
  FUNC_1(VAR_1);
 }
}
