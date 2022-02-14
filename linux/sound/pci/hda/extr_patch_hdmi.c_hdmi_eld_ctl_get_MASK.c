
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int data; } ;
struct TYPE_4__ {TYPE_1__ bytes; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hdmi_eld {scalar_t__ eld_size; int eld_buffer; scalar_t__ eld_valid; } ;
struct hdmi_spec_per_pin {struct hdmi_eld sink_eld; } ;
struct hdmi_spec {int pcm_lock; } ;
struct hda_codec {struct hdmi_spec* spec; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct hdmi_spec_per_pin* FUNC_5 (struct hdmi_spec*,int) ;
 int FUNC_6 () ;
 struct hda_codec* FUNC_7 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_8(struct snd_kcontrol *VAR_2,
   struct snd_ctl_elem_value *VAR_3)
{
 struct hda_codec *VAR_4 = FUNC_7(VAR_2);
 struct hdmi_spec *VAR_5 = VAR_4->spec;
 struct hdmi_spec_per_pin *VAR_6;
 struct hdmi_eld *VAR_7;
 int VAR_8;
 int VAR_9 = 0;

 VAR_8 = VAR_2->private_value;
 FUNC_3(&VAR_5->pcm_lock);
 VAR_6 = FUNC_5(VAR_5, VAR_8);
 if (!VAR_6) {

  FUNC_2(VAR_3->value.bytes.data, 0,
         FUNC_0(VAR_3->value.bytes.data));
  goto unlock;
 }

 VAR_7 = &VAR_6->sink_eld;
 if (VAR_7->eld_size > FUNC_0(VAR_3->value.bytes.data) ||
     VAR_7->eld_size > VAR_1) {
  FUNC_6();
  VAR_9 = -VAR_0;
  goto unlock;
 }

 FUNC_2(VAR_3->value.bytes.data, 0,
        FUNC_0(VAR_3->value.bytes.data));
 if (VAR_7->eld_valid)
  FUNC_1(VAR_3->value.bytes.data, VAR_7->eld_buffer,
         VAR_7->eld_size);

 unlock:
 FUNC_4(&VAR_5->pcm_lock);
 return VAR_9;
}
