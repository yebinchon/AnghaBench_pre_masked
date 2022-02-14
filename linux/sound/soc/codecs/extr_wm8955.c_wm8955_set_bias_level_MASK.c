
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8955_priv {int supplies; int regmap; } ;
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
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct snd_soc_component*) ;
 struct wm8955_priv* FUNC_7 (struct snd_soc_component*) ;
 int FUNC_8 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_component *VAR_10,
     enum snd_soc_bias_level VAR_11)
{
 struct wm8955_priv *VAR_12 = FUNC_7(VAR_10);
 int VAR_13;

 switch (VAR_11) {
 case 130:
  break;

 case 129:

  FUNC_8(VAR_10, VAR_2,
        VAR_3,
        0x1 << VAR_4);


  FUNC_8(VAR_10, VAR_0,
        VAR_8,
        0x2 << VAR_9);
  break;

 case 128:
  if (FUNC_6(VAR_10) == 131) {
   VAR_13 = FUNC_5(FUNC_0(VAR_12->supplies),
          VAR_12->supplies);
   if (VAR_13 != 0) {
    FUNC_1(VAR_10->dev,
     "Failed to enable supplies: %d\n",
     VAR_13);
    return VAR_13;
   }

   FUNC_3(VAR_12->regmap);


   FUNC_8(VAR_10, VAR_2,
         VAR_5 |
         VAR_3,
         VAR_5 |
         0x3 << VAR_6);


   FUNC_2(500);


   FUNC_8(VAR_10,
         VAR_1,
         VAR_7, VAR_7);
  }


  FUNC_8(VAR_10, VAR_2,
        VAR_3,
        0x2 << VAR_4);


  FUNC_8(VAR_10, VAR_0,
        VAR_8, 0);
  break;

 case 131:

  FUNC_8(VAR_10,
        VAR_1,
        VAR_7, 0);


  FUNC_8(VAR_10, VAR_2,
        VAR_5 |
        VAR_3, 0);

  FUNC_4(FUNC_0(VAR_12->supplies),
           VAR_12->supplies);
  break;
 }
 return 0;
}
