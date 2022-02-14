
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_audio_component {TYPE_2__* ops; TYPE_1__* audio_ops; scalar_t__ dev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int owner; } ;
struct TYPE_3__ {int (* master_bind ) (struct device*,struct drm_audio_component*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct device*,struct drm_audio_component*) ;
 int FUNC_2 (struct device*,struct drm_audio_component*) ;
 struct drm_audio_component* FUNC_3 (struct device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*,struct drm_audio_component*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_2)
{
 struct drm_audio_component *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 if (FUNC_0(!VAR_3))
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 if (FUNC_0(!(VAR_3->dev && VAR_3->ops))) {
  VAR_4 = -VAR_0;
  goto out_unbind;
 }


 if (!FUNC_6(VAR_3->ops->owner)) {
  VAR_4 = -VAR_1;
  goto out_unbind;
 }

 if (VAR_3->audio_ops && VAR_3->audio_ops->master_bind) {
  VAR_4 = VAR_3->audio_ops->master_bind(VAR_2, VAR_3);
  if (VAR_4 < 0)
   goto module_put;
 }

 return 0;

 module_put:
 FUNC_4(VAR_3->ops->owner);
out_unbind:
 FUNC_2(VAR_2, VAR_3);

 return VAR_4;
}
