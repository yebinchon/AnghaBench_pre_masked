
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct nau8540 {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 struct nau8540* FUNC_4 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_4,
  struct snd_kcontrol *VAR_5, int VAR_6)
{
 struct snd_soc_component *VAR_7 = FUNC_5(VAR_4->dapm);
 struct nau8540 *VAR_8 = FUNC_4(VAR_7);

 if (FUNC_1(VAR_6)) {
  FUNC_2(300);

  FUNC_3(VAR_8->regmap, VAR_2,
   VAR_0, 0);
  FUNC_3(VAR_8->regmap, VAR_3,
   VAR_1, 0);
 } else if (FUNC_0(VAR_6)) {
  FUNC_3(VAR_8->regmap, VAR_2,
   VAR_0, VAR_0);
  FUNC_3(VAR_8->regmap, VAR_3,
   VAR_1, VAR_1);
 }
 return 0;
}
