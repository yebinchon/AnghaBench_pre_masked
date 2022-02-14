
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u8 ;
typedef unsigned int u32 ;
typedef unsigned int u16 ;
struct soc_bytes {int num_regs; int mask; int base; } ;
struct snd_soc_component {int val_bytes; int regmap; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int data; } ;
struct TYPE_4__ {TYPE_1__ bytes; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,unsigned int*,unsigned int*) ;
 int FUNC_3 (int ,int ,void*,int) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 struct snd_soc_component* FUNC_5 (struct snd_kcontrol*) ;

int FUNC_6(struct snd_kcontrol *VAR_4,
        struct snd_ctl_elem_value *VAR_5)
{
 struct snd_soc_component *VAR_6 = FUNC_5(VAR_4);
 struct soc_bytes *VAR_7 = (void *)VAR_4->private_value;
 int VAR_8, VAR_9;
 unsigned int VAR_10, VAR_11;
 void *VAR_12;

 if (!VAR_6->regmap || !VAR_7->num_regs)
  return -VAR_0;

 VAR_9 = VAR_7->num_regs * VAR_6->val_bytes;

 VAR_12 = FUNC_1(VAR_5->value.bytes.data, VAR_9, VAR_3 | VAR_2);
 if (!VAR_12)
  return -VAR_1;






 if (VAR_7->mask) {
  VAR_8 = FUNC_4(VAR_6->regmap, VAR_7->base, &VAR_10);
  if (VAR_8 != 0)
   goto out;

  VAR_10 &= VAR_7->mask;

  switch (VAR_6->val_bytes) {
  case 1:
   ((u8 *)VAR_12)[0] &= ~VAR_7->mask;
   ((u8 *)VAR_12)[0] |= VAR_10;
   break;
  case 2:
   VAR_11 = ~VAR_7->mask;
   VAR_8 = FUNC_2(VAR_6->regmap,
       &VAR_11, &VAR_11);
   if (VAR_8 != 0)
    goto out;

   ((u16 *)VAR_12)[0] &= VAR_11;

   VAR_8 = FUNC_2(VAR_6->regmap,
       &VAR_10, &VAR_10);
   if (VAR_8 != 0)
    goto out;

   ((u16 *)VAR_12)[0] |= VAR_10;
   break;
  case 4:
   VAR_11 = ~VAR_7->mask;
   VAR_8 = FUNC_2(VAR_6->regmap,
       &VAR_11, &VAR_11);
   if (VAR_8 != 0)
    goto out;

   ((u32 *)VAR_12)[0] &= VAR_11;

   VAR_8 = FUNC_2(VAR_6->regmap,
       &VAR_10, &VAR_10);
   if (VAR_8 != 0)
    goto out;

   ((u32 *)VAR_12)[0] |= VAR_10;
   break;
  default:
   VAR_8 = -VAR_0;
   goto out;
  }
 }

 VAR_8 = FUNC_3(VAR_6->regmap, VAR_7->base,
          VAR_12, VAR_9);

out:
 FUNC_0(VAR_12);

 return VAR_8;
}
