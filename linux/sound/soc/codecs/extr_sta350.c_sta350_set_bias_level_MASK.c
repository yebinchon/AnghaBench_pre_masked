
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta350_priv {int supplies; int gpiod_nreset; int gpiod_power_down; int regmap; } ;
struct snd_soc_component {int dev; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int FUNC_0 (int ) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct snd_soc_component*) ;
 struct sta350_priv* FUNC_8 (struct snd_soc_component*) ;
 int FUNC_9 (struct snd_soc_component*) ;
 int FUNC_10 (struct sta350_priv*) ;

__attribute__((used)) static int FUNC_11(struct snd_soc_component *VAR_3,
     enum snd_soc_bias_level VAR_4)
{
 struct sta350_priv *VAR_5 = FUNC_8(VAR_3);
 int VAR_6;

 FUNC_1(VAR_3->dev, "level = %d\n", VAR_4);
 switch (VAR_4) {
 case 130:
  break;

 case 129:

  FUNC_4(VAR_5->regmap, VAR_0,
       VAR_2 | VAR_1,
       VAR_2 | VAR_1);
  break;

 case 128:
  if (FUNC_7(VAR_3) == 131) {
   VAR_6 = FUNC_6(
    FUNC_0(VAR_5->supplies),
    VAR_5->supplies);
   if (VAR_6 < 0) {
    FUNC_2(VAR_3->dev,
     "Failed to enable supplies: %d\n",
     VAR_6);
    return VAR_6;
   }
   FUNC_10(VAR_5);
   FUNC_9(VAR_3);
  }


  FUNC_4(VAR_5->regmap, VAR_0,
       VAR_2 | VAR_1,
       0);

  break;

 case 131:

  FUNC_4(VAR_5->regmap, VAR_0,
       VAR_2 | VAR_1, 0);


  if (VAR_5->gpiod_power_down)
   FUNC_3(VAR_5->gpiod_power_down, 0);

  if (VAR_5->gpiod_nreset)
   FUNC_3(VAR_5->gpiod_nreset, 0);

  FUNC_5(FUNC_0(VAR_5->supplies),
           VAR_5->supplies);
  break;
 }
 return 0;
}
