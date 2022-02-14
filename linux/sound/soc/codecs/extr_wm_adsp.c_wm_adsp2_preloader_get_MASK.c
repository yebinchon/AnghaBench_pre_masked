
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wm_adsp {int preloaded; } ;
struct soc_mixer_control {int shift; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_4__ {int * value; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;


 struct wm_adsp* FUNC_0 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_1 (struct snd_kcontrol*) ;

int FUNC_2(struct snd_kcontrol *VAR_0,
      struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_component *VAR_2 = FUNC_1(VAR_0);
 struct wm_adsp *VAR_3 = FUNC_0(VAR_2);
 struct soc_mixer_control *VAR_4 =
  (struct soc_mixer_control *)VAR_0->private_value;
 struct wm_adsp *VAR_5 = &VAR_3[VAR_4->shift - 1];

 VAR_1->value.integer.value[0] = VAR_5->preloaded;

 return 0;
}
