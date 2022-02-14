
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct soc_enum {int shift_l; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct cpcap_audio {int regmap; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,unsigned int,int) ;
 struct cpcap_audio* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (struct snd_kcontrol*) ;
 struct snd_soc_dapm_context* FUNC_4 (struct snd_kcontrol*) ;
 int FUNC_5 (struct snd_soc_dapm_context*,struct snd_kcontrol*,unsigned int,struct soc_enum*,int *) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_3,
         struct snd_ctl_elem_value *VAR_4)
{
 struct snd_soc_component *VAR_5 = FUNC_3(VAR_3);
 struct cpcap_audio *VAR_6 = FUNC_2(VAR_5);
 struct snd_soc_dapm_context *VAR_7 =
  FUNC_4(VAR_3);
 struct soc_enum *VAR_8 = (struct soc_enum *)VAR_3->private_value;
 unsigned int VAR_9 = VAR_4->value.enumerated.item[0];
 unsigned int VAR_10 = FUNC_0(VAR_8->shift_l);
 u16 VAR_11 = 0x00, VAR_12 = 0x00, VAR_13 = 0x00;
 int VAR_14;

 switch (VAR_9) {
 case 1:
  VAR_11 = VAR_10;
  break;
 case 2:
  VAR_12 = VAR_10;
  break;
 case 3:
  VAR_13 = VAR_10;
  break;
 default:
  break;
 }

 VAR_14 = FUNC_1(VAR_6->regmap, VAR_0,
     VAR_10, VAR_11);
 if (VAR_14)
  return VAR_14;
 VAR_14 = FUNC_1(VAR_6->regmap, VAR_2,
     VAR_10, VAR_12);
 if (VAR_14)
  return VAR_14;
 VAR_14 = FUNC_1(VAR_6->regmap, VAR_1,
     VAR_10, VAR_13);
 if (VAR_14)
  return VAR_14;

 FUNC_5(VAR_7, VAR_3, VAR_9, VAR_8, ((void*)0));

 return 0;
}
