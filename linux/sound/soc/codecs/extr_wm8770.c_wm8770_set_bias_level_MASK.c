
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8770_priv {int supplies; int regmap; } ;
struct snd_soc_component {int dev; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int FUNC_0 (int ) ;




 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct snd_soc_component*) ;
 struct wm8770_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_component *VAR_1,
     enum snd_soc_bias_level VAR_2)
{
 int VAR_3;
 struct wm8770_priv *VAR_4;

 VAR_4 = FUNC_6(VAR_1);

 switch (VAR_2) {
 case 130:
  break;
 case 129:
  break;
 case 128:
  if (FUNC_5(VAR_1) == 131) {
   VAR_3 = FUNC_4(FUNC_0(VAR_4->supplies),
          VAR_4->supplies);
   if (VAR_3) {
    FUNC_1(VAR_1->dev,
     "Failed to enable supplies: %d\n",
     VAR_3);
    return VAR_3;
   }

   FUNC_2(VAR_4->regmap);


   FUNC_7(VAR_1, VAR_0, 0);
  }
  break;
 case 131:

  FUNC_7(VAR_1, VAR_0, 1);
  FUNC_3(FUNC_0(VAR_4->supplies),
           VAR_4->supplies);
  break;
 }

 return 0;
}
