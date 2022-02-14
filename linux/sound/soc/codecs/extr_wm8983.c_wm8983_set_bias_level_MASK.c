
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8983_priv {int regmap; } ;
struct snd_soc_component {int dev; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct snd_soc_component*) ;
 struct wm8983_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_6 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_15,
     enum snd_soc_bias_level VAR_16)
{
 struct wm8983_priv *VAR_17 = FUNC_4(VAR_15);
 int VAR_18;

 switch (VAR_16) {
 case 130:
 case 129:

  FUNC_5(VAR_15, VAR_8,
        VAR_13,
        1 << VAR_14);
  break;
 case 128:
  if (FUNC_3(VAR_15) == 131) {
   VAR_18 = FUNC_2(VAR_17->regmap);
   if (VAR_18 < 0) {
    FUNC_0(VAR_15->dev, "Failed to sync cache: %d\n", VAR_18);
    return VAR_18;
   }

   FUNC_5(VAR_15, VAR_4,
         VAR_7 | VAR_3,
         VAR_6 | VAR_2);

   FUNC_5(VAR_15, VAR_5,
         VAR_12, VAR_11);

   FUNC_5(VAR_15, VAR_8,
         VAR_1, VAR_0);

   FUNC_5(VAR_15, VAR_8,
         VAR_13,
         1 << VAR_14);
   FUNC_1(250);

   FUNC_5(VAR_15, VAR_4,
         VAR_7 |
         VAR_3, 0);
  }


  FUNC_5(VAR_15, VAR_8,
        VAR_13,
        2 << VAR_14);
  break;
 case 131:

  FUNC_5(VAR_15, VAR_5,
        VAR_12, 0);

  FUNC_5(VAR_15, VAR_8,
        VAR_13 | VAR_1,
        0);

  FUNC_1(100);
  FUNC_6(VAR_15, VAR_8, 0);
  FUNC_6(VAR_15, VAR_9, 0);
  FUNC_6(VAR_15, VAR_10, 0);
  break;
 }

 return 0;
}
