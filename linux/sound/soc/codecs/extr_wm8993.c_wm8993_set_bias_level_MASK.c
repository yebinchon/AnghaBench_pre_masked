
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lineout2_diff; int lineout1_diff; } ;
struct wm8993_priv {int supplies; int regmap; TYPE_1__ pdata; } ;
struct snd_soc_component {int dummy; } ;
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
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct snd_soc_component*) ;
 struct wm8993_priv* FUNC_8 (struct snd_soc_component*) ;
 int FUNC_9 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_10 (struct snd_soc_component*,int) ;
 int FUNC_11 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_12(struct snd_soc_component *VAR_12,
     enum snd_soc_bias_level VAR_13)
{
 struct wm8993_priv *VAR_14 = FUNC_8(VAR_12);
 int VAR_15;

 FUNC_10(VAR_12, VAR_13);

 switch (VAR_13) {
 case 130:
 case 129:

  FUNC_9(VAR_12, VAR_5,
        VAR_11, 0x2);
  FUNC_9(VAR_12, VAR_6,
        VAR_8, VAR_8);
  break;

 case 128:
  if (FUNC_7(VAR_12) == 131) {
   VAR_15 = FUNC_6(FUNC_0(VAR_14->supplies),
          VAR_14->supplies);
   if (VAR_15 != 0)
    return VAR_15;

   FUNC_2(VAR_14->regmap, 0);
   FUNC_4(VAR_14->regmap);

   FUNC_11(VAR_12);


   FUNC_9(VAR_12, VAR_1,
         VAR_7 |
         VAR_9 |
         VAR_10 |
         VAR_3,
         VAR_7 |
         VAR_9 |
         VAR_10 |
         VAR_3);



   if (!VAR_14->pdata.lineout1_diff ||
       !VAR_14->pdata.lineout2_diff)
    FUNC_9(VAR_12, VAR_0,
       VAR_4,
       VAR_4);


   FUNC_9(VAR_12, VAR_5,
         VAR_11 |
         VAR_2,
         VAR_2 | 0x2);
   FUNC_1(32);


   FUNC_9(VAR_12, VAR_1,
         VAR_3 |
         VAR_7, 0);
  }


  FUNC_9(VAR_12, VAR_5,
        VAR_11, 0x4);

  FUNC_9(VAR_12, VAR_6,
        VAR_8, 0);
  break;

 case 131:
  FUNC_9(VAR_12, VAR_0,
        VAR_4, 0);

  FUNC_9(VAR_12, VAR_5,
        VAR_11 | VAR_2,
        0);

  FUNC_9(VAR_12, VAR_1,
        VAR_7 |
        VAR_9 |
        VAR_10 |
        VAR_3, 0);

  FUNC_2(VAR_14->regmap, 1);
  FUNC_3(VAR_14->regmap);

  FUNC_5(FUNC_0(VAR_14->supplies),
           VAR_14->supplies);
  break;
 }

 return 0;
}
