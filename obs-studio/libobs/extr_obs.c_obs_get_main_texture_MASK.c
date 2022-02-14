
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct obs_core_video {int * render_texture; int texture_rendered; } ;
typedef int gs_texture_t ;
struct TYPE_2__ {struct obs_core_video video; } ;


 TYPE_1__* VAR_0 ;

gs_texture_t *FUNC_0(void)
{
 struct obs_core_video *VAR_1;

 if (!VAR_0)
  return ((void*)0);

 VAR_1 = &VAR_0->video;
 if (!VAR_1->texture_rendered)
  return ((void*)0);

 return VAR_1->render_texture;
}
