
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdac_bus {int dev; struct drm_audio_component* audio_component; } ;
struct drm_audio_component {int dev; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* codec_wake_override ) (int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,int) ;

int FUNC_2(struct hdac_bus *VAR_1, bool VAR_2)
{
 struct drm_audio_component *VAR_3 = VAR_1->audio_component;

 if (!VAR_3 || !VAR_3->ops)
  return -VAR_0;

 if (!VAR_3->ops->codec_wake_override)
  return 0;

 FUNC_0(VAR_1->dev, "%s codec wakeup\n",
  VAR_2 ? "enable" : "disable");

 VAR_3->ops->codec_wake_override(VAR_3->dev, VAR_2);

 return 0;
}
