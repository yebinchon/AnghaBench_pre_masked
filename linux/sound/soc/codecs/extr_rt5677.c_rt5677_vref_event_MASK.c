
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct rt5677_priv {int is_vref_slow; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (struct snd_soc_component*) ;
 struct rt5677_priv* FUNC_3 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dapm_widget *VAR_4,
 struct snd_kcontrol *VAR_5, int VAR_6)
{
 struct snd_soc_component *VAR_7 = FUNC_4(VAR_4->dapm);
 struct rt5677_priv *VAR_8 = FUNC_3(VAR_7);

 switch (VAR_6) {
 case 128:
  if (FUNC_2(VAR_7) != VAR_3 &&
   !VAR_8->is_vref_slow) {
   FUNC_0(20);
   FUNC_1(VAR_8->regmap, VAR_0,
    VAR_1 | VAR_2,
    VAR_1 | VAR_2);
   VAR_8->is_vref_slow = 1;
  }
  break;

 default:
  return 0;
 }

 return 0;
}
