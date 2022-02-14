
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wlr_output {int transform_matrix; int scale; } ;
struct wlr_box {int height; int width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_5__ {scalar_t__ y; scalar_t__ x; } ;
struct sway_view {TYPE_3__* saved_buffer; int saved_buffer_height; int saved_buffer_width; TYPE_2__ saved_geometry; TYPE_1__* container; } ;
struct sway_output {int height; int width; scalar_t__ ly; scalar_t__ lx; struct wlr_output* wlr_output; } ;
typedef int pixman_region32_t ;
struct TYPE_6__ {int texture; } ;
struct TYPE_4__ {scalar_t__ surface_y; scalar_t__ surface_x; } ;


 int VAR_0 ;
 int FUNC_0 (struct wlr_output*,int *,int ,struct wlr_box*,float*,float) ;
 int FUNC_1 (struct wlr_box*,int ) ;
 int FUNC_2 (struct wlr_box*,struct wlr_box*,struct wlr_box*) ;
 int FUNC_3 (float*,struct wlr_box*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct sway_view *VAR_1,
  struct sway_output *VAR_2, pixman_region32_t *VAR_3, float VAR_4) {
 struct wlr_output *VAR_5 = VAR_2->wlr_output;

 if (!VAR_1->saved_buffer || !VAR_1->saved_buffer->texture) {
  return;
 }
 struct wlr_box VAR_6 = {
  .x = VAR_1->container->surface_x - VAR_2->lx -
   VAR_1->saved_geometry.x,
  .y = VAR_1->container->surface_y - VAR_2->ly -
   VAR_1->saved_geometry.y,
  .width = VAR_1->saved_buffer_width,
  .height = VAR_1->saved_buffer_height,
 };

 struct wlr_box VAR_7 = {
  .width = VAR_2->width,
  .height = VAR_2->height,
 };

 struct wlr_box VAR_8;
 bool VAR_9 = FUNC_2(&VAR_8, &VAR_7, &VAR_6);
 if (!VAR_9) {
  return;
 }

 FUNC_1(&VAR_6, VAR_5->scale);

 float VAR_10[9];
 FUNC_3(VAR_10, &VAR_6, VAR_0, 0,
  VAR_5->transform_matrix);

 FUNC_0(VAR_5, VAR_3, VAR_1->saved_buffer->texture,
   &VAR_6, VAR_10, VAR_4);




}
