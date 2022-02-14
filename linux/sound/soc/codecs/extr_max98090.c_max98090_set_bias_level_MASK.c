
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct max98090_priv {int regmap; int mclk; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;




 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct snd_soc_component*) ;
 struct max98090_priv* FUNC_7 (struct snd_soc_component*) ;
 int FUNC_8 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_component *VAR_2,
       enum snd_soc_bias_level VAR_3)
{
 struct max98090_priv *VAR_4 = FUNC_7(VAR_2);
 int VAR_5;

 switch (VAR_3) {
 case 130:
  break;

 case 129:







  if (FUNC_0(VAR_4->mclk))
   break;

  if (FUNC_6(VAR_2) == 130) {
   FUNC_1(VAR_4->mclk);
  } else {
   VAR_5 = FUNC_2(VAR_4->mclk);
   if (VAR_5)
    return VAR_5;
  }
  break;

 case 128:
  if (FUNC_6(VAR_2) == 131) {
   VAR_5 = FUNC_5(VAR_4->regmap);
   if (VAR_5 != 0) {
    FUNC_3(VAR_2->dev,
     "Failed to sync cache: %d\n", VAR_5);
    return VAR_5;
   }
  }
  break;

 case 131:

  FUNC_8(VAR_2, VAR_1,
   VAR_0, VAR_0);
  FUNC_4(VAR_4->regmap);
  break;
 }
 return 0;
}
