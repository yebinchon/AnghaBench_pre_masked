
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl_list {int dummy; } ;
struct sway_output {int dummy; } ;
struct render_data {float alpha; int * damage; } ;
typedef int pixman_region32_t ;


 int FUNC_0 (struct sway_output*,struct wl_list*,int ,struct render_data*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct sway_output *VAR_1,
  pixman_region32_t *VAR_2, struct wl_list *VAR_3) {
 struct render_data VAR_4 = {
  .damage = VAR_2,
  .alpha = 1.0f,
 };
 FUNC_0(VAR_1, VAR_3,
  VAR_0, &VAR_4);
}
