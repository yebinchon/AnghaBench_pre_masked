
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_box {int dummy; } ;
struct sway_node {int type; int sway_container; int sway_workspace; int sway_output; } ;






 int FUNC_0 (int ,struct wlr_box*) ;
 int FUNC_1 (int ,struct wlr_box*) ;
 int VAR_0 ;
 int FUNC_2 (int ,struct wlr_box*) ;
 int FUNC_3 (int ,struct wlr_box*) ;

void FUNC_4(struct sway_node *VAR_1, struct wlr_box *VAR_2) {
 switch (VAR_1->type) {
 case 129:
  FUNC_2(VAR_0, VAR_2);
  break;
 case 130:
  FUNC_1(VAR_1->sway_output, VAR_2);
  break;
 case 128:
  FUNC_3(VAR_1->sway_workspace, VAR_2);
  break;
 case 131:
  FUNC_0(VAR_1->sway_container, VAR_2);
  break;
 }
}
