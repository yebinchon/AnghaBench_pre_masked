
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wlr_box {scalar_t__ height; scalar_t__ width; scalar_t__ y; scalar_t__ x; } ;
struct sway_view {TYPE_1__* container; scalar_t__ surface; scalar_t__ saved_buffer; } ;
struct sway_output {TYPE_2__* wlr_output; } ;
struct sway_container_state {scalar_t__ border; scalar_t__ border_thickness; scalar_t__ width; scalar_t__ content_height; scalar_t__ content_y; scalar_t__ x; scalar_t__ border_bottom; scalar_t__ content_width; scalar_t__ content_x; scalar_t__ border_right; scalar_t__ border_left; } ;
struct sway_container {int alpha; struct sway_container_state current; struct sway_view* view; } ;
struct border_colors {int child_border; int indicator; } ;
typedef int pixman_region32_t ;
struct TYPE_7__ {int length; } ;
typedef TYPE_3__ list_t ;
typedef enum sway_container_layout { ____Placeholder_sway_container_layout } sway_container_layout ;
struct TYPE_6__ {float scale; } ;
struct TYPE_5__ {int alpha; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sway_container*) ;
 TYPE_3__* FUNC_1 (struct sway_container*) ;
 int FUNC_2 (float**,int ,int) ;
 int FUNC_3 (float*,int ) ;
 int FUNC_4 (struct sway_output*,int *,struct wlr_box*,float*) ;
 int FUNC_5 (struct sway_view*,struct sway_output*,int *,int ) ;
 int FUNC_6 (struct sway_view*,struct sway_output*,int *,int ) ;
 int FUNC_7 (struct wlr_box*,float) ;

__attribute__((used)) static void FUNC_8(struct sway_output *VAR_4, pixman_region32_t *VAR_5,
  struct sway_container *VAR_6, struct border_colors *VAR_7) {
 struct sway_view *VAR_8 = VAR_6->view;
 if (VAR_8->saved_buffer) {
  FUNC_5(VAR_8, VAR_4, VAR_5, VAR_8->container->alpha);
 } else if (VAR_8->surface) {
  FUNC_6(VAR_8, VAR_4, VAR_5, VAR_8->container->alpha);
 }

 if (VAR_6->current.border == VAR_1 || VAR_6->current.border == VAR_0) {
  return;
 }

 struct wlr_box VAR_9;
 float VAR_10 = VAR_4->wlr_output->scale;
 float VAR_11[4];
 struct sway_container_state *VAR_12 = &VAR_6->current;

 if (VAR_12->border_left) {
  FUNC_2(&VAR_11, VAR_7->child_border, sizeof(float) * 4);
  FUNC_3(VAR_11, VAR_6->alpha);
  VAR_9.x = VAR_12->x;
  VAR_9.y = VAR_12->content_y;
  VAR_9.width = VAR_12->border_thickness;
  VAR_9.height = VAR_12->content_height;
  FUNC_7(&VAR_9, VAR_10);
  FUNC_4(VAR_4, VAR_5, &VAR_9, VAR_11);
 }

 list_t *VAR_13 = FUNC_1(VAR_6);
 enum sway_container_layout VAR_14 =
  FUNC_0(VAR_6);

 if (VAR_12->border_right) {
  if (VAR_13->length == 1 && VAR_14 == VAR_2) {
   FUNC_2(&VAR_11, VAR_7->indicator, sizeof(float) * 4);
  } else {
   FUNC_2(&VAR_11, VAR_7->child_border, sizeof(float) * 4);
  }
  FUNC_3(VAR_11, VAR_6->alpha);
  VAR_9.x = VAR_12->content_x + VAR_12->content_width;
  VAR_9.y = VAR_12->content_y;
  VAR_9.width = VAR_12->border_thickness;
  VAR_9.height = VAR_12->content_height;
  FUNC_7(&VAR_9, VAR_10);
  FUNC_4(VAR_4, VAR_5, &VAR_9, VAR_11);
 }

 if (VAR_12->border_bottom) {
  if (VAR_13->length == 1 && VAR_14 == VAR_3) {
   FUNC_2(&VAR_11, VAR_7->indicator, sizeof(float) * 4);
  } else {
   FUNC_2(&VAR_11, VAR_7->child_border, sizeof(float) * 4);
  }
  FUNC_3(VAR_11, VAR_6->alpha);
  VAR_9.x = VAR_12->x;
  VAR_9.y = VAR_12->content_y + VAR_12->content_height;
  VAR_9.width = VAR_12->width;
  VAR_9.height = VAR_12->border_thickness;
  FUNC_7(&VAR_9, VAR_10);
  FUNC_4(VAR_4, VAR_5, &VAR_9, VAR_11);
 }
}
