
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int video_t ;
struct obs_core_video {int raw_active; } ;
struct TYPE_2__ {struct obs_core_video video; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,void (*) (void*,struct video_data*),void*) ;

void FUNC_2(video_t *VAR_1,
      void (*VAR_2)(void *VAR_3, struct video_data *VAR_4),
      void *VAR_5)
{
 struct obs_core_video *VAR_6 = &VAR_0->video;
 FUNC_0(&VAR_6->raw_active);
 FUNC_1(VAR_1, VAR_2, VAR_5);
}
