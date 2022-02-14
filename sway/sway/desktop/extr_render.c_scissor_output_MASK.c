
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wlr_renderer {int dummy; } ;
struct wlr_output {int transform; int backend; } ;
struct wlr_box {scalar_t__ height; scalar_t__ width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_3__ {scalar_t__ y1; scalar_t__ y2; scalar_t__ x1; scalar_t__ x2; } ;
typedef TYPE_1__ pixman_box32_t ;
typedef enum wl_output_transform { ____Placeholder_wl_output_transform } wl_output_transform ;


 int FUNC_0 (struct wlr_renderer*) ;
 struct wlr_renderer* FUNC_1 (int ) ;
 int FUNC_2 (struct wlr_box*,struct wlr_box*,int,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct wlr_output*,int*,int*) ;
 int FUNC_5 (struct wlr_renderer*,struct wlr_box*) ;

__attribute__((used)) static void FUNC_6(struct wlr_output *VAR_0,
  pixman_box32_t *VAR_1) {
 struct wlr_renderer *VAR_2 = FUNC_1(VAR_0->backend);
 FUNC_0(VAR_2);

 struct wlr_box VAR_3 = {
  .x = VAR_1->x1,
  .y = VAR_1->y1,
  .width = VAR_1->x2 - VAR_1->x1,
  .height = VAR_1->y2 - VAR_1->y1,
 };

 int VAR_4, VAR_5;
 FUNC_4(VAR_0, &VAR_4, &VAR_5);

 enum wl_output_transform VAR_6 =
  FUNC_3(VAR_0->transform);
 FUNC_2(&VAR_3, &VAR_3, VAR_6, VAR_4, VAR_5);

 FUNC_5(VAR_2, &VAR_3);
}
