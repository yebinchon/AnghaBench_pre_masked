
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct snd_ice1712 {int* pro_volumes; int reg_lock; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; int id; } ;


 int FUNC_0 (struct snd_kcontrol*,int *) ;
 int FUNC_1 (struct snd_ice1712*,int) ;
 struct snd_ice1712* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct snd_ice1712 *VAR_2 = FUNC_2(VAR_0);
 int VAR_3 = FUNC_0(VAR_0, &VAR_1->id) +
  VAR_0->private_value;
 unsigned int VAR_4, VAR_5;

 VAR_4 = (VAR_1->value.integer.value[0] ? 0 : 0x00008000) |
        (VAR_1->value.integer.value[1] ? 0 : 0x80000000);
 FUNC_3(&VAR_2->reg_lock);
 VAR_4 |= VAR_2->pro_volumes[VAR_3] & ~0x80008000;
 VAR_5 = VAR_4 != VAR_2->pro_volumes[VAR_3];
 VAR_2->pro_volumes[VAR_3] = VAR_4;
 FUNC_1(VAR_2, VAR_3);
 FUNC_4(&VAR_2->reg_lock);
 return VAR_5;
}
