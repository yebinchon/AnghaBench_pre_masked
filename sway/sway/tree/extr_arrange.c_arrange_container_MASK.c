
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wlr_box {int dummy; } ;
struct sway_container {int node; int layout; int children; scalar_t__ view; } ;
struct TYPE_2__ {scalar_t__ reloading; } ;


 int FUNC_0 (int ,int ,struct wlr_box*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct sway_container*,struct wlr_box*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct sway_container *VAR_1) {
 if (VAR_0->reloading) {
  return;
 }
 if (VAR_1->view) {
  FUNC_3(VAR_1->view);
  FUNC_2(&VAR_1->node);
  return;
 }
 struct wlr_box VAR_2;
 FUNC_1(VAR_1, &VAR_2);
 FUNC_0(VAR_1->children, VAR_1->layout, &VAR_2);
 FUNC_2(&VAR_1->node);
}
