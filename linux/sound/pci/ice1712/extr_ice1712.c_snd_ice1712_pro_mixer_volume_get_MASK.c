
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct snd_ice1712 {int* pro_volumes; int reg_lock; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; int id; } ;


 int FUNC_0 (struct snd_kcontrol*,int *) ;
 struct snd_ice1712* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct snd_ice1712 *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = FUNC_0(VAR_0, &VAR_1->id) +
  VAR_0->private_value;

 FUNC_2(&VAR_2->reg_lock);
 VAR_1->value.integer.value[0] =
  (VAR_2->pro_volumes[VAR_3] >> 0) & 127;
 VAR_1->value.integer.value[1] =
  (VAR_2->pro_volumes[VAR_3] >> 16) & 127;
 FUNC_3(&VAR_2->reg_lock);
 return 0;
}
