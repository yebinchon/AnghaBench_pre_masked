
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_ac97 {int dummy; } ;
struct ac97_enum {unsigned short mask; unsigned short shift_l; unsigned short shift_r; int reg; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ac97*,int ,unsigned short,unsigned short) ;
 struct snd_ac97* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
        struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ac97 *VAR_3 = FUNC_1(VAR_1);
 struct ac97_enum *VAR_4 = (struct ac97_enum *)VAR_1->private_value;
 unsigned short VAR_5;
 unsigned short VAR_6, VAR_7;

 for (VAR_7 = 1; VAR_7 < VAR_4->mask; VAR_7 <<= 1)
  ;
 if (VAR_2->value.enumerated.item[0] > VAR_4->mask - 1)
  return -VAR_0;
 VAR_5 = VAR_2->value.enumerated.item[0] << VAR_4->shift_l;
 VAR_6 = (VAR_7 - 1) << VAR_4->shift_l;
 if (VAR_4->shift_l != VAR_4->shift_r) {
  if (VAR_2->value.enumerated.item[1] > VAR_4->mask - 1)
   return -VAR_0;
  VAR_5 |= VAR_2->value.enumerated.item[1] << VAR_4->shift_r;
  VAR_6 |= (VAR_7 - 1) << VAR_4->shift_r;
 }
 return FUNC_0(VAR_3, VAR_4->reg, VAR_6, VAR_5);
}
