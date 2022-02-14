
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
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int,int) ;
 struct cpcap_audio* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (struct snd_kcontrol*) ;
 struct snd_soc_dapm_context* FUNC_4 (struct snd_kcontrol*) ;
 int FUNC_5 (struct snd_soc_dapm_context*,struct snd_kcontrol*,unsigned int,struct soc_enum*,int *) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_5,
       struct snd_ctl_elem_value *VAR_6)
{
 struct snd_soc_component *VAR_7 = FUNC_3(VAR_5);
 struct cpcap_audio *VAR_8 = FUNC_2(VAR_7);
 struct snd_soc_dapm_context *VAR_9 =
  FUNC_4(VAR_5);
 struct soc_enum *VAR_10 = (struct soc_enum *)VAR_5->private_value;
 unsigned int VAR_11 = VAR_6->value.enumerated.item[0];
 int VAR_12 = 0, VAR_13;
 int VAR_14;

 VAR_13 = 0;
 VAR_13 |= FUNC_0(VAR_2);
 VAR_13 |= FUNC_0(VAR_1);
 VAR_13 |= FUNC_0(VAR_0);
 VAR_13 |= FUNC_0(VAR_3);

 switch (VAR_11) {
 case 1:
  VAR_12 = FUNC_0(VAR_2);
  break;
 case 2:
  VAR_12 = FUNC_0(VAR_1);
  break;
 case 3:
  VAR_12 = FUNC_0(VAR_0);
  break;
 case 4:
  VAR_12 = FUNC_0(VAR_3);
  break;
 default:
  break;
 }

 VAR_14 = FUNC_1(VAR_8->regmap, VAR_4,
     VAR_13, VAR_12);
 if (VAR_14)
  return VAR_14;

 FUNC_5(VAR_9, VAR_5, VAR_11, VAR_10, ((void*)0));

 return 0;
}
