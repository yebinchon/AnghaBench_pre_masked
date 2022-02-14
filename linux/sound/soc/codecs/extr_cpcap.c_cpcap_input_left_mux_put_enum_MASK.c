
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_enum {int dummy; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct cpcap_audio {int regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int,int) ;
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
 int VAR_10 = 0, VAR_11;
 int VAR_12;

 VAR_11 = 0;
 VAR_11 |= FUNC_0(VAR_0);
 VAR_11 |= FUNC_0(VAR_1);

 switch (VAR_9) {
 case 1:
  VAR_10 = FUNC_0(VAR_0);
  break;
 case 2:
  VAR_10 = FUNC_0(VAR_1);
  break;
 default:
  break;
 }

 VAR_12 = FUNC_1(VAR_6->regmap, VAR_2,
     VAR_11, VAR_10);
 if (VAR_12)
  return VAR_12;

 FUNC_5(VAR_7, VAR_3, VAR_9, VAR_8, ((void*)0));

 return 0;
}
