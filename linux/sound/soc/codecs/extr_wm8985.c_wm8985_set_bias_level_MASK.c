
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8985_priv {int supplies; int regmap; } ;
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct snd_soc_component*) ;
 struct wm8985_priv* FUNC_8 (struct snd_soc_component*) ;
 int FUNC_9 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_10 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct snd_soc_component *VAR_15,
     enum snd_soc_bias_level VAR_16)
{
 int VAR_17;
 struct wm8985_priv *VAR_18;

 VAR_18 = FUNC_8(VAR_15);
 switch (VAR_16) {
 case 130:
 case 129:

  FUNC_9(VAR_15, VAR_6,
        VAR_13,
        1 << VAR_14);
  break;
 case 128:
  if (FUNC_7(VAR_15) == 131) {
   VAR_17 = FUNC_6(FUNC_0(VAR_18->supplies),
          VAR_18->supplies);
   if (VAR_17) {
    FUNC_1(VAR_15->dev,
     "Failed to enable supplies: %d\n",
     VAR_17);
    return VAR_17;
   }

   FUNC_4(VAR_18->regmap);


   FUNC_9(VAR_15, VAR_2,
         VAR_5,
         VAR_4);

   FUNC_9(VAR_15, VAR_3,
         VAR_10, VAR_9);
   FUNC_9(VAR_15, VAR_3,
         VAR_12,
         VAR_11);

   FUNC_9(VAR_15, VAR_6,
         VAR_1, VAR_0);

   FUNC_9(VAR_15, VAR_6,
         VAR_13,
         1 << VAR_14);
   FUNC_2(500);

   FUNC_9(VAR_15, VAR_2,
         VAR_5, 0);
  }

  FUNC_9(VAR_15, VAR_6,
        VAR_13,
        2 << VAR_14);
  break;
 case 131:

  FUNC_9(VAR_15, VAR_3,
        VAR_12, 0);
  FUNC_9(VAR_15, VAR_3,
        VAR_10, 0);

  FUNC_9(VAR_15, VAR_6,
        VAR_13 | VAR_1,
        0);
  FUNC_10(VAR_15, VAR_6, 0);
  FUNC_10(VAR_15, VAR_7, 0);
  FUNC_10(VAR_15, VAR_8, 0);

  FUNC_3(VAR_18->regmap);

  FUNC_5(FUNC_0(VAR_18->supplies),
           VAR_18->supplies);
  break;
 }

 return 0;
}
