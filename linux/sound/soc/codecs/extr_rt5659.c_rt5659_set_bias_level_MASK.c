
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int bias_level; } ;
struct snd_soc_component {int dev; } ;
struct rt5659_priv {int mclk; int regmap; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int,int) ;
 struct snd_soc_dapm_context* FUNC_5 (struct snd_soc_component*) ;
 struct rt5659_priv* FUNC_6 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_10,
   enum snd_soc_bias_level VAR_11)
{
 struct snd_soc_dapm_context *VAR_12 = FUNC_5(VAR_10);
 struct rt5659_priv *VAR_13 = FUNC_6(VAR_10);
 int VAR_14;

 switch (VAR_11) {
 case 129:
  FUNC_4(VAR_13->regmap, VAR_1,
   VAR_0, VAR_0);
  FUNC_4(VAR_13->regmap, VAR_3,
   VAR_6, VAR_6);
  FUNC_4(VAR_13->regmap, VAR_2,
   VAR_7 | VAR_8 | VAR_9,
   VAR_7 | VAR_8 | VAR_9);
  FUNC_3(20);
  FUNC_4(VAR_13->regmap, VAR_2,
   VAR_4 | VAR_5,
   VAR_4 | VAR_5);
  break;

 case 128:
  if (VAR_12->bias_level == 130) {
   VAR_14 = FUNC_1(VAR_13->mclk);
   if (VAR_14) {
    FUNC_2(VAR_10->dev,
     "failed to enable MCLK: %d\n", VAR_14);
    return VAR_14;
   }
  }
  break;

 case 130:
  FUNC_4(VAR_13->regmap, VAR_3,
   VAR_6, 0);
  FUNC_4(VAR_13->regmap, VAR_2,
   VAR_7 | VAR_8 | VAR_9
   | VAR_4 | VAR_5,
   VAR_7 | VAR_9);
  FUNC_4(VAR_13->regmap, VAR_1,
   VAR_0, 0);
  FUNC_0(VAR_13->mclk);
  break;

 default:
  break;
 }

 return 0;
}
