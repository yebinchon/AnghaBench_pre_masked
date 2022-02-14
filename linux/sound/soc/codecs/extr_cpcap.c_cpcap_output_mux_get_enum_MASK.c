
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_enum {unsigned int shift_l; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct cpcap_audio {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int*) ;
 struct cpcap_audio* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_3,
         struct snd_ctl_elem_value *VAR_4)
{
 struct snd_soc_component *VAR_5 = FUNC_2(VAR_3);
 struct cpcap_audio *VAR_6 = FUNC_1(VAR_5);
 struct soc_enum *VAR_7 = (struct soc_enum *)VAR_3->private_value;
 unsigned int VAR_8 = VAR_7->shift_l;
 int VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13;

 VAR_13 = FUNC_0(VAR_6->regmap, VAR_0, &VAR_9);
 if (VAR_13)
  return VAR_13;
 VAR_13 = FUNC_0(VAR_6->regmap, VAR_2, &VAR_10);
 if (VAR_13)
  return VAR_13;
 VAR_13 = FUNC_0(VAR_6->regmap, VAR_1, &VAR_11);
 if (VAR_13)
  return VAR_13;

 VAR_9 = (VAR_9 >> VAR_8) & 1;
 VAR_10 = (VAR_10 >> VAR_8) & 1;
 VAR_11 = (VAR_11 >> VAR_8) & 1;
 VAR_12 = VAR_11 << 2 | VAR_10 << 1 | VAR_9;

 switch (VAR_12) {
 case 0x04:
  VAR_4->value.enumerated.item[0] = 3;
  break;
 case 0x02:
  VAR_4->value.enumerated.item[0] = 2;
  break;
 case 0x01:
  VAR_4->value.enumerated.item[0] = 1;
  break;
 default:
  VAR_4->value.enumerated.item[0] = 0;
  break;
 }

 return 0;
}
