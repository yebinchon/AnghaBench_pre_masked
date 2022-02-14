
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_chmap {unsigned int channel_mask; } ;
struct hdmi_spec {int dummy; } ;
struct hda_pcm {int pcm; } ;
struct hda_codec {TYPE_1__* preset; struct hdmi_spec* spec; } ;
struct TYPE_2__ {int vendor_id; } ;


 int VAR_0 ;
 struct hda_pcm* FUNC_0 (struct hdmi_spec*,int ) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (int ,int ,int ,int,int ,struct snd_pcm_chmap**) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_2)
{
 struct hdmi_spec *VAR_3 = VAR_2->spec;
 struct hda_pcm *VAR_4;
 struct snd_pcm_chmap *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2);
 if (VAR_6 < 0)
  return VAR_6;


 VAR_4 = FUNC_0(VAR_3, 0);
 VAR_6 = FUNC_2(VAR_4->pcm,
         VAR_0,
         VAR_1, 8, 0, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;
 switch (VAR_2->preset->vendor_id) {
 case 0x10de0002:
 case 0x10de0003:
 case 0x10de0005:
 case 0x10de0006:
  VAR_5->channel_mask = (1U << 2) | (1U << 8);
  break;
 case 0x10de0007:
  VAR_5->channel_mask = (1U << 2) | (1U << 6) | (1U << 8);
 }
 return 0;
}
