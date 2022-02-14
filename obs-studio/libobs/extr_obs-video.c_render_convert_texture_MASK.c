
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec4 {int dummy; } ;
struct obs_core_video {int texture_converted; int * conversion_techs; int * convert_textures; int conversion_width_i; int * color_matrix; int * conversion_effect; } ;
typedef int gs_texture_t ;
typedef int gs_eparam_t ;
typedef int gs_effect_t ;


 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,struct vec4*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int ) ;
 int VAR_0 ;
 int FUNC_8 (struct vec4*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct obs_core_video *VAR_1,
       gs_texture_t *VAR_2)
{
 FUNC_6(VAR_0);

 gs_effect_t *VAR_3 = VAR_1->conversion_effect;
 gs_eparam_t *VAR_4 =
  FUNC_0(VAR_3, "color_vec0");
 gs_eparam_t *VAR_5 =
  FUNC_0(VAR_3, "color_vec1");
 gs_eparam_t *VAR_6 =
  FUNC_0(VAR_3, "color_vec2");
 gs_eparam_t *VAR_7 = FUNC_0(VAR_3, "image");
 gs_eparam_t *VAR_8 = FUNC_0(VAR_3, "width_i");

 struct vec4 VAR_9, VAR_10, VAR_11;
 FUNC_8(&VAR_9, VAR_1->color_matrix[4], VAR_1->color_matrix[5],
   VAR_1->color_matrix[6], VAR_1->color_matrix[7]);
 FUNC_8(&VAR_10, VAR_1->color_matrix[0], VAR_1->color_matrix[1],
   VAR_1->color_matrix[2], VAR_1->color_matrix[3]);
 FUNC_8(&VAR_11, VAR_1->color_matrix[8], VAR_1->color_matrix[9],
   VAR_1->color_matrix[10], VAR_1->color_matrix[11]);

 FUNC_4(0);

 if (VAR_1->convert_textures[0]) {
  FUNC_2(VAR_7, VAR_2);
  FUNC_3(VAR_4, &VAR_9);
  FUNC_7(VAR_3, VAR_1->convert_textures[0],
         VAR_1->conversion_techs[0]);

  if (VAR_1->convert_textures[1]) {
   FUNC_2(VAR_7, VAR_2);
   FUNC_3(VAR_5, &VAR_10);
   if (!VAR_1->convert_textures[2])
    FUNC_3(VAR_6, &VAR_11);
   FUNC_1(VAR_8, VAR_1->conversion_width_i);
   FUNC_7(VAR_3, VAR_1->convert_textures[1],
          VAR_1->conversion_techs[1]);

   if (VAR_1->convert_textures[2]) {
    FUNC_2(VAR_7, VAR_2);
    FUNC_3(VAR_6, &VAR_11);
    FUNC_1(VAR_8,
          VAR_1->conversion_width_i);
    FUNC_7(
     VAR_3, VAR_1->convert_textures[2],
     VAR_1->conversion_techs[2]);
   }
  }
 }

 FUNC_4(1);

 VAR_1->texture_converted = 1;

 FUNC_5(VAR_0);
}
