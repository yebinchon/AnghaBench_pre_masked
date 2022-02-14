
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct nau8825 {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ,int ,int ,int ) ;
 struct nau8825* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_3,
 struct snd_kcontrol *VAR_4, int VAR_5)
{
 struct snd_soc_component *VAR_6 = FUNC_2(VAR_3->dapm);
 struct nau8825 *VAR_7 = FUNC_1(VAR_6);

 switch (VAR_5) {
 case 128:

  FUNC_0(VAR_7->regmap, VAR_2,
   VAR_1, 0);
  break;
 case 129:
  FUNC_0(VAR_7->regmap, VAR_2,
   VAR_1, VAR_1);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
