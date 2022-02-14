
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_jack {int status; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct rt286_priv {int regmap; struct snd_soc_jack* jack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int) ;
 struct snd_soc_dapm_context* FUNC_1 (struct snd_soc_component*) ;
 struct rt286_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_4 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_5 (struct snd_soc_dapm_context*) ;
 int FUNC_6 (struct snd_soc_jack*,int,int) ;

int FUNC_7(struct snd_soc_component *VAR_3, struct snd_soc_jack *VAR_4)
{
 struct snd_soc_dapm_context *VAR_5 = FUNC_1(VAR_3);
 struct rt286_priv *VAR_6 = FUNC_2(VAR_3);

 VAR_6->jack = VAR_4;

 if (VAR_4) {

  if (VAR_6->jack->status & VAR_1)
   FUNC_4(VAR_5, "LDO1");
  FUNC_0(VAR_6->regmap, VAR_0, 0x2, 0x2);

  FUNC_6(VAR_6->jack, VAR_6->jack->status,
   VAR_2 | VAR_1);
 } else {

  FUNC_0(VAR_6->regmap, VAR_0, 0x2, 0x0);
  FUNC_3(VAR_5, "LDO1");
 }
 FUNC_5(VAR_5);

 return 0;
}
