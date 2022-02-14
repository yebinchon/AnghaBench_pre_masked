
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ private; } ;
struct soc_enum {TYPE_1__ dobj; } ;
struct snd_soc_dapm_widget {struct skl_module_cfg* priv; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_5__ {int * item; } ;
struct TYPE_6__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct skl_module_cfg {scalar_t__ dmic_ch_type; int dmic_ch_combo_index; } ;


 struct snd_soc_dapm_widget* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_0,
  struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_dapm_widget *VAR_2 = FUNC_0(VAR_0);
 struct skl_module_cfg *VAR_3 = VAR_2->priv;
 struct soc_enum *VAR_4 = (struct soc_enum *)VAR_0->private_value;
 u32 VAR_5 = *((u32 *)VAR_4->dobj.private);

 if (VAR_3->dmic_ch_type == VAR_5)
  VAR_1->value.enumerated.item[0] =
     VAR_3->dmic_ch_combo_index;
 else
  VAR_1->value.enumerated.item[0] = 0;

 return 0;
}
