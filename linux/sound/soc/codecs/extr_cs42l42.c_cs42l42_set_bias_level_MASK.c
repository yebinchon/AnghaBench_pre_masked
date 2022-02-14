
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct cs42l42_private {int supplies; int regmap; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int FUNC_0 (int ) ;




 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct snd_soc_component*) ;
 struct cs42l42_private* FUNC_7 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_component *VAR_0,
     enum snd_soc_bias_level VAR_1)
{
 struct cs42l42_private *VAR_2 = FUNC_7(VAR_0);
 int VAR_3;

 switch (VAR_1) {
 case 130:
  break;
 case 129:
  break;
 case 128:
  if (FUNC_6(VAR_0) == 131) {
   FUNC_2(VAR_2->regmap, 0);
   FUNC_3(VAR_2->regmap);
   VAR_3 = FUNC_5(
      FUNC_0(VAR_2->supplies),
      VAR_2->supplies);
   if (VAR_3 != 0) {
    FUNC_1(VAR_0->dev,
     "Failed to enable regulators: %d\n",
     VAR_3);
    return VAR_3;
   }
  }
  break;
 case 131:

  FUNC_2(VAR_2->regmap, 1);
  FUNC_4(FUNC_0(VAR_2->supplies),
          VAR_2->supplies);
  break;
 }

 return 0;
}
