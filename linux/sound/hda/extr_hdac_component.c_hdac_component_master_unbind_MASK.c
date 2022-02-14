
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_audio_component {scalar_t__ dev; TYPE_2__* ops; TYPE_1__* audio_ops; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int owner; } ;
struct TYPE_3__ {int (* master_unbind ) (struct device*,struct drm_audio_component*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,struct drm_audio_component*) ;
 struct drm_audio_component* FUNC_2 (struct device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,struct drm_audio_component*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0)
{
 struct drm_audio_component *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->audio_ops && VAR_1->audio_ops->master_unbind)
  VAR_1->audio_ops->master_unbind(VAR_0, VAR_1);
 FUNC_3(VAR_1->ops->owner);
 FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_1->ops || VAR_1->dev);
}
