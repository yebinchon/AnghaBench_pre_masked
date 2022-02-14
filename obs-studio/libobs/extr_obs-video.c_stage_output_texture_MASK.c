
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_core_video {int* textures_copied; int * convert_textures; int *** copy_surfaces; scalar_t__ texture_converted; int output_texture; int gpu_conversion; } ;
typedef int gs_stagesurf_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct obs_core_video*) ;

__attribute__((used)) static inline void FUNC_4(struct obs_core_video *VAR_2,
     int VAR_3)
{
 FUNC_2(VAR_1);

 FUNC_3(VAR_2);

 if (!VAR_2->gpu_conversion) {
  gs_stagesurf_t *VAR_4 = VAR_2->copy_surfaces[VAR_3][0];
  if (VAR_4)
   FUNC_0(VAR_4, VAR_2->output_texture);

  VAR_2->textures_copied[VAR_3] = 1;
 } else if (VAR_2->texture_converted) {
  for (int VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   gs_stagesurf_t *VAR_6 =
    VAR_2->copy_surfaces[VAR_3][VAR_5];
   if (VAR_6)
    FUNC_0(VAR_6,
       VAR_2->convert_textures[VAR_5]);
  }

  VAR_2->textures_copied[VAR_3] = 1;
 }

 FUNC_1(VAR_1);
}
