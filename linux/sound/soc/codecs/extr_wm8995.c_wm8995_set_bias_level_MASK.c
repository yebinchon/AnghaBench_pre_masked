
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8995_priv {int supplies; int regmap; } ;
struct snd_soc_component {int dev; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int FUNC_0 (int ) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct snd_soc_component*) ;
 struct wm8995_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_component *VAR_3,
     enum snd_soc_bias_level VAR_4)
{
 struct wm8995_priv *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_6(VAR_3);
 switch (VAR_4) {
 case 130:
 case 129:
  break;
 case 128:
  if (FUNC_5(VAR_3) == 131) {
   VAR_6 = FUNC_4(FUNC_0(VAR_5->supplies),
          VAR_5->supplies);
   if (VAR_6)
    return VAR_6;

   VAR_6 = FUNC_2(VAR_5->regmap);
   if (VAR_6) {
    FUNC_1(VAR_3->dev,
     "Failed to sync cache: %d\n", VAR_6);
    return VAR_6;
   }

   FUNC_7(VAR_3, VAR_2,
         VAR_1, VAR_0);
  }
  break;
 case 131:
  FUNC_7(VAR_3, VAR_2,
        VAR_1, 0);
  FUNC_3(FUNC_0(VAR_5->supplies),
           VAR_5->supplies);
  break;
 }

 return 0;
}
