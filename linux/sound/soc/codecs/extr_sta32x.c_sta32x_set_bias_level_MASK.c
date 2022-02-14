
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta32x_priv {int supplies; int gpiod_nreset; int regmap; } ;
struct snd_soc_component {int dev; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int FUNC_0 (int ) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct snd_soc_component*) ;
 struct sta32x_priv* FUNC_9 (struct snd_soc_component*) ;
 int FUNC_10 (struct snd_soc_component*) ;
 int FUNC_11 (struct sta32x_priv*) ;
 int FUNC_12 (struct sta32x_priv*) ;
 int FUNC_13 (struct sta32x_priv*) ;

__attribute__((used)) static int FUNC_14(struct snd_soc_component *VAR_3,
     enum snd_soc_bias_level VAR_4)
{
 int VAR_5;
 struct sta32x_priv *VAR_6 = FUNC_9(VAR_3);

 FUNC_1(VAR_3->dev, "level = %d\n", VAR_4);
 switch (VAR_4) {
 case 130:
  break;

 case 129:

  FUNC_5(VAR_6->regmap, VAR_0,
        VAR_2 | VAR_1,
        VAR_2 | VAR_1);
  break;

 case 128:
  if (FUNC_8(VAR_3) == 131) {
   VAR_5 = FUNC_7(FUNC_0(VAR_6->supplies),
          VAR_6->supplies);
   if (VAR_5 != 0) {
    FUNC_2(VAR_3->dev,
     "Failed to enable supplies: %d\n", VAR_5);
    return VAR_5;
   }

   FUNC_11(VAR_6);
   FUNC_10(VAR_3);
   FUNC_12(VAR_6);
  }


  FUNC_5(VAR_6->regmap, VAR_0,
       VAR_2 | VAR_1,
       0);

  break;

 case 131:

  FUNC_5(VAR_6->regmap, VAR_0,
       VAR_2 | VAR_1, 0);
  FUNC_4(300);
  FUNC_13(VAR_6);

  FUNC_3(VAR_6->gpiod_nreset, 0);

  FUNC_6(FUNC_0(VAR_6->supplies),
           VAR_6->supplies);
  break;
 }
 return 0;
}
