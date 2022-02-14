
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_output_info {int format; } ;
struct obs_video_info {scalar_t__ output_format; int output_width; int output_height; } ;
struct obs_core_video {int using_nv12_tex; int gpu_conversion; void** convert_textures; int video; int conversion_needed; } ;
struct TYPE_2__ {struct obs_core_video video; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct obs_video_info*) ;
 int FUNC_2 () ;
 void* FUNC_3 (int,int,int ,int,int *,int) ;
 int FUNC_4 (void**,void**,int,int,int) ;
 TYPE_1__* VAR_5 ;
 struct video_output_info* FUNC_5 (int ) ;

__attribute__((used)) static bool FUNC_6(struct obs_video_info *VAR_6)
{
 struct obs_core_video *VAR_7 = &VAR_5->video;

 FUNC_1(VAR_6);

 VAR_7->using_nv12_tex = VAR_6->output_format == 128
     ? FUNC_2()
     : 0;

 if (!VAR_7->conversion_needed) {
  FUNC_0(VAR_4, "GPU conversion not available for format: %u",
       (unsigned int)VAR_6->output_format);
  VAR_7->gpu_conversion = 0;
  VAR_7->using_nv12_tex = 0;
  FUNC_0(VAR_4, "NV12 texture support not available");
  return 1;
 }

 if (VAR_7->using_nv12_tex)
  FUNC_0(VAR_4, "NV12 texture support enabled");
 else
  FUNC_0(VAR_4, "NV12 texture support not available");
  VAR_7->convert_textures[0] =
   FUNC_3(VAR_6->output_width, VAR_6->output_height,
       VAR_0, 1, ((void*)0), VAR_2);

  const struct video_output_info *VAR_8 =
   FUNC_5(VAR_7->video);
  switch (VAR_8->format) {
  case 130:
   VAR_7->convert_textures[1] = FUNC_3(
    VAR_6->output_width / 2, VAR_6->output_height / 2,
    VAR_0, 1, ((void*)0), VAR_2);
   VAR_7->convert_textures[2] = FUNC_3(
    VAR_6->output_width / 2, VAR_6->output_height / 2,
    VAR_0, 1, ((void*)0), VAR_2);
   if (!VAR_7->convert_textures[2])
    return 0;
   break;
  case 128:
   VAR_7->convert_textures[1] = FUNC_3(
    VAR_6->output_width / 2, VAR_6->output_height / 2,
    VAR_1, 1, ((void*)0), VAR_2);
   break;
  case 129:
   VAR_7->convert_textures[1] = FUNC_3(
    VAR_6->output_width, VAR_6->output_height, VAR_0, 1,
    ((void*)0), VAR_2);
   VAR_7->convert_textures[2] = FUNC_3(
    VAR_6->output_width, VAR_6->output_height, VAR_0, 1,
    ((void*)0), VAR_2);
   if (!VAR_7->convert_textures[2])
    return 0;
   break;
  default:
   break;
  }




 if (!VAR_7->convert_textures[0])
  return 0;
 if (!VAR_7->convert_textures[1])
  return 0;

 return 1;
}
