
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssm2602_priv {int regmap; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ) ;
 struct snd_soc_dapm_context* FUNC_3 (struct snd_soc_component*) ;
 struct ssm2602_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_dapm_context*,int ,int ) ;
 int FUNC_6 (struct snd_soc_dapm_context*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_7)
{
 struct snd_soc_dapm_context *VAR_8 = FUNC_3(VAR_7);
 struct ssm2602_priv *VAR_9 = FUNC_4(VAR_7);
 int VAR_10;

 FUNC_1(VAR_9->regmap, VAR_2,
       VAR_0, VAR_0);
 FUNC_1(VAR_9->regmap, VAR_3,
       VAR_1, VAR_1);

 VAR_10 = FUNC_2(VAR_7, VAR_6,
   FUNC_0(VAR_6));
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_6(VAR_8, VAR_4,
   FUNC_0(VAR_4));
 if (VAR_10)
  return VAR_10;

 return FUNC_5(VAR_8, VAR_5,
   FUNC_0(VAR_5));
}
