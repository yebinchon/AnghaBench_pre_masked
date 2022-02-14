
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct rt5651_priv {int hp_mute; } ;



 struct rt5651_priv* FUNC_0 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_0,
      struct snd_kcontrol *VAR_1, int VAR_2)
{

 struct snd_soc_component *VAR_3 = FUNC_1(VAR_0->dapm);
 struct rt5651_priv *VAR_4 = FUNC_0(VAR_3);

 switch (VAR_2) {
 case 128:
  if (!VAR_4->hp_mute)
   FUNC_2(80000, 85000);

  break;

 default:
  return 0;
 }

 return 0;
}
