
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct soc_mixer_control {int reg; unsigned int shift; int max; unsigned int invert; unsigned int rshift; int rreg; } ;
struct snd_soc_dapm_update {int has_second_set; int reg2; unsigned int mask2; unsigned int val2; int reg; unsigned int mask; unsigned int val; struct snd_kcontrol* kcontrol; } ;
struct snd_soc_dapm_context {int dev; struct snd_soc_card* card; } ;
struct snd_soc_card {int dapm_mutex; struct snd_soc_dapm_update* update; } ;
struct TYPE_6__ {int name; } ;
struct snd_kcontrol {TYPE_3__ id; scalar_t__ private_value; } ;
struct TYPE_4__ {unsigned int* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_kcontrol*,unsigned int) ;
 int FUNC_1 (int ,char*,int ) ;
 unsigned int FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 struct snd_soc_dapm_context* FUNC_5 (struct snd_kcontrol*) ;
 scalar_t__ FUNC_6 (struct soc_mixer_control*) ;
 int FUNC_7 (struct snd_soc_card*,struct snd_kcontrol*,int,int) ;
 int FUNC_8 (struct snd_soc_dapm_context*,int,unsigned int,unsigned int) ;
 int FUNC_9 (struct snd_soc_card*) ;

int FUNC_10(struct snd_kcontrol *VAR_2,
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
 unsigned int VAR_11 = (1 << VAR_10) - 1;
 unsigned int VAR_12 = VAR_6->invert;
 unsigned int VAR_13, VAR_14 = 0;
 int VAR_15, VAR_16 = -1, VAR_17, VAR_18 = 0;
 struct snd_soc_dapm_update VAR_19 = {};
 int VAR_20 = 0;

 VAR_13 = (VAR_3->value.integer.value[0] & VAR_11);
 VAR_15 = !!VAR_13;

 if (VAR_12)
  VAR_13 = VAR_9 - VAR_13;

 if (FUNC_6(VAR_6)) {
  VAR_14 = (VAR_3->value.integer.value[1] & VAR_11);
  VAR_16 = !!VAR_14;
  if (VAR_12)
   VAR_14 = VAR_9 - VAR_14;
 }

 FUNC_3(&VAR_5->dapm_mutex, VAR_0);


 if (VAR_10 > sizeof(unsigned int) * 8 / 2)
  FUNC_1(VAR_4->dev,
    "ASoC: control %s field width limit exceeded\n",
    VAR_2->id.name);
 VAR_17 = FUNC_0(VAR_2, VAR_13 | (VAR_14 << VAR_10));

 if (VAR_7 != VAR_1) {
  VAR_13 = VAR_13 << VAR_8;
  VAR_14 = VAR_14 << VAR_6->rshift;

  VAR_18 = FUNC_8(VAR_4, VAR_7, VAR_11 << VAR_8, VAR_13);

  if (FUNC_6(VAR_6))
   VAR_18 |= FUNC_8(VAR_4, VAR_6->rreg,
        VAR_11 << VAR_6->rshift,
        VAR_14);
 }

 if (VAR_17 || VAR_18) {
  if (VAR_18) {
   if (FUNC_6(VAR_6)) {
    VAR_19.has_second_set = 1;
    VAR_19.reg2 = VAR_6->rreg;
    VAR_19.mask2 = VAR_11 << VAR_6->rshift;
    VAR_19.val2 = VAR_14;
   }
   VAR_19.kcontrol = VAR_2;
   VAR_19.reg = VAR_7;
   VAR_19.mask = VAR_11 << VAR_8;
   VAR_19.val = VAR_13;
   VAR_5->update = &VAR_19;
  }
  VAR_17 |= VAR_18;

  VAR_20 = FUNC_7(VAR_5, VAR_2, VAR_15,
        VAR_16);

  VAR_5->update = ((void*)0);
 }

 FUNC_4(&VAR_5->dapm_mutex);

 if (VAR_20 > 0)
  FUNC_9(VAR_5);

 return VAR_17;
}
