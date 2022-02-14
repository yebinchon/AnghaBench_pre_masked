
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 (struct snd_soc_dapm_widget*) ;
 int FUNC_1 (struct snd_soc_dapm_widget*) ;
 int FUNC_2 (struct snd_soc_dapm_widget*,struct snd_kcontrol*,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_1,
    struct snd_kcontrol *VAR_2, int VAR_3)
{
 int VAR_4;

 switch (VAR_3) {
 case 128:
 case 129:
  return FUNC_2(VAR_1, VAR_2, VAR_3);
 case 130:
  VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
  if (VAR_4 < 0)
   return VAR_4;

  FUNC_1(VAR_1);
  return 0;
 case 131:
  VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
  FUNC_0(VAR_1);
  return VAR_4;
 default:
  return -VAR_0;
 }
}
