
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct rt5640_priv {int hp_mute; } ;




 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_soc_component*) ;
 struct rt5640_priv* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_0,
      struct snd_kcontrol *VAR_1, int VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_3(VAR_0->dapm);
 struct rt5640_priv *VAR_4 = FUNC_2(VAR_3);

 switch (VAR_2) {
 case 129:
  FUNC_1(VAR_3);
  VAR_4->hp_mute = 0;
  break;

 case 128:
  VAR_4->hp_mute = 1;
  FUNC_0(70);
  break;

 default:
  return 0;
 }

 return 0;
}
