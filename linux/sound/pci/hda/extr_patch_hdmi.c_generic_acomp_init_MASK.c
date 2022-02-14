
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdmi_spec {int (* port2pin ) (struct hda_codec*,int) ;int acomp_registered; int drm_audio_ops; } ;
struct hda_codec {TYPE_1__* bus; struct hdmi_spec* spec; } ;
struct drm_audio_component_audio_ops {int dummy; } ;
struct TYPE_2__ {scalar_t__ keep_power; int core; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,struct drm_audio_component_audio_ops const*) ;
 int FUNC_1 (int *,int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_1,
          const struct drm_audio_component_audio_ops *VAR_2,
          int (*VAR_3)(struct hda_codec *, int))
{
 struct hdmi_spec *VAR_4 = VAR_1->spec;

 VAR_4->port2pin = VAR_3;
 FUNC_0(VAR_1, VAR_2);
 if (!FUNC_1(&VAR_1->bus->core, &VAR_4->drm_audio_ops,
     VAR_0, 0)) {
  VAR_4->acomp_registered = 1;
  VAR_1->bus->keep_power = 0;
 }
}
