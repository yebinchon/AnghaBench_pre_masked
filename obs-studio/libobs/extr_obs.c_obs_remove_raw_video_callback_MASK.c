
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct obs_core_video {int video; } ;
struct TYPE_2__ {struct obs_core_video video; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,void (*) (void*,struct video_data*),void*) ;

void FUNC_1(void (*VAR_1)(void *VAR_2,
          struct video_data *VAR_3),
       void *VAR_4)
{
 struct obs_core_video *VAR_5 = &VAR_0->video;
 if (!VAR_0)
  return;
 FUNC_0(VAR_5->video, VAR_1, VAR_4);
}
