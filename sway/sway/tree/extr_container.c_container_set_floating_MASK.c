
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_workspace {int height; int width; } ;
struct sway_seat {int dummy; } ;
struct sway_container {scalar_t__ height_fraction; scalar_t__ width_fraction; int saved_border; int border; TYPE_1__* view; int height; int width; scalar_t__ scratchpad; struct sway_container* parent; struct sway_workspace* workspace; } ;
struct TYPE_2__ {scalar_t__ using_csd; } ;


 int VAR_0 ;
 int FUNC_0 (struct sway_container*,struct sway_container*,int) ;
 int FUNC_1 (struct sway_container*) ;
 int FUNC_2 (struct sway_container*) ;
 int FUNC_3 (struct sway_container*) ;
 int FUNC_4 (struct sway_container*) ;
 int FUNC_5 (struct sway_container*) ;
 int FUNC_6 (struct sway_container*) ;
 struct sway_seat* FUNC_7 () ;
 int FUNC_8 (struct sway_container*,char*) ;
 int FUNC_9 (struct sway_container*) ;
 struct sway_container* FUNC_10 (struct sway_seat*,struct sway_workspace*) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (struct sway_workspace*,struct sway_container*) ;
 int FUNC_13 (struct sway_workspace*,struct sway_container*) ;

void FUNC_14(struct sway_container *VAR_1, bool VAR_2) {
 if (FUNC_5(VAR_1) == VAR_2) {
  return;
 }

 struct sway_seat *VAR_3 = FUNC_7();
 struct sway_workspace *VAR_4 = VAR_1->workspace;

 if (VAR_2) {
  struct sway_container *VAR_5 = VAR_1->parent;
  FUNC_1(VAR_1);
  FUNC_12(VAR_4, VAR_1);
  if (VAR_1->view) {
   FUNC_11(VAR_1->view, 0);
   if (VAR_1->view->using_csd) {
    VAR_1->border = VAR_0;
   }
  }
  FUNC_4(VAR_1);
  FUNC_3(VAR_1);
  if (VAR_5) {
   FUNC_6(VAR_5);
  }
 } else {

  if (VAR_1->scratchpad) {
   FUNC_9(VAR_1);
  }
  FUNC_1(VAR_1);
  struct sway_container *VAR_6 =
   FUNC_10(VAR_3, VAR_4);
  if (VAR_6) {
   FUNC_0(VAR_6, VAR_1, 1);
   VAR_1->width = VAR_6->width;
   VAR_1->height = VAR_6->height;
  } else {
   FUNC_13(VAR_4, VAR_1);
   VAR_1->width = VAR_4->width;
   VAR_1->height = VAR_4->height;
  }
  if (VAR_1->view) {
   FUNC_11(VAR_1->view, 1);
   if (VAR_1->view->using_csd) {
    VAR_1->border = VAR_1->saved_border;
   }
  }
  VAR_1->width_fraction = 0;
  VAR_1->height_fraction = 0;
 }

 FUNC_2(VAR_1);

 FUNC_8(VAR_1, "floating");
}
