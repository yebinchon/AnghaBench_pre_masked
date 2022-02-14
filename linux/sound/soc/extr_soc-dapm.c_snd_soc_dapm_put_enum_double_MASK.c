
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_enum {unsigned int items; unsigned int shift_l; unsigned int mask; unsigned int shift_r; scalar_t__ reg; } ;
struct snd_soc_dapm_update {scalar_t__ reg; unsigned int mask; unsigned int val; struct snd_kcontrol* kcontrol; } ;
struct snd_soc_dapm_context {struct snd_soc_card* card; } ;
struct snd_soc_card {int dapm_mutex; struct snd_soc_dapm_update* update; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (struct snd_kcontrol*,unsigned int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 struct snd_soc_dapm_context* FUNC_3 (struct snd_kcontrol*) ;
 unsigned int FUNC_4 (struct soc_enum*,unsigned int) ;
 int FUNC_5 (struct snd_soc_card*,struct snd_kcontrol*,unsigned int,struct soc_enum*) ;
 unsigned int FUNC_6 (struct snd_soc_dapm_context*,scalar_t__,unsigned int,unsigned int) ;
 int FUNC_7 (struct snd_soc_card*) ;

int FUNC_8(struct snd_kcontrol *VAR_3,
 struct snd_ctl_elem_value *VAR_4)
{
 struct snd_soc_dapm_context *VAR_5 = FUNC_3(VAR_3);
 struct snd_soc_card *VAR_6 = VAR_5->card;
 struct soc_enum *VAR_7 = (struct soc_enum *)VAR_3->private_value;
 unsigned int *VAR_8 = VAR_4->value.enumerated.item;
 unsigned int VAR_9, VAR_10, VAR_11 = 0;
 unsigned int VAR_12;
 struct snd_soc_dapm_update VAR_13 = {};
 int VAR_14 = 0;

 if (VAR_8[0] >= VAR_7->items)
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_7, VAR_8[0]) << VAR_7->shift_l;
 VAR_12 = VAR_7->mask << VAR_7->shift_l;
 if (VAR_7->shift_l != VAR_7->shift_r) {
  if (VAR_8[1] > VAR_7->items)
   return -VAR_0;
  VAR_9 |= FUNC_4(VAR_7, VAR_8[1]) << VAR_7->shift_r;
  VAR_12 |= VAR_7->mask << VAR_7->shift_r;
 }

 FUNC_1(&VAR_6->dapm_mutex, VAR_1);

 VAR_10 = FUNC_0(VAR_3, VAR_9);

 if (VAR_7->reg != VAR_2)
  VAR_11 = FUNC_6(VAR_5, VAR_7->reg, VAR_12, VAR_9);

 if (VAR_10 || VAR_11) {
  if (VAR_11) {
   VAR_13.kcontrol = VAR_3;
   VAR_13.reg = VAR_7->reg;
   VAR_13.mask = VAR_12;
   VAR_13.val = VAR_9;
   VAR_6->update = &VAR_13;
  }
  VAR_10 |= VAR_11;

  VAR_14 = FUNC_5(VAR_6, VAR_3, VAR_8[0], VAR_7);

  VAR_6->update = ((void*)0);
 }

 FUNC_2(&VAR_6->dapm_mutex);

 if (VAR_14 > 0)
  FUNC_7(VAR_6);

 return VAR_10;
}
