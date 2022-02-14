
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;
struct axg_tdm_formatter {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct axg_tdm_formatter*) ;
 int FUNC_1 (struct axg_tdm_formatter*,struct snd_soc_dapm_widget*) ;
 int FUNC_2 (int ,char*,int) ;
 struct axg_tdm_formatter* FUNC_3 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_4 (int ) ;

int FUNC_5(struct snd_soc_dapm_widget *VAR_1,
       struct snd_kcontrol *VAR_2,
       int VAR_3)
{
 struct snd_soc_component *VAR_4 = FUNC_4(VAR_1->dapm);
 struct axg_tdm_formatter *VAR_5 = FUNC_3(VAR_4);
 int VAR_6 = 0;

 switch (VAR_3) {
 case 128:
  VAR_6 = FUNC_1(VAR_5, VAR_1);
  break;

 case 129:
  FUNC_0(VAR_5);
  break;

 default:
  FUNC_2(VAR_4->dev, "Unexpected event %d\n", VAR_3);
  return -VAR_0;
 }

 return VAR_6;
}
