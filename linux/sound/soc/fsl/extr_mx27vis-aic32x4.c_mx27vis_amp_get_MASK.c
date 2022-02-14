
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_mixer_control {unsigned int reg; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;




 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_2,
       struct snd_ctl_elem_value *VAR_3)
{
 struct soc_mixer_control *VAR_4 =
  (struct soc_mixer_control *)VAR_2->private_value;
 unsigned int VAR_5 = VAR_4->reg;

 switch (VAR_5) {
 case 129:
  VAR_3->value.integer.value[0] = VAR_0;
  break;
 case 128:
  VAR_3->value.integer.value[0] = VAR_1;
  break;
 }
 return 0;
}
