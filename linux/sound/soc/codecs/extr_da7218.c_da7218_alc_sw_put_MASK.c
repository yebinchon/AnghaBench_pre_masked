
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_mixer_control {unsigned int shift; unsigned int rshift; unsigned int max; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct da7218_priv {unsigned int alc_en; } ;


 int FUNC_0 (struct snd_soc_component*) ;
 struct da7218_priv* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
        struct snd_ctl_elem_value *VAR_1)
{
 struct soc_mixer_control *VAR_2 =
  (struct soc_mixer_control *) VAR_0->private_value;
 struct snd_soc_component *VAR_3 = FUNC_2(VAR_0);
 struct da7218_priv *VAR_4 = FUNC_1(VAR_3);
 unsigned int VAR_5 = VAR_1->value.integer.value[0];
 unsigned int VAR_6 = VAR_1->value.integer.value[1];
 unsigned int VAR_7 = VAR_2->shift;
 unsigned int VAR_8 = VAR_2->rshift;
 unsigned int VAR_9 = (VAR_2->max << VAR_7) | (VAR_2->max << VAR_8);


 if ((VAR_5 || VAR_6) && (!VAR_4->alc_en))
  FUNC_0(VAR_3);


 VAR_4->alc_en &= ~VAR_9;
 VAR_4->alc_en |= (VAR_5 << VAR_7) | (VAR_6 << VAR_8);

 return FUNC_3(VAR_0, VAR_1);
}
