
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_trident {unsigned char spdif_ctrl; int reg_lock; } ;
struct snd_kcontrol {unsigned char private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct snd_trident* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
      struct snd_ctl_elem_value *VAR_1)
{
 struct snd_trident *VAR_2 = FUNC_0(VAR_0);
 unsigned char VAR_3;

 FUNC_1(&VAR_2->reg_lock);
 VAR_3 = VAR_2->spdif_ctrl;
 VAR_1->value.integer.value[0] = VAR_3 == VAR_0->private_value;
 FUNC_2(&VAR_2->reg_lock);
 return 0;
}
