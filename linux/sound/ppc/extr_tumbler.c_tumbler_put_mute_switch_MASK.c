
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pmac {struct pmac_tumbler* mixer_data; scalar_t__ auto_mute; scalar_t__ update_automute; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct pmac_gpio {int dummy; } ;
struct pmac_tumbler {struct pmac_gpio line_mute; struct pmac_gpio amp_mute; struct pmac_gpio hp_mute; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct pmac_gpio*) ;
 struct snd_pmac* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct pmac_gpio*,int) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_2,
       struct snd_ctl_elem_value *VAR_3)
{
 struct snd_pmac *VAR_4 = FUNC_1(VAR_2);
 struct pmac_tumbler *VAR_5;
 struct pmac_gpio *VAR_6;
 int VAR_7;




 if (! (VAR_5 = VAR_4->mixer_data))
  return -VAR_1;
 switch(VAR_2->private_value) {
 case 129:
  VAR_6 = &VAR_5->hp_mute; break;
 case 130:
  VAR_6 = &VAR_5->amp_mute; break;
 case 128:
  VAR_6 = &VAR_5->line_mute; break;
 default:
  VAR_6 = ((void*)0);
 }
 if (VAR_6 == ((void*)0))
  return -VAR_0;
 VAR_7 = ! FUNC_0(VAR_6);
 if (VAR_7 != VAR_3->value.integer.value[0]) {
  FUNC_2(VAR_6, ! VAR_3->value.integer.value[0]);
  return 1;
 }
 return 0;
}
