
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_enum {unsigned int shift_l; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct adau {int regmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,unsigned int,unsigned int*) ;
 struct adau* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_3,
 struct snd_ctl_elem_value *VAR_4)
{
 struct snd_soc_component *VAR_5 = FUNC_2(VAR_3);
 struct adau *VAR_6 = FUNC_1(VAR_5);
 struct soc_enum *VAR_7 = (struct soc_enum *)VAR_3->private_value;
 unsigned int VAR_8 = VAR_7->shift_l;
 unsigned int VAR_9, VAR_10;
 int VAR_11;

 if (VAR_8 == VAR_2)
  VAR_9 = VAR_0;
 else
  VAR_9 = VAR_1;

 VAR_11 = FUNC_0(VAR_6->regmap, VAR_9, &VAR_10);
 if (VAR_11)
  return VAR_11;

 if (VAR_10 != 0)
  VAR_10 = 1;
 VAR_4->value.enumerated.item[0] = VAR_10;

 return 0;
}
