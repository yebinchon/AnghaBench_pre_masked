
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct nau8540 {int regmap; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 struct nau8540* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_1,
  struct snd_kcontrol *VAR_2, int VAR_3)
{
 struct snd_soc_component *VAR_4 = FUNC_3(VAR_1->dapm);
 struct nau8540 *VAR_5 = FUNC_2(VAR_4);

 if (FUNC_0(VAR_3)) {
  FUNC_1(VAR_5->regmap, VAR_0, 0x0001);
  FUNC_1(VAR_5->regmap, VAR_0, 0x0000);
 }
 return 0;
}
