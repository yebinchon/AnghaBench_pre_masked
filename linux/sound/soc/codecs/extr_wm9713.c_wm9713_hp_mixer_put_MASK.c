
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wm9713_priv {unsigned int* hp_mixer; int lock; } ;
struct soc_mixer_control {int shift; } ;
struct snd_soc_dapm_update {int mask; int val; int reg; struct snd_kcontrol* kcontrol; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct wm9713_priv* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_dapm_context* FUNC_3 (struct snd_kcontrol*) ;
 int FUNC_4 (struct snd_soc_dapm_context*,struct snd_kcontrol*,unsigned int,struct snd_soc_dapm_update*) ;
 struct snd_soc_component* FUNC_5 (struct snd_soc_dapm_context*) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_1,
 struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_dapm_context *VAR_3 = FUNC_3(VAR_1);
 struct snd_soc_component *VAR_4 = FUNC_5(VAR_3);
 struct wm9713_priv *VAR_5 = FUNC_2(VAR_4);
 unsigned int VAR_6 = VAR_2->value.integer.value[0];
 struct soc_mixer_control *VAR_7 =
  (struct soc_mixer_control *)VAR_1->private_value;
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11;
 struct snd_soc_dapm_update VAR_12 = {};
 bool VAR_13;

 VAR_8 = VAR_7->shift >> 8;
 VAR_10 = VAR_7->shift & 0xff;
 VAR_9 = (1 << VAR_10);

 FUNC_0(&VAR_5->lock);
 VAR_11 = VAR_5->hp_mixer[VAR_8];
 if (VAR_2->value.integer.value[0])
  VAR_5->hp_mixer[VAR_8] |= VAR_9;
 else
  VAR_5->hp_mixer[VAR_8] &= ~VAR_9;

 VAR_13 = VAR_11 != VAR_5->hp_mixer[VAR_8];
 if (VAR_13) {
  VAR_12.kcontrol = VAR_1;
  VAR_12.reg = VAR_0[VAR_10];
  VAR_12.mask = 0x8000;
  if ((VAR_5->hp_mixer[0] & VAR_9) ||
      (VAR_5->hp_mixer[1] & VAR_9))
   VAR_12.val = 0x0;
  else
   VAR_12.val = 0x8000;

  FUNC_4(VAR_3, VAR_1, VAR_6,
   &VAR_12);
 }

 FUNC_1(&VAR_5->lock);

 return VAR_13;
}
