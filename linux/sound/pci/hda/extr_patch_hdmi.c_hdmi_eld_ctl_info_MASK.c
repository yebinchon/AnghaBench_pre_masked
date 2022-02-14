
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int private_value; } ;
struct snd_ctl_elem_info {int count; int type; } ;
struct hdmi_eld {int eld_size; scalar_t__ eld_valid; } ;
struct hdmi_spec_per_pin {struct hdmi_eld sink_eld; } ;
struct hdmi_spec {int pcm_lock; } ;
struct hda_codec {struct hdmi_spec* spec; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct hdmi_spec_per_pin* FUNC_2 (struct hdmi_spec*,int) ;
 struct hda_codec* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
   struct snd_ctl_elem_info *VAR_2)
{
 struct hda_codec *VAR_3 = FUNC_3(VAR_1);
 struct hdmi_spec *VAR_4 = VAR_3->spec;
 struct hdmi_spec_per_pin *VAR_5;
 struct hdmi_eld *VAR_6;
 int VAR_7;

 VAR_2->type = VAR_0;

 VAR_7 = VAR_1->private_value;
 FUNC_0(&VAR_4->pcm_lock);
 VAR_5 = FUNC_2(VAR_4, VAR_7);
 if (!VAR_5) {

  VAR_2->count = 0;
  goto unlock;
 }
 VAR_6 = &VAR_5->sink_eld;
 VAR_2->count = VAR_6->eld_valid ? VAR_6->eld_size : 0;

 unlock:
 FUNC_1(&VAR_4->pcm_lock);
 return 0;
}
