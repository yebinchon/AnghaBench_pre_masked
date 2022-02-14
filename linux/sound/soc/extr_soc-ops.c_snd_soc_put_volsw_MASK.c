
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_mixer_control {unsigned int reg; unsigned int rreg; unsigned int shift; unsigned int rshift; int max; int min; unsigned int sign_bit; unsigned int invert; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_soc_component*,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_4 (struct soc_mixer_control*) ;

int FUNC_5(struct snd_kcontrol *VAR_0,
 struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_component *VAR_2 = FUNC_2(VAR_0);
 struct soc_mixer_control *VAR_3 =
  (struct soc_mixer_control *)VAR_0->private_value;
 unsigned int VAR_4 = VAR_3->reg;
 unsigned int VAR_5 = VAR_3->rreg;
 unsigned int VAR_6 = VAR_3->shift;
 unsigned int VAR_7 = VAR_3->rshift;
 int VAR_8 = VAR_3->max;
 int VAR_9 = VAR_3->min;
 unsigned int VAR_10 = VAR_3->sign_bit;
 unsigned int VAR_11 = (1 << FUNC_1(VAR_8)) - 1;
 unsigned int VAR_12 = VAR_3->invert;
 int VAR_13;
 bool VAR_14 = 0;
 unsigned int VAR_15 = 0;
 unsigned int VAR_16, VAR_17;

 if (VAR_10)
  VAR_11 = FUNC_0(VAR_10 + 1) - 1;

 VAR_16 = ((VAR_1->value.integer.value[0] + VAR_9) & VAR_11);
 if (VAR_12)
  VAR_16 = VAR_8 - VAR_16;
 VAR_17 = VAR_11 << VAR_6;
 VAR_16 = VAR_16 << VAR_6;
 if (FUNC_4(VAR_3)) {
  VAR_15 = ((VAR_1->value.integer.value[1] + VAR_9) & VAR_11);
  if (VAR_12)
   VAR_15 = VAR_8 - VAR_15;
  if (VAR_4 == VAR_5) {
   VAR_17 |= VAR_11 << VAR_7;
   VAR_16 |= VAR_15 << VAR_7;
  } else {
   VAR_15 = VAR_15 << VAR_6;
   VAR_14 = 1;
  }
 }
 VAR_13 = FUNC_3(VAR_2, VAR_4, VAR_17, VAR_16);
 if (VAR_13 < 0)
  return VAR_13;

 if (VAR_14)
  VAR_13 = FUNC_3(VAR_2, VAR_5, VAR_17,
   VAR_15);

 return VAR_13;
}
