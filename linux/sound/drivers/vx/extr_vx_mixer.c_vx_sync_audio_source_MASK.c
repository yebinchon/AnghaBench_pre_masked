
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {scalar_t__ audio_source_target; scalar_t__ audio_source; scalar_t__ pcm_running; } ;


 int FUNC_0 (struct vx_core*,scalar_t__) ;

int FUNC_1(struct vx_core *VAR_0)
{
 if (VAR_0->audio_source_target == VAR_0->audio_source ||
     VAR_0->pcm_running)
  return 0;
 FUNC_0(VAR_0, VAR_0->audio_source_target);
 VAR_0->audio_source = VAR_0->audio_source_target;
 return 1;
}
