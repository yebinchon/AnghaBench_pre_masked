
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



__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 VAR_1->value.integer.value[0] = VAR_0->private_value >> 8;
 return 0;
}
