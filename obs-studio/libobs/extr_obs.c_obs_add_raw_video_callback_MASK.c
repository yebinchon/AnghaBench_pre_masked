
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_scale_info {int dummy; } ;
struct obs_core_video {int video; } ;
struct TYPE_2__ {struct obs_core_video video; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,struct video_scale_info const*,void (*) (void*,struct video_data*),void*) ;

void FUNC_1(const struct video_scale_info *VAR_1,
    void (*VAR_2)(void *VAR_3,
       struct video_data *VAR_4),
    void *VAR_5)
{
 struct obs_core_video *VAR_6 = &VAR_0->video;
 if (!VAR_0)
  return;
 FUNC_0(VAR_6->video, VAR_1, VAR_2, VAR_5);
}
