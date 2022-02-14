
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_pcm_runtime {scalar_t__ params_select; TYPE_1__* dai_link; } ;
struct snd_soc_dapm_widget {scalar_t__ power; struct snd_soc_pcm_runtime* priv; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_6__ {scalar_t__* item; } ;
struct TYPE_5__ {TYPE_3__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_4__ {scalar_t__ num_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_soc_dapm_widget* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_2,
     struct snd_ctl_elem_value *VAR_3)
{
 struct snd_soc_dapm_widget *VAR_4 = FUNC_0(VAR_2);
 struct snd_soc_pcm_runtime *VAR_5 = VAR_4->priv;


 if (VAR_4->power)
  return -VAR_0;

 if (VAR_3->value.enumerated.item[0] == VAR_5->params_select)
  return 0;

 if (VAR_3->value.enumerated.item[0] >= VAR_5->dai_link->num_params)
  return -VAR_1;

 VAR_5->params_select = VAR_3->value.enumerated.item[0];

 return 0;
}
