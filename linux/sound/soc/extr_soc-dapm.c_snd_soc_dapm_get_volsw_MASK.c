
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_mixer_control {int reg; unsigned int shift; int max; unsigned int invert; int rreg; unsigned int rshift; } ;
struct snd_soc_dapm_context {struct snd_soc_card* card; } ;
struct snd_soc_card {int dapm_mutex; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct snd_kcontrol*) ;
 scalar_t__ FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 struct snd_soc_dapm_context* FUNC_5 (struct snd_kcontrol*) ;
 scalar_t__ FUNC_6 (struct soc_mixer_control*) ;
 int FUNC_7 (struct snd_soc_dapm_context*,int,unsigned int*) ;

int FUNC_8(struct snd_kcontrol *VAR_2,
 struct snd_ctl_elem_value *VAR_3)
{
 struct snd_soc_dapm_context *VAR_4 = FUNC_5(VAR_2);
 struct snd_soc_card *VAR_5 = VAR_4->card;
 struct soc_mixer_control *VAR_6 =
  (struct soc_mixer_control *)VAR_2->private_value;
 int VAR_7 = VAR_6->reg;
 unsigned int VAR_8 = VAR_6->shift;
 int VAR_9 = VAR_6->max;
 unsigned int VAR_10 = FUNC_2(VAR_9);
 unsigned int VAR_11 = (1 << FUNC_2(VAR_9)) - 1;
 unsigned int VAR_12 = VAR_6->invert;
 unsigned int VAR_13, VAR_14, VAR_15 = 0;
 int VAR_16 = 0;

 FUNC_3(&VAR_5->dapm_mutex, VAR_0);
 if (FUNC_1(VAR_2) && VAR_7 != VAR_1) {
  VAR_16 = FUNC_7(VAR_4, VAR_7, &VAR_13);
  VAR_14 = (VAR_13 >> VAR_8) & VAR_11;

  if (VAR_16 == 0 && VAR_7 != VAR_6->rreg)
   VAR_16 = FUNC_7(VAR_4, VAR_6->rreg, &VAR_13);

  if (FUNC_6(VAR_6))
   VAR_15 = (VAR_13 >> VAR_6->rshift) & VAR_11;
 } else {
  VAR_13 = FUNC_0(VAR_2);
  VAR_14 = VAR_13 & VAR_11;

  if (FUNC_6(VAR_6))
   VAR_15 = (VAR_13 >> VAR_10) & VAR_11;
 }
 FUNC_4(&VAR_5->dapm_mutex);

 if (VAR_16)
  return VAR_16;

 if (VAR_12)
  VAR_3->value.integer.value[0] = VAR_9 - VAR_14;
 else
  VAR_3->value.integer.value[0] = VAR_14;

 if (FUNC_6(VAR_6)) {
  if (VAR_12)
   VAR_3->value.integer.value[1] = VAR_9 - VAR_15;
  else
   VAR_3->value.integer.value[1] = VAR_15;
 }

 return VAR_16;
}
