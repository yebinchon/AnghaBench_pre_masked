
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wlr_box {scalar_t__ width; scalar_t__ height; int x; int y; } ;
struct TYPE_4__ {double left; double top; } ;
struct sway_workspace {scalar_t__ width; scalar_t__ height; int x; int y; TYPE_3__* floating; int layout; int tiling; struct sway_container* fullscreen; int name; int node; TYPE_1__ current_gaps; struct sway_output* output; } ;
struct sway_output {int lx; int ly; int width; int height; struct wlr_box usable_area; } ;
struct sway_container {int x; int width; int y; int height; } ;
struct TYPE_6__ {int length; struct sway_container** items; } ;
struct TYPE_5__ {scalar_t__ reloading; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct wlr_box*) ;
 int FUNC_1 (struct sway_container*) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (struct sway_container*) ;
 int FUNC_4 (struct sway_container*,double,double) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,scalar_t__,double,double,...) ;
 int FUNC_7 (struct wlr_box*,double,double) ;
 int FUNC_8 (struct sway_workspace*) ;
 int FUNC_9 (struct sway_workspace*,struct wlr_box*) ;

void FUNC_10(struct sway_workspace *VAR_2) {
 if (VAR_1->reloading) {
  return;
 }
 if (!VAR_2->output) {

  return;
 }
 struct sway_output *VAR_3 = VAR_2->output;
 struct wlr_box *VAR_4 = &VAR_3->usable_area;
 FUNC_6(VAR_0, "Usable area for ws: %dx%d@%d,%d",
   VAR_4->width, VAR_4->height, VAR_4->x, VAR_4->y);

 bool VAR_5 = VAR_2->width == 0 && VAR_2->height == 0;
 double VAR_6 = VAR_2->x - VAR_2->current_gaps.left;
 double VAR_7 = VAR_2->y - VAR_2->current_gaps.top;
 VAR_2->width = VAR_4->width;
 VAR_2->height = VAR_4->height;
 VAR_2->x = VAR_3->lx + VAR_4->x;
 VAR_2->y = VAR_3->ly + VAR_4->y;


 double VAR_8 = VAR_2->x - VAR_6;
 double VAR_9 = VAR_2->y - VAR_7;
 if (!VAR_5 && (VAR_8 != 0 || VAR_9 != 0)) {
  for (int VAR_10 = 0; VAR_10 < VAR_2->floating->length; ++VAR_10) {
   struct sway_container *VAR_11 = VAR_2->floating->items[VAR_10];
   FUNC_4(VAR_11, VAR_8, VAR_9);
   double VAR_12 = VAR_11->x + VAR_11->width / 2;
   double VAR_13 = VAR_11->y + VAR_11->height / 2;
   struct wlr_box VAR_14;
   FUNC_9(VAR_2, &VAR_14);
   if (!FUNC_7(&VAR_14, VAR_12, VAR_13)) {
    FUNC_3(VAR_11);
   }
  }
 }

 FUNC_8(VAR_2);
 FUNC_5(&VAR_2->node);
 FUNC_6(VAR_0, "Arranging workspace '%s' at %f, %f", VAR_2->name,
   VAR_2->x, VAR_2->y);
 if (VAR_2->fullscreen) {
  struct sway_container *VAR_15 = VAR_2->fullscreen;
  VAR_15->x = VAR_3->lx;
  VAR_15->y = VAR_3->ly;
  VAR_15->width = VAR_3->width;
  VAR_15->height = VAR_3->height;
  FUNC_1(VAR_15);
 } else {
  struct wlr_box VAR_16;
  FUNC_9(VAR_2, &VAR_16);
  FUNC_0(VAR_2->tiling, VAR_2->layout, &VAR_16);
  FUNC_2(VAR_2->floating);
 }
}
