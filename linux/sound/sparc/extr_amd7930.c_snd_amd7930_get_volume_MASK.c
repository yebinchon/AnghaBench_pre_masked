
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_amd7930 {int mgain; int rgain; int pgain; } ;





 struct snd_amd7930* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct snd_amd7930 *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = VAR_0->private_value;
 int *VAR_4;

 switch (VAR_3) {
 case 129:
  VAR_4 = &VAR_2->mgain;
  break;
 case 130:
  VAR_4 = &VAR_2->rgain;
  break;
 case 128:
 default:
  VAR_4 = &VAR_2->pgain;
  break;
 }

 VAR_1->value.integer.value[0] = *VAR_4;

 return 0;
}
