
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_emu10k1 {int* efx_voices_mask; int reg_lock; scalar_t__ audigy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct snd_emu10k1* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct snd_emu10k1 *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = VAR_2->audigy ? 64 : 32;
 int VAR_4;

 FUNC_1(&VAR_2->reg_lock);
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  VAR_1->value.integer.value[VAR_4] = (VAR_2->efx_voices_mask[VAR_4 / 32] & (1 << (VAR_4 % 32))) ? 1 : 0;
 FUNC_2(&VAR_2->reg_lock);
 return 0;
}
