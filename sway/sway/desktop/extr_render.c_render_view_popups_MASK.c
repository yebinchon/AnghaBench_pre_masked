
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_view {int dummy; } ;
struct sway_output {int dummy; } ;
struct render_data {float alpha; int * damage; } ;
typedef int pixman_region32_t ;


 int FUNC_0 (struct sway_output*,struct sway_view*,int ,struct render_data*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct sway_view *VAR_1,
  struct sway_output *VAR_2, pixman_region32_t *VAR_3, float VAR_4) {
 struct render_data VAR_5 = {
  .damage = VAR_3,
  .alpha = VAR_4,
 };
 FUNC_0(VAR_2, VAR_1, VAR_0, &VAR_5);
}
