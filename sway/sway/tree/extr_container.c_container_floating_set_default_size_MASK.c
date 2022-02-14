
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_box {double width; double height; } ;
struct sway_container {double width; double height; double content_width; double content_height; int view; int workspace; } ;


 struct wlr_box* FUNC_0 (int,int) ;
 int FUNC_1 (struct sway_container*) ;
 int FUNC_2 (int*,int*,int*,int*) ;
 double FUNC_3 (int,int ) ;
 int FUNC_4 (double,int) ;
 int FUNC_5 (struct wlr_box*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,struct wlr_box*) ;

void FUNC_8(struct sway_container *VAR_0) {
 if (!FUNC_6(VAR_0->workspace, "Expected a container on a workspace")) {
  return;
 }

 int VAR_1, VAR_2, VAR_3, VAR_4;
 FUNC_2(&VAR_1, &VAR_2,
   &VAR_3, &VAR_4);
 struct wlr_box *VAR_5 = FUNC_0(1, sizeof(struct wlr_box));
 FUNC_7(VAR_0->workspace, VAR_5);

 double VAR_6 = FUNC_3(VAR_1, FUNC_4(VAR_5->width * 0.5, VAR_2));
 double VAR_7 = FUNC_3(VAR_3, FUNC_4(VAR_5->height * 0.75, VAR_4));
 if (!VAR_0->view) {
  VAR_0->width = VAR_6;
  VAR_0->height = VAR_7;
 } else {
  VAR_0->content_width = VAR_6;
  VAR_0->content_height = VAR_7;
  FUNC_1(VAR_0);
 }

 FUNC_5(VAR_5);
}
