
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_vmaster_mute_hook {unsigned int mute_mode; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct hda_vmaster_mute_hook*) ;
 struct hda_vmaster_mute_hook* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
     struct snd_ctl_elem_value *VAR_2)
{
 struct hda_vmaster_mute_hook *VAR_3 = FUNC_1(VAR_1);
 unsigned int VAR_4 = VAR_3->mute_mode;

 VAR_3->mute_mode = VAR_2->value.enumerated.item[0];
 if (VAR_3->mute_mode > VAR_0)
  VAR_3->mute_mode = VAR_0;
 if (VAR_4 == VAR_3->mute_mode)
  return 0;
 FUNC_0(VAR_3);
 return 1;
}
