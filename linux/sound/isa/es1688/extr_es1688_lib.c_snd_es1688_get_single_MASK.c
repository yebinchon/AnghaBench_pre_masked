
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct snd_es1688 {int reg_lock; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (struct snd_es1688*,int) ;
 struct snd_es1688* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct snd_es1688 *VAR_2 = FUNC_1(VAR_0);
 unsigned long VAR_3;
 int VAR_4 = VAR_0->private_value & 0xff;
 int VAR_5 = (VAR_0->private_value >> 8) & 0xff;
 int VAR_6 = (VAR_0->private_value >> 16) & 0xff;
 int VAR_7 = (VAR_0->private_value >> 24) & 0xff;

 FUNC_2(&VAR_2->reg_lock, VAR_3);
 VAR_1->value.integer.value[0] = (FUNC_0(VAR_2, VAR_4) >> VAR_5) & VAR_6;
 FUNC_3(&VAR_2->reg_lock, VAR_3);
 if (VAR_7)
  VAR_1->value.integer.value[0] = VAR_6 - VAR_1->value.integer.value[0];
 return 0;
}
