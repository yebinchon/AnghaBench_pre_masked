
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_chmap {unsigned int max_channels; TYPE_1__* chmap; struct hdmi_codec_priv* private_data; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {unsigned char* value; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct hdmi_codec_priv {size_t chmap_idx; } ;
struct TYPE_4__ {unsigned char* map; } ;


 size_t VAR_0 ;
 struct snd_pcm_chmap* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_1,
         struct snd_ctl_elem_value *VAR_2)
{
 unsigned const char *VAR_3;
 unsigned int VAR_4;
 struct snd_pcm_chmap *VAR_5 = FUNC_0(VAR_1);
 struct hdmi_codec_priv *VAR_6 = VAR_5->private_data;

 VAR_3 = VAR_5->chmap[VAR_6->chmap_idx].map;

 for (VAR_4 = 0; VAR_4 < VAR_5->max_channels; VAR_4++) {
  if (VAR_6->chmap_idx == VAR_0)
   VAR_2->value.integer.value[VAR_4] = 0;
  else
   VAR_2->value.integer.value[VAR_4] = VAR_3[VAR_4];
 }

 return 0;
}
