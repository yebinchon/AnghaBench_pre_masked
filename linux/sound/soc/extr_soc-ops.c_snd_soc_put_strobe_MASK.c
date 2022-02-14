
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_mixer_control {unsigned int reg; unsigned int shift; int invert; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {scalar_t__* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct snd_soc_component* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_soc_component*,unsigned int,unsigned int,unsigned int) ;

int FUNC_2(struct snd_kcontrol *VAR_0,
 struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_component *VAR_2 = FUNC_0(VAR_0);
 struct soc_mixer_control *VAR_3 =
  (struct soc_mixer_control *)VAR_0->private_value;
 unsigned int VAR_4 = VAR_3->reg;
 unsigned int VAR_5 = VAR_3->shift;
 unsigned int VAR_6 = 1 << VAR_5;
 unsigned int VAR_7 = VAR_3->invert != 0;
 unsigned int VAR_8 = VAR_1->value.enumerated.item[0] != 0;
 unsigned int VAR_9 = (VAR_8 ^ VAR_7) ? VAR_6 : 0;
 unsigned int VAR_10 = (VAR_8 ^ VAR_7) ? 0 : VAR_6;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_2, VAR_4, VAR_6, VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 return FUNC_1(VAR_2, VAR_4, VAR_6, VAR_10);
}
