
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_enum {unsigned int items; unsigned int shift_l; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_4__ {unsigned int* item; } ;
struct TYPE_3__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct cs43130_private {int dev_id; int regmap; } ;


 int FUNC_0 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 struct cs43130_private* FUNC_2 (struct snd_soc_component*) ;
 unsigned int FUNC_3 (struct soc_enum*,unsigned int) ;
 struct snd_soc_component* FUNC_4 (struct snd_kcontrol*) ;
 int FUNC_5 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_3,
         struct snd_ctl_elem_value *VAR_4)
{
 struct soc_enum *VAR_5 = (struct soc_enum *)VAR_3->private_value;
 unsigned int *VAR_6 = VAR_4->value.enumerated.item;
 struct snd_soc_component *VAR_7 = FUNC_4(VAR_3);
 struct cs43130_private *VAR_8 = FUNC_2(VAR_7);
 unsigned int VAR_9;

 if (VAR_6[0] >= VAR_5->items)
  return -VAR_0;
 VAR_9 = FUNC_3(VAR_5, VAR_6[0]) << VAR_5->shift_l;

 switch (VAR_8->dev_id) {
 case 129:
 case 128:
  if (VAR_9 >= 2)
   FUNC_1(VAR_8->regmap, VAR_2,
            FUNC_0(VAR_2));
  else
   FUNC_1(VAR_8->regmap, VAR_1,
            FUNC_0(VAR_1));
  break;
 }

 return FUNC_5(VAR_3, VAR_4);
}
