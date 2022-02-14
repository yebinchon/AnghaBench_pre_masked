
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8737_priv {int supplies; int regmap; } ;
struct snd_soc_component {int dev; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int FUNC_0 (int ) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct snd_soc_component*) ;
 struct wm8737_priv* FUNC_7 (struct snd_soc_component*) ;
 int FUNC_8 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_component *VAR_6,
     enum snd_soc_bias_level VAR_7)
{
 struct wm8737_priv *VAR_8 = FUNC_7(VAR_6);
 int VAR_9;

 switch (VAR_7) {
 case 130:
  break;

 case 129:

  FUNC_8(VAR_6, VAR_0,
        VAR_2, 0);
  break;

 case 128:
  if (FUNC_6(VAR_6) == 131) {
   VAR_9 = FUNC_5(FUNC_0(VAR_8->supplies),
          VAR_8->supplies);
   if (VAR_9 != 0) {
    FUNC_1(VAR_6->dev,
     "Failed to enable supplies: %d\n",
     VAR_9);
    return VAR_9;
   }

   FUNC_3(VAR_8->regmap);


   FUNC_8(VAR_6, VAR_0,
         VAR_2,
         2 << VAR_3);


   FUNC_8(VAR_6, VAR_1,
         VAR_4 |
         VAR_5,
         VAR_4 |
         VAR_5);

   FUNC_2(500);
  }


  FUNC_8(VAR_6, VAR_0,
        VAR_2,
        1 << VAR_3);

  break;

 case 131:
  FUNC_8(VAR_6, VAR_1,
        VAR_4 | VAR_5, 0);

  FUNC_4(FUNC_0(VAR_8->supplies),
           VAR_8->supplies);
  break;
 }

 return 0;
}
