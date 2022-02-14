
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int params_select; } ;
struct snd_soc_dapm_widget {struct snd_soc_pcm_runtime* priv; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int * item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct snd_soc_dapm_widget* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_dapm_widget *VAR_2 = FUNC_0(VAR_0);
 struct snd_soc_pcm_runtime *VAR_3 = VAR_2->priv;

 VAR_1->value.enumerated.item[0] = VAR_3->params_select;

 return 0;
}
