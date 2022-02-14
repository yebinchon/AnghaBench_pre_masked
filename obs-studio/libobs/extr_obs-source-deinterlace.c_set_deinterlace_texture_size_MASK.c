
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int async_channel_count; int* async_texture_formats; int async_height; int async_width; void** async_prev_textures; int async_format; int * async_convert_height; int * async_convert_width; int async_prev_texrender; scalar_t__ async_gpu_conversion; } ;
typedef TYPE_1__ obs_source_t ;
typedef enum gs_color_format { ____Placeholder_gs_color_format } gs_color_format ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 void* FUNC_2 (int ,int ,int,int,int *,int ) ;

void FUNC_3(obs_source_t *VAR_3)
{
 if (VAR_3->async_gpu_conversion) {
  VAR_3->async_prev_texrender =
   FUNC_1(VAR_0, VAR_2);

  for (int VAR_4 = 0; VAR_4 < VAR_3->async_channel_count; VAR_4++)
   VAR_3->async_prev_textures[VAR_4] = FUNC_2(
    VAR_3->async_convert_width[VAR_4],
    VAR_3->async_convert_height[VAR_4],
    VAR_3->async_texture_formats[VAR_4], 1, ((void*)0),
    VAR_1);

 } else {
  enum gs_color_format VAR_5 =
   FUNC_0(VAR_3->async_format);

  VAR_3->async_prev_textures[0] = FUNC_2(
   VAR_3->async_width, VAR_3->async_height, VAR_5, 1,
   ((void*)0), VAR_1);
 }
}
