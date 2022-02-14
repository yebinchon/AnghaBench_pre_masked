
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wlr_box {int dummy; } ;
struct sway_workspace {scalar_t__ fullscreen; } ;
struct sway_seat {int dummy; } ;
struct sway_container {int x; int width; int y; int height; int node; struct sway_workspace* workspace; } ;
struct TYPE_2__ {scalar_t__ fullscreen_global; } ;


 int VAR_0 ;
 int FUNC_0 (struct sway_workspace*) ;
 int FUNC_1 (struct sway_container*) ;
 int FUNC_2 (struct sway_container*) ;
 int FUNC_3 (scalar_t__) ;
 struct sway_seat* FUNC_4 () ;
 TYPE_1__* VAR_1 ;
 int FUNC_5 (struct sway_seat*,int *) ;
 struct sway_workspace* FUNC_6 (struct sway_seat*) ;
 int FUNC_7 (struct sway_seat*,int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (struct wlr_box*,double,double) ;
 int FUNC_10 (struct sway_workspace*,struct sway_container*) ;
 int FUNC_11 (struct sway_workspace*,struct wlr_box*) ;

void FUNC_12(struct sway_container *VAR_2) {
 struct sway_seat *VAR_3 = FUNC_4();
 struct sway_workspace *VAR_4 = FUNC_6(VAR_3);
 if (!VAR_4) {
  FUNC_8(VAR_0, "No focused workspace to show scratchpad on");
  return;
 }
 struct sway_workspace *VAR_5 = VAR_2->workspace;



 if (VAR_4->fullscreen) {
  FUNC_3(VAR_4->fullscreen);
 }
 if (VAR_1->fullscreen_global) {
  FUNC_3(VAR_1->fullscreen_global);
 }


 if (VAR_5) {
  FUNC_1(VAR_2);
 }
 FUNC_10(VAR_4, VAR_2);


 double VAR_6 = VAR_2->x + VAR_2->width / 2;
 double VAR_7 = VAR_2->y + VAR_2->height / 2;

 struct wlr_box VAR_8;
 FUNC_11(VAR_4, &VAR_8);
 if (!FUNC_9(&VAR_8, VAR_6, VAR_7)) {
  FUNC_2(VAR_2);
 }

 FUNC_0(VAR_4);
 FUNC_7(VAR_3, FUNC_5(VAR_3, &VAR_2->node));
}
