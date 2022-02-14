
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wm_adsp {char* name; int boot_work; scalar_t__ preloaded; } ;
struct soc_mixer_control {int shift; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_soc_component*,char*) ;
 int FUNC_3 (struct snd_soc_component*,char*) ;
 struct snd_soc_dapm_context* FUNC_4 (struct snd_soc_component*) ;
 struct wm_adsp* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_dapm_context*) ;
 struct snd_soc_component* FUNC_7 (struct snd_kcontrol*) ;
 int FUNC_8 (char*,int ,char*,char*) ;

int FUNC_9(struct snd_kcontrol *VAR_0,
      struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_component *VAR_2 = FUNC_7(VAR_0);
 struct wm_adsp *VAR_3 = FUNC_5(VAR_2);
 struct snd_soc_dapm_context *VAR_4 = FUNC_4(VAR_2);
 struct soc_mixer_control *VAR_5 =
  (struct soc_mixer_control *)VAR_0->private_value;
 struct wm_adsp *VAR_6 = &VAR_3[VAR_5->shift - 1];
 char VAR_7[32];

 FUNC_8(VAR_7, FUNC_0(VAR_7), "%s Preload", VAR_6->name);

 VAR_6->preloaded = VAR_1->value.integer.value[0];

 if (VAR_1->value.integer.value[0])
  FUNC_3(VAR_2, VAR_7);
 else
  FUNC_2(VAR_2, VAR_7);

 FUNC_6(VAR_4);

 FUNC_1(&VAR_6->boot_work);

 return 0;
}
