
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wm9712_priv {unsigned int* hp_mixer; } ;
struct soc_mixer_control {int shift; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct wm9712_priv* FUNC_0 (struct snd_soc_component*) ;
 struct snd_soc_dapm_context* FUNC_1 (struct snd_kcontrol*) ;
 struct snd_soc_component* FUNC_2 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
 struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_dapm_context *VAR_2 = FUNC_1(VAR_0);
 struct snd_soc_component *VAR_3 = FUNC_2(VAR_2);
 struct wm9712_priv *VAR_4 = FUNC_0(VAR_3);
 struct soc_mixer_control *VAR_5 =
  (struct soc_mixer_control *)VAR_0->private_value;
 unsigned int VAR_6, VAR_7;

 VAR_7 = VAR_5->shift >> 8;
 VAR_6 = VAR_5->shift & 0xff;

 VAR_1->value.integer.value[0] =
  (VAR_4->hp_mixer[VAR_7] >> VAR_6) & 1;

 return 0;
}
