
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pt2258 {scalar_t__* volume; } ;
struct snd_kcontrol {int private_value; struct snd_pt2258* private_data; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;



__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_0,
        struct snd_ctl_elem_value *VAR_1)
{
 struct snd_pt2258 *VAR_2 = VAR_0->private_data;
 int VAR_3 = VAR_0->private_value;


 VAR_1->value.integer.value[0] = 79 - VAR_2->volume[VAR_3];
 VAR_1->value.integer.value[1] = 79 - VAR_2->volume[VAR_3 + 1];
 return 0;
}
