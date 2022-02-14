
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wlr_box {double width; double height; int member_3; int member_2; int member_1; int member_0; } ;
struct sway_node {int dummy; } ;
struct TYPE_2__ {int border_thickness; int border; } ;
struct sway_container {char* title; int is_sticky; scalar_t__ view; TYPE_1__ current; scalar_t__ height; scalar_t__ width; int node; int fullscreen_mode; int layout; } ;
typedef int json_object ;


 int FUNC_0 (struct sway_container*) ;
 scalar_t__ FUNC_1 (struct sway_container*) ;
 int FUNC_2 (struct sway_container*,struct wlr_box*) ;
 char* FUNC_3 (int ) ;
 int * FUNC_4 (struct wlr_box*) ;
 int FUNC_5 (struct sway_container*,int *) ;
 char* FUNC_6 (int ) ;
 char* FUNC_7 (int ) ;
 int * FUNC_8 () ;
 int * FUNC_9 (int) ;
 int * FUNC_10 (double) ;
 int * FUNC_11 (int ) ;
 int * FUNC_12 (char*) ;
 int FUNC_13 (int *,char*,int *) ;
 int FUNC_14 (struct sway_node*,struct wlr_box*) ;
 struct sway_node* FUNC_15 (int *) ;
 int FUNC_16 (scalar_t__) ;

__attribute__((used)) static void FUNC_17(struct sway_container *VAR_0, json_object *VAR_1) {
 FUNC_13(VAR_1, "name",
   VAR_0->title ? FUNC_12(VAR_0->title) : ((void*)0));
 FUNC_13(VAR_1, "type",
   FUNC_12(FUNC_1(VAR_0) ? "floating_con" : "con"));

 FUNC_13(VAR_1, "layout",
   FUNC_12(
    FUNC_6(VAR_0->layout)));

 FUNC_13(VAR_1, "orientation",
   FUNC_12(
    FUNC_7(VAR_0->layout)));

 bool VAR_2 = VAR_0->view ?
  FUNC_16(VAR_0->view) : FUNC_0(VAR_0);
 FUNC_13(VAR_1, "urgent", FUNC_9(VAR_2));
 FUNC_13(VAR_1, "sticky", FUNC_9(VAR_0->is_sticky));

 FUNC_13(VAR_1, "fullscreen_mode",
   FUNC_11(VAR_0->fullscreen_mode));

 struct sway_node *VAR_3 = FUNC_15(&VAR_0->node);
 struct wlr_box VAR_4 = {0, 0, 0, 0};

 if (VAR_3 != ((void*)0)) {
  FUNC_14(VAR_3, &VAR_4);
 }

 if (VAR_4.width != 0 && VAR_4.height != 0) {
  double VAR_5 = ((double)VAR_0->width / VAR_4.width)
    * ((double)VAR_0->height / VAR_4.height);
  FUNC_13(VAR_1, "percent", FUNC_10(VAR_5));
 }

 FUNC_13(VAR_1, "border",
   FUNC_12(
    FUNC_3(VAR_0->current.border)));
 FUNC_13(VAR_1, "current_border_width",
   FUNC_11(VAR_0->current.border_thickness));
 FUNC_13(VAR_1, "floating_nodes", FUNC_8());

 struct wlr_box VAR_6 = {0, 0, 0, 0};
 FUNC_2(VAR_0, &VAR_6);
 FUNC_13(VAR_1, "deco_rect", FUNC_4(&VAR_6));

 if (VAR_0->view) {
  FUNC_5(VAR_0, VAR_1);
 }
}
