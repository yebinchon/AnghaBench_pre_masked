
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {int dummy; } ;
struct matrix4 {int dummy; } ;
typedef int gs_eparam_t ;
typedef int gs_effect_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,struct matrix4 const*) ;
 int FUNC_3 (int *,struct vec3 const*,int) ;
 int * FUNC_4 () ;
 int FUNC_5 (struct matrix4 const*,char*) ;
 int FUNC_6 (struct vec3*,float,float,float) ;

void FUNC_7(const struct matrix4 *VAR_1,
          const struct vec3 *VAR_2,
          const struct vec3 *VAR_3)
{
 struct vec3 VAR_4;
 struct vec3 VAR_5;

 FUNC_6(&VAR_4, 0.0f, 0.0f, 0.0f);
 FUNC_6(&VAR_5, 1.0f, 1.0f, 1.0f);

 gs_effect_t *VAR_6 = FUNC_4();
 gs_eparam_t *VAR_7;
 gs_eparam_t *VAR_8;
 gs_eparam_t *VAR_9;

 if (!VAR_6) {
  FUNC_0(VAR_0, "obs_source_draw_set_color_matrix: no "
      "active effect!");
  return;
 }

 if (!FUNC_5(VAR_1, "obs_source_draw_set_color_matrix"))
  return;

 if (!VAR_2)
  VAR_2 = &VAR_4;
 if (!VAR_3)
  VAR_3 = &VAR_5;

 VAR_7 = FUNC_1(VAR_6, "color_matrix");
 VAR_8 = FUNC_1(VAR_6, "color_range_min");
 VAR_9 = FUNC_1(VAR_6, "color_range_max");

 FUNC_2(VAR_7, VAR_1);
 FUNC_3(VAR_8, VAR_2, sizeof(float) * 3);
 FUNC_3(VAR_9, VAR_3, sizeof(float) * 3);
}
