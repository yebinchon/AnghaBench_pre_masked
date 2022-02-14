
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8904_priv {int mclk; int supplies; int regmap; } ;
struct snd_soc_component {int dev; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int FUNC_0 (int ) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct snd_soc_component*) ;
 struct wm8904_priv* FUNC_11 (struct snd_soc_component*) ;
 int FUNC_12 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_13(struct snd_soc_component *VAR_8,
     enum snd_soc_bias_level VAR_9)
{
 struct wm8904_priv *VAR_10 = FUNC_11(VAR_8);
 int VAR_11;

 switch (VAR_9) {
 case 130:
  break;

 case 129:

  FUNC_12(VAR_8, VAR_4,
        VAR_6,
        0x1 << VAR_7);


  FUNC_12(VAR_8, VAR_0,
        VAR_2, 2 << VAR_3);
  break;

 case 128:
  if (FUNC_10(VAR_8) == 131) {
   VAR_11 = FUNC_9(FUNC_0(VAR_10->supplies),
          VAR_10->supplies);
   if (VAR_11 != 0) {
    FUNC_3(VAR_8->dev,
     "Failed to enable supplies: %d\n",
     VAR_11);
    return VAR_11;
   }

   VAR_11 = FUNC_2(VAR_10->mclk);
   if (VAR_11) {
    FUNC_3(VAR_8->dev,
     "Failed to enable MCLK: %d\n", VAR_11);
    FUNC_8(FUNC_0(VAR_10->supplies),
             VAR_10->supplies);
    return VAR_11;
   }

   FUNC_5(VAR_10->regmap, 0);
   FUNC_7(VAR_10->regmap);


   FUNC_12(VAR_8, VAR_0,
         VAR_1, VAR_1);


   FUNC_12(VAR_8, VAR_4,
         VAR_5 |
         VAR_6,
         VAR_5 |
         0x3 << VAR_7);


   FUNC_4(1);
  }


  FUNC_12(VAR_8, VAR_4,
        VAR_6,
        0x2 << VAR_7);


  FUNC_12(VAR_8, VAR_0,
        VAR_2, 0);
  break;

 case 131:

  FUNC_12(VAR_8, VAR_4,
        VAR_6 | VAR_5, 0);


  FUNC_12(VAR_8, VAR_0,
        VAR_1, 0);

  FUNC_5(VAR_10->regmap, 1);
  FUNC_6(VAR_10->regmap);

  FUNC_8(FUNC_0(VAR_10->supplies),
           VAR_10->supplies);
  FUNC_1(VAR_10->mclk);
  break;
 }
 return 0;
}
