
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct obs_core_video {int texture_rendered; int texture_converted; scalar_t__ cur_texture; scalar_t__ gpu_encoder_active; int gpu_encoders; int gpu_encoder_mutex; int textures_copied; int vframe_info_buffer_gpu; int vframe_info_buffer; int * output_texture; int * render_texture; int *** copy_surfaces; int ** convert_textures; int ** mapped_surfaces; int graphics; int * video; } ;
struct TYPE_2__ {struct obs_core_video video; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(void)
{
 struct obs_core_video *VAR_3 = &VAR_2->video;

 if (VAR_3->video) {
  FUNC_10(VAR_3->video);
  VAR_3->video = ((void*)0);

  if (!VAR_3->graphics)
   return;

  FUNC_2(VAR_3->graphics);

  for (size_t VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   if (VAR_3->mapped_surfaces[VAR_4]) {
    FUNC_5(
     VAR_3->mapped_surfaces[VAR_4]);
    VAR_3->mapped_surfaces[VAR_4] = ((void*)0);
   }
  }

  for (size_t VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
   for (size_t VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
    if (VAR_3->copy_surfaces[VAR_5][VAR_6]) {
     FUNC_4(
      VAR_3->copy_surfaces[VAR_5][VAR_6]);
     VAR_3->copy_surfaces[VAR_5][VAR_6] = ((void*)0);
    }
   }
  }

  FUNC_6(VAR_3->render_texture);

  for (size_t VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
   if (VAR_3->convert_textures[VAR_7]) {
    FUNC_6(VAR_3->convert_textures[VAR_7]);
    VAR_3->convert_textures[VAR_7] = ((void*)0);
   }
  }

  for (size_t VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
   for (size_t VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
    if (VAR_3->copy_surfaces[VAR_8][VAR_9]) {
     FUNC_4(
      VAR_3->copy_surfaces[VAR_8][VAR_9]);
     VAR_3->copy_surfaces[VAR_8][VAR_9] = ((void*)0);
    }
   }
  }

  FUNC_6(VAR_3->output_texture);
  VAR_3->render_texture = ((void*)0);
  VAR_3->output_texture = ((void*)0);

  FUNC_3();

  FUNC_0(&VAR_3->vframe_info_buffer);
  FUNC_0(&VAR_3->vframe_info_buffer_gpu);

  VAR_3->texture_rendered = 0;
  ;
  FUNC_7(VAR_3->textures_copied, 0,
         sizeof(VAR_3->textures_copied));
  VAR_3->texture_converted = 0;
  ;

  FUNC_8(&VAR_3->gpu_encoder_mutex);
  FUNC_9(&VAR_3->gpu_encoder_mutex);
  FUNC_1(VAR_3->gpu_encoders);

  VAR_3->gpu_encoder_active = 0;
  VAR_3->cur_texture = 0;
 }
}
