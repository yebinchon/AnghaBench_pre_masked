
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sway_workspace {int x; int width; int y; int height; struct sway_output* output; } ;
struct sway_view {struct sway_container* container; } ;
struct sway_output {double lx; double ly; double width; double height; } ;
struct sway_container {scalar_t__ fullscreen_mode; double content_x; double content_y; double content_width; double content_height; int border_top; int border_bottom; int border_left; int border_right; int x; int width; int y; int height; int border; int border_thickness; struct sway_workspace* workspace; } ;
struct TYPE_5__ {int length; } ;
typedef TYPE_1__ list_t ;
typedef enum sway_container_layout { ____Placeholder_sway_container_layout } sway_container_layout ;
struct TYPE_7__ {scalar_t__ hide_edge_borders_smart; scalar_t__ hide_edge_borders; int hide_lone_tab; } ;
struct TYPE_6__ {double x; double y; double width; double height; } ;






 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_4__* VAR_9 ;
 TYPE_1__* FUNC_0 (struct sway_container*) ;
 int FUNC_1 (struct sway_container*) ;
 scalar_t__ FUNC_2 (struct sway_container*) ;
 int FUNC_3 (struct sway_container*) ;
 double FUNC_4 () ;
 int FUNC_5 (struct sway_view*) ;
 TYPE_2__* VAR_10 ;
 scalar_t__ FUNC_6 (struct sway_view*) ;

void FUNC_7(struct sway_view *VAR_11) {
 struct sway_container *VAR_12 = VAR_11->container;
 struct sway_workspace *VAR_13 = VAR_12->workspace;

 if (FUNC_2(VAR_12) &&
   VAR_12->fullscreen_mode != VAR_5) {
  return;
 }
 struct sway_output *VAR_14 = VAR_13 ? VAR_13->output : ((void*)0);

 if (VAR_12->fullscreen_mode == VAR_6) {
  VAR_12->content_x = VAR_14->lx;
  VAR_12->content_y = VAR_14->ly;
  VAR_12->content_width = VAR_14->width;
  VAR_12->content_height = VAR_14->height;
  return;
 } else if (VAR_12->fullscreen_mode == VAR_5) {
  VAR_12->content_x = VAR_10->x;
  VAR_12->content_y = VAR_10->y;
  VAR_12->content_width = VAR_10->width;
  VAR_12->content_height = VAR_10->height;
  return;
 }

 VAR_12->border_top = VAR_12->border_bottom = 1;
 VAR_12->border_left = VAR_12->border_right = 1;
 double VAR_15 = 0;

 if (!FUNC_1(VAR_12) && VAR_13) {

  bool VAR_16 = VAR_9->hide_edge_borders_smart == VAR_1 ||
   (VAR_9->hide_edge_borders_smart == VAR_0 &&
   !FUNC_5(VAR_11));
  bool VAR_17 = VAR_16 && FUNC_6(VAR_11);

  if (VAR_9->hide_edge_borders == VAR_2
    || VAR_9->hide_edge_borders == VAR_4 || VAR_17) {
   VAR_12->border_left = VAR_12->x != VAR_13->x;
   int VAR_18 = VAR_12->x + VAR_12->width;
   VAR_12->border_right = VAR_18 != VAR_13->x + VAR_13->width;
  }
  if (VAR_9->hide_edge_borders == VAR_2
    || VAR_9->hide_edge_borders == VAR_3 || VAR_17) {
   VAR_12->border_top = VAR_12->y != VAR_13->y;
   int VAR_19 = VAR_12->y + VAR_12->height;
   VAR_12->border_bottom = VAR_19 != VAR_13->y + VAR_13->height;
  }




  list_t *VAR_20 = FUNC_0(VAR_12);
  bool VAR_21 = (VAR_20 && VAR_20->length > 1)
   || !VAR_9->hide_lone_tab;
  if (VAR_21) {
   enum sway_container_layout VAR_22 = FUNC_3(VAR_12);
   if (VAR_22 == VAR_8) {
    VAR_15 = FUNC_4();
    VAR_12->border_top = 0;
   } else if (VAR_22 == VAR_7) {
    VAR_15 = FUNC_4() * VAR_20->length;
    VAR_12->border_top = 0;
   }
  }
 }

 double VAR_23, VAR_24, VAR_25, VAR_26;
 switch (VAR_12->border) {
 default:
 case 131:
 case 130:
  VAR_23 = VAR_12->x;
  VAR_24 = VAR_12->y + VAR_15;
  VAR_25 = VAR_12->width;
  VAR_26 = VAR_12->height - VAR_15;
  break;
 case 128:
  VAR_23 = VAR_12->x + VAR_12->border_thickness * VAR_12->border_left;
  VAR_24 = VAR_12->y + VAR_12->border_thickness * VAR_12->border_top + VAR_15;
  VAR_25 = VAR_12->width
   - VAR_12->border_thickness * VAR_12->border_left
   - VAR_12->border_thickness * VAR_12->border_right;
  VAR_26 = VAR_12->height - VAR_15
   - VAR_12->border_thickness * VAR_12->border_top
   - VAR_12->border_thickness * VAR_12->border_bottom;
  break;
 case 129:

  VAR_23 = VAR_12->x + VAR_12->border_thickness * VAR_12->border_left;
  VAR_25 = VAR_12->width
   - VAR_12->border_thickness * VAR_12->border_left
   - VAR_12->border_thickness * VAR_12->border_right;
  if (VAR_15) {
   VAR_24 = VAR_12->y + VAR_15;
   VAR_26 = VAR_12->height - VAR_15
    - VAR_12->border_thickness * VAR_12->border_bottom;
  } else {
   VAR_24 = VAR_12->y + FUNC_4();
   VAR_26 = VAR_12->height - FUNC_4()
    - VAR_12->border_thickness * VAR_12->border_bottom;
  }
  break;
 }

 VAR_12->content_x = VAR_23;
 VAR_12->content_y = VAR_24;
 VAR_12->content_width = VAR_25;
 VAR_12->content_height = VAR_26;
}
