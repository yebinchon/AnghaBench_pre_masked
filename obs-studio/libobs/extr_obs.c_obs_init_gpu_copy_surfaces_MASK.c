
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_output_info {int format; } ;
struct obs_video_info {int output_width; int output_height; } ;
struct obs_core_video {void*** copy_surfaces; int video; } ;
struct TYPE_2__ {struct obs_core_video video; } ;


 int VAR_0 ;
 int VAR_1 ;



 void* FUNC_0 (int,int,int ) ;
 TYPE_1__* VAR_2 ;
 struct video_output_info* FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct obs_video_info *VAR_3, size_t VAR_4)
{
 struct obs_core_video *VAR_5 = &VAR_2->video;

 VAR_5->copy_surfaces[VAR_4][0] = FUNC_0(
  VAR_3->output_width, VAR_3->output_height, VAR_0);
 if (!VAR_5->copy_surfaces[VAR_4][0])
  return 0;

 const struct video_output_info *VAR_6 =
  FUNC_1(VAR_5->video);
 switch (VAR_6->format) {
 case 130:
  VAR_5->copy_surfaces[VAR_4][1] = FUNC_0(
   VAR_3->output_width / 2, VAR_3->output_height / 2, VAR_0);
  if (!VAR_5->copy_surfaces[VAR_4][1])
   return 0;
  VAR_5->copy_surfaces[VAR_4][2] = FUNC_0(
   VAR_3->output_width / 2, VAR_3->output_height / 2, VAR_0);
  if (!VAR_5->copy_surfaces[VAR_4][2])
   return 0;
  break;
 case 128:
  VAR_5->copy_surfaces[VAR_4][1] = FUNC_0(
   VAR_3->output_width / 2, VAR_3->output_height / 2, VAR_1);
  if (!VAR_5->copy_surfaces[VAR_4][1])
   return 0;
  break;
 case 129:
  VAR_5->copy_surfaces[VAR_4][1] = FUNC_0(
   VAR_3->output_width, VAR_3->output_height, VAR_0);
  if (!VAR_5->copy_surfaces[VAR_4][1])
   return 0;
  VAR_5->copy_surfaces[VAR_4][2] = FUNC_0(
   VAR_3->output_width, VAR_3->output_height, VAR_0);
  if (!VAR_5->copy_surfaces[VAR_4][2])
   return 0;
  break;
 default:
  break;
 }

 return 1;
}
