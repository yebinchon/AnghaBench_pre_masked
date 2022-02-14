
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int max; scalar_t__ min; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;




 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_1,
          struct snd_ctl_elem_info *VAR_2)
{
 VAR_2->type = VAR_0;
 VAR_2->count = 2;
 VAR_2->value.integer.min = 0;
 switch ((int)VAR_1->private_value) {
 case 128:
  VAR_2->value.integer.max = 31;
  break;
 case 129:
  VAR_2->value.integer.max = 15;
  break;
 }
 return 0;
}
