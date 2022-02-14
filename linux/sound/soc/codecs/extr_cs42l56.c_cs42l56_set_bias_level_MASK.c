
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct cs42l56_private {int supplies; int regmap; int dev; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct snd_soc_component*) ;
 struct cs42l56_private* FUNC_7 (struct snd_soc_component*) ;
 int FUNC_8 (struct snd_soc_component*,int ,int ,int) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_component *VAR_4,
     enum snd_soc_bias_level VAR_5)
{
 struct cs42l56_private *VAR_6 = FUNC_7(VAR_4);
 int VAR_7;

 switch (VAR_5) {
 case 130:
  break;
 case 129:
  FUNC_8(VAR_4, VAR_0,
        VAR_1, 0);
  FUNC_8(VAR_4, VAR_3,
        VAR_2, 0);
  break;
 case 128:
  if (FUNC_6(VAR_4) == 131) {
   FUNC_2(VAR_6->regmap, 0);
   FUNC_3(VAR_6->regmap);
   VAR_7 = FUNC_5(FUNC_0(VAR_6->supplies),
          VAR_6->supplies);
   if (VAR_7 != 0) {
    FUNC_1(VAR_6->dev,
     "Failed to enable regulators: %d\n",
     VAR_7);
    return VAR_7;
   }
  }
  FUNC_8(VAR_4, VAR_3,
        VAR_2, 1);
  break;
 case 131:
  FUNC_8(VAR_4, VAR_3,
        VAR_2, 1);
  FUNC_8(VAR_4, VAR_0,
        VAR_1, 1);
  FUNC_2(VAR_6->regmap, 1);
  FUNC_4(FUNC_0(VAR_6->supplies),
          VAR_6->supplies);
  break;
 }

 return 0;
}
