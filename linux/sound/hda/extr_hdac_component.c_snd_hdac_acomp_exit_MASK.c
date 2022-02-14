
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdac_bus {struct drm_audio_component* audio_component; scalar_t__ display_power_status; int display_power_active; struct device* dev; } ;
struct drm_audio_component {int dev; TYPE_1__* ops; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* put_power ) (int ,int ) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*,int *) ;
 int FUNC_2 (struct device*,int ,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(struct hdac_bus *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev;
 struct drm_audio_component *VAR_4 = VAR_2->audio_component;

 if (!VAR_4)
  return 0;

 if (FUNC_0(VAR_2->display_power_active) && VAR_4->ops)
  VAR_4->ops->put_power(VAR_4->dev, VAR_2->display_power_active);

 VAR_2->display_power_active = 0;
 VAR_2->display_power_status = 0;

 FUNC_1(VAR_3, &VAR_1);

 VAR_2->audio_component = ((void*)0);
 FUNC_2(VAR_3, VAR_0, ((void*)0), ((void*)0));

 return 0;
}
