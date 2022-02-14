
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_surface {int dummy; } ;
struct sway_seat {int has_focus; } ;
struct sway_node {int dummy; } ;


 struct sway_node* FUNC_0 (struct sway_seat*) ;
 int FUNC_1 (struct sway_seat*,struct wlr_surface*) ;
 int FUNC_2 (struct sway_node*,struct sway_seat*) ;
 int FUNC_3 (struct sway_seat*,struct wlr_surface*) ;

void FUNC_4(struct sway_seat *VAR_0,
  struct wlr_surface *VAR_1, bool VAR_2) {
 if (VAR_0->has_focus && VAR_2) {
  struct sway_node *VAR_3 = FUNC_0(VAR_0);
  FUNC_2(VAR_3, VAR_0);
  VAR_0->has_focus = 0;
 }
 FUNC_1(VAR_0, VAR_1);
 FUNC_3(VAR_0, VAR_1);
}
