
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_mixer_control {int reg; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct snd_ctl_elem_value {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct snd_soc_dapm_context* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,unsigned int*) ;
 int FUNC_3 (struct snd_soc_dapm_context*) ;
 int FUNC_4 (struct snd_soc_dapm_context*) ;
 struct snd_soc_component* FUNC_5 (struct snd_kcontrol*) ;
 int FUNC_6 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

int FUNC_7(struct snd_kcontrol *VAR_3,
         struct snd_ctl_elem_value *VAR_4)
{
 struct soc_mixer_control *VAR_5 =
  (struct soc_mixer_control *)VAR_3->private_value;
 struct snd_soc_component *VAR_6 =
  FUNC_5(VAR_3);
 struct snd_soc_dapm_context *VAR_7 =
  FUNC_1(VAR_6);
 unsigned int VAR_8, VAR_9;
 int VAR_10;

 FUNC_3(VAR_7);


 VAR_10 = FUNC_2(VAR_6, VAR_2, &VAR_8);
 if (VAR_10)
  goto exit;
 VAR_9 = (VAR_5->reg - VAR_1) / 4;
 VAR_9 ^= 0x1;

 if (VAR_8 & (1 << VAR_9)) {
  VAR_10 = -VAR_0;
  FUNC_0(VAR_6->dev,
   "Can't change lp mode on an active input\n");
  goto exit;
 }

 VAR_10 = FUNC_6(VAR_3, VAR_4);

exit:
 FUNC_4(VAR_7);

 return VAR_10;
}
