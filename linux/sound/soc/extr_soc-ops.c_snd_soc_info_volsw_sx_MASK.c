
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_mixer_control {scalar_t__ min; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int max; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {TYPE_2__ value; } ;


 int FUNC_0 (struct snd_kcontrol*,struct snd_ctl_elem_info*) ;

int FUNC_1(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_info *VAR_1)
{
 struct soc_mixer_control *VAR_2 =
  (struct soc_mixer_control *)VAR_0->private_value;

 FUNC_0(VAR_0, VAR_1);



 VAR_1->value.integer.max += VAR_2->min;

 return 0;
}
