
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_enum {unsigned int items; unsigned int shift_l; unsigned int mask; unsigned int shift_r; int reg; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 struct snd_soc_component* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (struct soc_enum*,unsigned int) ;

int FUNC_3(struct snd_kcontrol *VAR_1,
 struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_0(VAR_1);
 struct soc_enum *VAR_4 = (struct soc_enum *)VAR_1->private_value;
 unsigned int *VAR_5 = VAR_2->value.enumerated.item;
 unsigned int VAR_6;
 unsigned int VAR_7;

 if (VAR_5[0] >= VAR_4->items)
  return -VAR_0;
 VAR_6 = FUNC_2(VAR_4, VAR_5[0]) << VAR_4->shift_l;
 VAR_7 = VAR_4->mask << VAR_4->shift_l;
 if (VAR_4->shift_l != VAR_4->shift_r) {
  if (VAR_5[1] >= VAR_4->items)
   return -VAR_0;
  VAR_6 |= FUNC_2(VAR_4, VAR_5[1]) << VAR_4->shift_r;
  VAR_7 |= VAR_4->mask << VAR_4->shift_r;
 }

 return FUNC_1(VAR_3, VAR_4->reg, VAR_7, VAR_6);
}
