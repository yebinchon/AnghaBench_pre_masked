
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_jack {int dummy; } ;
struct hdmi_spec_per_pin {size_t pcm_idx; int pin_nid; } ;
struct hdmi_spec {scalar_t__ dyn_pcm_assign; TYPE_1__* pcm_rec; } ;
struct hda_jack_tbl {struct snd_jack* jack; } ;
struct hda_codec {struct hdmi_spec* spec; } ;
struct TYPE_2__ {struct snd_jack* jack; } ;


 struct hda_jack_tbl* FUNC_0 (struct hda_codec*,int ) ;

__attribute__((used)) static struct snd_jack *FUNC_1(struct hda_codec *VAR_0,
     struct hdmi_spec_per_pin *VAR_1)
{
 struct hdmi_spec *VAR_2 = VAR_0->spec;
 struct snd_jack *VAR_3 = ((void*)0);
 struct hda_jack_tbl *VAR_4;







 if (VAR_1->pcm_idx >= 0 && VAR_2->dyn_pcm_assign)
  VAR_3 = VAR_2->pcm_rec[VAR_1->pcm_idx].jack;
 else if (!VAR_2->dyn_pcm_assign) {





  VAR_4 = FUNC_0(VAR_0, VAR_1->pin_nid);
  if (VAR_4)
   VAR_3 = VAR_4->jack;
 }
 return VAR_3;
}
