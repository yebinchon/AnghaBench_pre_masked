
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ldo_ena; } ;
struct wm8996_priv {int supplies; int regmap; TYPE_1__ pdata; } ;
struct snd_soc_component {int dev; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int FUNC_0 (int ) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct snd_soc_component*) ;
 struct wm8996_priv* FUNC_9 (struct snd_soc_component*) ;
 int FUNC_10 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct snd_soc_component *VAR_4,
     enum snd_soc_bias_level VAR_5)
{
 struct wm8996_priv *VAR_6 = FUNC_9(VAR_4);
 int VAR_7;

 switch (VAR_5) {
 case 130:
  break;
 case 129:

  FUNC_10(VAR_4, VAR_2,
        VAR_0, 0);
  FUNC_10(VAR_4, VAR_3,
        VAR_1, 0);
  break;

 case 128:
  if (FUNC_8(VAR_4) == 131) {
   VAR_7 = FUNC_7(FUNC_0(VAR_6->supplies),
          VAR_6->supplies);
   if (VAR_7 != 0) {
    FUNC_1(VAR_4->dev,
     "Failed to enable supplies: %d\n",
     VAR_7);
    return VAR_7;
   }

   if (VAR_6->pdata.ldo_ena >= 0) {
    FUNC_2(VAR_6->pdata.ldo_ena,
       1);
    FUNC_3(5);
   }

   FUNC_4(VAR_6->regmap, 0);
   FUNC_5(VAR_6->regmap);
  }


  FUNC_10(VAR_4, VAR_2,
        VAR_0, VAR_0);
  FUNC_10(VAR_4, VAR_3,
        VAR_1, VAR_1);
  break;

 case 131:
  FUNC_4(VAR_6->regmap, 1);
  if (VAR_6->pdata.ldo_ena >= 0) {
   FUNC_2(VAR_6->pdata.ldo_ena, 0);
   FUNC_4(VAR_6->regmap, 1);
  }
  FUNC_6(FUNC_0(VAR_6->supplies),
           VAR_6->supplies);
  break;
 }

 return 0;
}
