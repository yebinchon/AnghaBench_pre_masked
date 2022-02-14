
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlr_texture {int dummy; } ;
struct TYPE_3__ {int transform; } ;
struct wlr_surface {TYPE_1__ current; } ;
struct wlr_output {int transform_matrix; int scale; } ;
struct wlr_box {int dummy; } ;
struct sway_output {struct wlr_output* wlr_output; } ;
struct render_data {float alpha; int * damage; } ;
typedef int pixman_region32_t ;
typedef enum wl_output_transform { ____Placeholder_wl_output_transform } wl_output_transform ;
struct TYPE_4__ {int presentation; } ;


 int FUNC_0 (struct wlr_output*,int *,struct wlr_texture*,struct wlr_box*,float*,float) ;
 int FUNC_1 (struct wlr_box*,int ) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (float*,struct wlr_box*,int,float,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct wlr_surface*) ;
 struct wlr_texture* FUNC_5 (struct wlr_surface*) ;

__attribute__((used)) static void FUNC_6(struct sway_output *VAR_1,
  struct wlr_surface *VAR_2, struct wlr_box *VAR_3, float VAR_4,
  void *VAR_5) {
 struct render_data *VAR_6 = VAR_5;
 struct wlr_output *VAR_7 = VAR_1->wlr_output;
 pixman_region32_t *VAR_8 = VAR_6->damage;
 float VAR_9 = VAR_6->alpha;

 struct wlr_texture *VAR_10 = FUNC_5(VAR_2);
 if (!VAR_10) {
  return;
 }

 struct wlr_box VAR_11 = *VAR_3;
 FUNC_1(&VAR_11, VAR_7->scale);

 float VAR_12[9];
 enum wl_output_transform VAR_13 =
  FUNC_3(VAR_2->current.transform);
 FUNC_2(VAR_12, &VAR_11, VAR_13, VAR_4,
  VAR_7->transform_matrix);

 FUNC_0(VAR_7, VAR_8, VAR_10, &VAR_11, VAR_12, VAR_9);

 FUNC_4(VAR_0.presentation, VAR_2);
}
