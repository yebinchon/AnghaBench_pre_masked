
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wlr_box {int height; int width; int y; int x; } ;
struct sway_output {TYPE_1__* wlr_output; } ;
struct sway_container_state {int border_thickness; int width; int y; int x; int border_top; } ;
struct sway_container {int alpha; struct sway_container_state current; } ;
struct border_colors {int child_border; } ;
typedef int pixman_region32_t ;
struct TYPE_2__ {float scale; } ;


 int FUNC_0 (float**,int ,int) ;
 int FUNC_1 (float*,int ) ;
 int FUNC_2 (struct sway_output*,int *,struct wlr_box*,float*) ;
 int FUNC_3 (struct wlr_box*,float) ;

__attribute__((used)) static void FUNC_4(struct sway_output *VAR_0,
  pixman_region32_t *VAR_1, struct sway_container *VAR_2,
  struct border_colors *VAR_3) {
 struct sway_container_state *VAR_4 = &VAR_2->current;
 if (!VAR_4->border_top) {
  return;
 }
 struct wlr_box VAR_5;
 float VAR_6[4];
 float VAR_7 = VAR_0->wlr_output->scale;


 FUNC_0(&VAR_6, VAR_3->child_border, sizeof(float) * 4);
 FUNC_1(VAR_6, VAR_2->alpha);
 VAR_5.x = VAR_4->x;
 VAR_5.y = VAR_4->y;
 VAR_5.width = VAR_4->width;
 VAR_5.height = VAR_4->border_thickness;
 FUNC_3(&VAR_5, VAR_7);
 FUNC_2(VAR_0, VAR_1, &VAR_5, VAR_6);
}
