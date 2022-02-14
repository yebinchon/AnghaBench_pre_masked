
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_enum {unsigned int shift_l; unsigned int mask; unsigned int shift_r; int reg; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct snd_soc_component* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_soc_component*,int ,unsigned int*) ;
 unsigned int FUNC_2 (struct soc_enum*,unsigned int) ;

int FUNC_3(struct snd_kcontrol *VAR_0,
 struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_component *VAR_2 = FUNC_0(VAR_0);
 struct soc_enum *VAR_3 = (struct soc_enum *)VAR_0->private_value;
 unsigned int VAR_4, VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2, VAR_3->reg, &VAR_6);
 if (VAR_7)
  return VAR_7;
 VAR_4 = (VAR_6 >> VAR_3->shift_l) & VAR_3->mask;
 VAR_5 = FUNC_2(VAR_3, VAR_4);
 VAR_1->value.enumerated.item[0] = VAR_5;
 if (VAR_3->shift_l != VAR_3->shift_r) {
  VAR_4 = (VAR_6 >> VAR_3->shift_r) & VAR_3->mask;
  VAR_5 = FUNC_2(VAR_3, VAR_4);
  VAR_1->value.enumerated.item[1] = VAR_5;
 }

 return 0;
}
