
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct video_scale_info {int dummy; } ;
struct TYPE_4__ {int video_conversion_set; struct video_scale_info video_conversion; } ;
typedef TYPE_1__ obs_output_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (struct video_scale_info const*,char*) ;

void FUNC_2(obs_output_t *VAR_0,
         const struct video_scale_info *VAR_1)
{
 if (!FUNC_0(VAR_0, "obs_output_set_video_conversion"))
  return;
 if (!FUNC_1(VAR_1, "obs_output_set_video_conversion"))
  return;

 VAR_0->video_conversion = *VAR_1;
 VAR_0->video_conversion_set = 1;
}
