
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_4__ {int min; int max; scalar_t__ step; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_1__ value; int type; } ;


 int VAR_0 ;




__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_1,
        struct snd_ctl_elem_info *VAR_2)
{
 VAR_2->type = VAR_0;
 VAR_2->count = 1;
 switch (VAR_1->private_value) {
 case 128:
  VAR_2->value.integer.min = 32000;
  VAR_2->value.integer.max = 800000;
  break;
 case 130:
 case 129:
 default:
  VAR_2->value.integer.min = 0;
  VAR_2->value.integer.max = 200000;
 }
 VAR_2->value.integer.step = 0;
 return 0;
}
