
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdac_bus {TYPE_1__* audio_component; } ;
struct drm_audio_component_audio_ops {int dummy; } ;
struct TYPE_2__ {struct drm_audio_component_audio_ops const* audio_ops; } ;


 int VAR_0 ;

int FUNC_0(struct hdac_bus *VAR_1,
        const struct drm_audio_component_audio_ops *VAR_2)
{
 if (!VAR_1->audio_component)
  return -VAR_0;

 VAR_1->audio_component->audio_ops = VAR_2;
 return 0;
}
