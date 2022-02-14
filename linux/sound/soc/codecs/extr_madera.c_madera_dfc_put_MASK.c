
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_enum {unsigned int reg; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct snd_ctl_elem_value {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct snd_soc_dapm_context* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,unsigned int,unsigned int*) ;
 int FUNC_3 (struct snd_soc_dapm_context*) ;
 int FUNC_4 (struct snd_soc_dapm_context*) ;
 struct snd_soc_component* FUNC_5 (struct snd_kcontrol*) ;
 int FUNC_6 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

int FUNC_7(struct snd_kcontrol *VAR_2,
     struct snd_ctl_elem_value *VAR_3)
{
 struct snd_soc_component *VAR_4 =
  FUNC_5(VAR_2);
 struct snd_soc_dapm_context *VAR_5 =
  FUNC_1(VAR_4);
 struct soc_enum *VAR_6 = (struct soc_enum *)VAR_2->private_value;
 unsigned int VAR_7 = VAR_6->reg;
 unsigned int VAR_8;
 int VAR_9 = 0;

 VAR_7 = ((VAR_7 / 6) * 6) - 2;

 FUNC_3(VAR_5);

 VAR_9 = FUNC_2(VAR_4, VAR_7, &VAR_8);
 if (VAR_9)
  goto exit;

 if (VAR_8 & VAR_1) {
  VAR_9 = -VAR_0;
  FUNC_0(VAR_4->dev, "Can't change mode on an active DFC\n");
  goto exit;
 }

 VAR_9 = FUNC_6(VAR_2, VAR_3);
exit:
 FUNC_4(VAR_5);

 return VAR_9;
}
