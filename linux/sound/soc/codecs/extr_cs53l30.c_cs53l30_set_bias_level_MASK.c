
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int bias_level; } ;
struct snd_soc_component {int dev; } ;
struct cs53l30_private {int mclk; int regmap; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 int FUNC_5 (int ,int ,unsigned int,unsigned int) ;
 struct snd_soc_dapm_context* FUNC_6 (struct snd_soc_component*) ;
 struct cs53l30_private* FUNC_7 (struct snd_soc_component*) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_component *VAR_13,
      enum snd_soc_bias_level VAR_14)
{
 struct snd_soc_dapm_context *VAR_15 = FUNC_6(VAR_13);
 struct cs53l30_private *VAR_16 = FUNC_7(VAR_13);
 unsigned int VAR_17;
 int VAR_18, VAR_19, VAR_20;

 switch (VAR_14) {
 case 130:
  break;
 case 129:
  if (VAR_15->bias_level == 128)
   FUNC_5(VAR_16->regmap, VAR_11,
        VAR_7, 0);
  break;
 case 128:
  if (VAR_15->bias_level == 131) {
   VAR_20 = FUNC_1(VAR_16->mclk);
   if (VAR_20) {
    FUNC_2(VAR_13->dev,
     "failed to enable MCLK: %d\n", VAR_20);
    return VAR_20;
   }
   FUNC_5(VAR_16->regmap, VAR_3,
        VAR_5, 0);
   FUNC_5(VAR_16->regmap, VAR_11,
        VAR_10, 0);
   FUNC_3(50);
  } else {
   FUNC_5(VAR_16->regmap, VAR_11,
        VAR_10,
        VAR_9);
  }
  break;
 case 131:
  FUNC_5(VAR_16->regmap, VAR_1,
       VAR_6, 0);







  FUNC_4(VAR_16->regmap, VAR_12, &VAR_17);
  if (VAR_17 & VAR_0)
   VAR_19 = VAR_8;
  else
   VAR_19 = 10;

  FUNC_5(VAR_16->regmap, VAR_11,
       VAR_10,
       VAR_9);

  FUNC_3(20);

  FUNC_4(VAR_16->regmap, VAR_2, &VAR_17);
  for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++) {
   if (VAR_19 < 10) {
    FUNC_8(1000, 1100);
    FUNC_4(VAR_16->regmap, VAR_2, &VAR_17);
    if (VAR_17 & VAR_6)
     break;
   } else {
    FUNC_8(10000, 10100);
    FUNC_4(VAR_16->regmap, VAR_2, &VAR_17);
    if (VAR_17 & VAR_6)
     break;
   }
  }

  FUNC_5(VAR_16->regmap, VAR_1,
       VAR_6, VAR_6);
  FUNC_5(VAR_16->regmap, VAR_3,
       VAR_5,
       VAR_4);
  FUNC_0(VAR_16->mclk);
  break;
 }

 return 0;
}
