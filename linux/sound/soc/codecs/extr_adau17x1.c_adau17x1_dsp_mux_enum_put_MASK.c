
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_enum {unsigned int shift_l; scalar_t__ items; } ;
struct snd_soc_dapm_update {int mask; int reg; unsigned int val; struct snd_kcontrol* kcontrol; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {scalar_t__* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct adau {int* dsp_bypass; int* tdm_slot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 struct snd_soc_dapm_context* FUNC_0 (struct snd_soc_component*) ;
 struct adau* FUNC_1 (struct snd_soc_component*) ;
 unsigned int FUNC_2 (struct snd_soc_component*,int,int,unsigned int) ;
 struct snd_soc_component* FUNC_3 (struct snd_kcontrol*) ;
 int FUNC_4 (struct snd_soc_dapm_context*,struct snd_kcontrol*,scalar_t__,struct soc_enum*,struct snd_soc_dapm_update*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_4,
 struct snd_ctl_elem_value *VAR_5)
{
 struct snd_soc_component *VAR_6 = FUNC_3(VAR_4);
 struct snd_soc_dapm_context *VAR_7 = FUNC_0(VAR_6);
 struct adau *VAR_8 = FUNC_1(VAR_6);
 struct soc_enum *VAR_9 = (struct soc_enum *)VAR_4->private_value;
 struct snd_soc_dapm_update VAR_10 = {};
 unsigned int VAR_11 = VAR_9->shift_l;
 unsigned int VAR_12, VAR_13;
 int VAR_14;

 if (VAR_5->value.enumerated.item[0] >= VAR_9->items)
  return -VAR_2;

 switch (VAR_5->value.enumerated.item[0]) {
 case 0:
  VAR_12 = 0;
  VAR_8->dsp_bypass[VAR_11] = 0;
  break;
 default:
  VAR_12 = (VAR_8->tdm_slot[VAR_11] * 2) + 1;
  VAR_8->dsp_bypass[VAR_11] = 1;
  break;
 }

 if (VAR_11 == VAR_3)
  VAR_14 = VAR_0;
 else
  VAR_14 = VAR_1;

 VAR_13 = FUNC_2(VAR_6, VAR_14, 0xff, VAR_12);
 if (VAR_13) {
  VAR_10.kcontrol = VAR_4;
  VAR_10.mask = 0xff;
  VAR_10.reg = VAR_14;
  VAR_10.val = VAR_12;

  FUNC_4(VAR_7, VAR_4,
    VAR_5->value.enumerated.item[0], VAR_9, &VAR_10);
 }

 return VAR_13;
}
