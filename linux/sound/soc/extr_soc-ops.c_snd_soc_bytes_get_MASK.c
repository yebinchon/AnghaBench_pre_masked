
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct soc_bytes {int num_regs; scalar_t__ mask; int base; } ;
struct snd_soc_component {int val_bytes; scalar_t__ regmap; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {scalar_t__* data; } ;
struct TYPE_4__ {TYPE_1__ bytes; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,scalar_t__*,int) ;
 struct snd_soc_component* FUNC_3 (struct snd_kcontrol*) ;

int FUNC_4(struct snd_kcontrol *VAR_1,
        struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_3(VAR_1);
 struct soc_bytes *VAR_4 = (void *)VAR_1->private_value;
 int VAR_5;

 if (VAR_3->regmap)
  VAR_5 = FUNC_2(VAR_3->regmap, VAR_4->base,
          VAR_2->value.bytes.data,
          VAR_4->num_regs * VAR_3->val_bytes);
 else
  VAR_5 = -VAR_0;


 if (VAR_5 == 0 && VAR_4->mask) {
  switch (VAR_3->val_bytes) {
  case 1:
   VAR_2->value.bytes.data[0] &= ~VAR_4->mask;
   break;
  case 2:
   ((u16 *)(&VAR_2->value.bytes.data))[0]
    &= FUNC_0(~VAR_4->mask);
   break;
  case 4:
   ((u32 *)(&VAR_2->value.bytes.data))[0]
    &= FUNC_1(~VAR_4->mask);
   break;
  default:
   return -VAR_0;
  }
 }

 return VAR_5;
}
