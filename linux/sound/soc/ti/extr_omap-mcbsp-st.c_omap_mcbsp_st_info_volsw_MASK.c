
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_mixer_control {int max; int min; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_4__ {int min; int max; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_1__ value; int type; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_1,
        struct snd_ctl_elem_info *VAR_2)
{
 struct soc_mixer_control *VAR_3 =
  (struct soc_mixer_control *)VAR_1->private_value;
 int VAR_4 = VAR_3->max;
 int VAR_5 = VAR_3->min;

 VAR_2->type = VAR_0;
 VAR_2->count = 1;
 VAR_2->value.integer.min = VAR_5;
 VAR_2->value.integer.max = VAR_4;
 return 0;
}
