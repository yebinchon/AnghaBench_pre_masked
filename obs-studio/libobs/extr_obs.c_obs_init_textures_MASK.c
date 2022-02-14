
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct obs_video_info {int output_height; int output_width; int base_height; int base_width; } ;
struct obs_core_video {void* output_texture; void* render_texture; scalar_t__** copy_surfaces; scalar_t__ gpu_conversion; scalar_t__ using_nv12_tex; } ;
struct TYPE_2__ {struct obs_core_video video; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 void* FUNC_2 (int ,int ,int ,int,int *,int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (struct obs_video_info*,size_t) ;

__attribute__((used)) static bool FUNC_4(struct obs_video_info *VAR_4)
{
 struct obs_core_video *VAR_5 = &VAR_3->video;

 for (size_t VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
   if (VAR_5->gpu_conversion) {
    if (!FUNC_3(VAR_4, VAR_6))
     return 0;
   } else {
    VAR_5->copy_surfaces[VAR_6][0] =
     FUNC_0(
      VAR_4->output_width,
      VAR_4->output_height, VAR_1);
    if (!VAR_5->copy_surfaces[VAR_6][0])
     return 0;
   }



 }

 VAR_5->render_texture = FUNC_2(VAR_4->base_width,
        VAR_4->base_height, VAR_1, 1,
        ((void*)0), VAR_0);

 if (!VAR_5->render_texture)
  return 0;

 VAR_5->output_texture = FUNC_2(VAR_4->output_width,
        VAR_4->output_height, VAR_1,
        1, ((void*)0), VAR_0);

 if (!VAR_5->output_texture)
  return 0;

 return 1;
}
