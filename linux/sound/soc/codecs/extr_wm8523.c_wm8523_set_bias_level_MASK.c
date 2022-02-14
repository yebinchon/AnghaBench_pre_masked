
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8523_priv {int supplies; int regmap; } ;
struct snd_soc_component {int dev; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int FUNC_0 (int ) ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct snd_soc_component*) ;
 struct wm8523_priv* FUNC_7 (struct snd_soc_component*) ;
 int FUNC_8 (struct snd_soc_component*,int ,int ,int) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_component *VAR_2,
     enum snd_soc_bias_level VAR_3)
{
 struct wm8523_priv *VAR_4 = FUNC_7(VAR_2);
 int VAR_5;

 switch (VAR_3) {
 case 130:
  break;

 case 129:

  FUNC_8(VAR_2, VAR_0,
        VAR_1, 3);
  break;

 case 128:
  if (FUNC_6(VAR_2) == 131) {
   VAR_5 = FUNC_5(FUNC_0(VAR_4->supplies),
          VAR_4->supplies);
   if (VAR_5 != 0) {
    FUNC_1(VAR_2->dev,
     "Failed to enable supplies: %d\n",
     VAR_5);
    return VAR_5;
   }


   FUNC_3(VAR_4->regmap);


   FUNC_8(VAR_2, VAR_0,
         VAR_1, 1);

   FUNC_2(100);
  }


  FUNC_8(VAR_2, VAR_0,
        VAR_1, 2);

  break;

 case 131:

  FUNC_8(VAR_2, VAR_0,
        VAR_1, 0);
  FUNC_2(100);

  FUNC_4(FUNC_0(VAR_4->supplies),
           VAR_4->supplies);
  break;
 }
 return 0;
}
