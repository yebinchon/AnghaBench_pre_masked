
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int master_unbind; int master_bind; int pin_eld_notify; int pin2port; struct hda_codec* audio_ptr; } ;
struct hdmi_spec {TYPE_1__ drm_audio_ops; } ;
struct hda_codec {struct hdmi_spec* spec; } ;
struct drm_audio_component_audio_ops {int master_unbind; int master_bind; int pin_eld_notify; int pin2port; } ;


 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_0,
    const struct drm_audio_component_audio_ops *VAR_1)
{
 struct hdmi_spec *VAR_2 = VAR_0->spec;

 VAR_2->drm_audio_ops.audio_ptr = VAR_0;




 FUNC_0();
 VAR_2->drm_audio_ops.pin2port = VAR_1->pin2port;
 VAR_2->drm_audio_ops.pin_eld_notify = VAR_1->pin_eld_notify;
 VAR_2->drm_audio_ops.master_bind = VAR_1->master_bind;
 VAR_2->drm_audio_ops.master_unbind = VAR_1->master_unbind;
}
