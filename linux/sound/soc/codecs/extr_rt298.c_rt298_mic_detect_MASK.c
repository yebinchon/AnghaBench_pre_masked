
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_jack {int dummy; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct rt298_priv {struct snd_soc_jack* jack; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (struct rt298_priv*,int*,int*) ;
 struct snd_soc_dapm_context* FUNC_2 (struct snd_soc_component*) ;
 struct rt298_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_5 (struct snd_soc_dapm_context*) ;
 int FUNC_6 (struct snd_soc_jack*,int,int) ;

int FUNC_7(struct snd_soc_component *VAR_3, struct snd_soc_jack *VAR_4)
{
 struct rt298_priv *VAR_5 = FUNC_3(VAR_3);
 struct snd_soc_dapm_context *VAR_6;
 bool VAR_7 = 0;
 bool VAR_8 = 0;
 int VAR_9 = 0;


 if (!VAR_4) {
  FUNC_0(VAR_5->regmap, VAR_0, 0x2, 0x0);
  VAR_6 = FUNC_2(VAR_3);
  FUNC_4(VAR_6, "LDO1");
  FUNC_5(VAR_6);
  return 0;
 }

 VAR_5->jack = VAR_4;
 FUNC_0(VAR_5->regmap, VAR_0, 0x2, 0x2);

 FUNC_1(VAR_5, &VAR_7, &VAR_8);
 if (VAR_7)
  VAR_9 |= VAR_1;

 if (VAR_8)
  VAR_9 |= VAR_2;

 FUNC_6(VAR_5->jack, VAR_9,
  VAR_2 | VAR_1);

 return 0;
}
