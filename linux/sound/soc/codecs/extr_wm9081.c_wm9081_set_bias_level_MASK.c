
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm9081_priv {int regmap; } ;
struct snd_soc_component {int dummy; } ;
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
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct snd_soc_component*) ;
 struct wm9081_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_9,
     enum snd_soc_bias_level VAR_10)
{
 struct wm9081_priv *VAR_11 = FUNC_4(VAR_9);

 switch (VAR_10) {
 case 130:
  break;

 case 129:

  FUNC_5(VAR_9, VAR_6,
        VAR_8, 0x2);


  FUNC_5(VAR_9, VAR_1,
        VAR_5, 0);
  break;

 case 128:

  if (FUNC_3(VAR_9) == 131) {
   FUNC_1(VAR_11->regmap, 0);
   FUNC_2(VAR_11->regmap);


   FUNC_5(VAR_9, VAR_0,
         VAR_4, 0);


   FUNC_5(VAR_9, VAR_1,
         VAR_3 | VAR_2,
         VAR_3 | VAR_2);


   FUNC_5(VAR_9, VAR_6,
         VAR_7 |
         VAR_8,
         VAR_7 | 0x6);

   FUNC_0(100);


   FUNC_5(VAR_9, VAR_6,
         VAR_7, 0);


   FUNC_5(VAR_9, VAR_1,
         VAR_3, 0);
  }


  FUNC_5(VAR_9, VAR_6,
        VAR_8, 0x04);


  FUNC_5(VAR_9, VAR_1,
        VAR_5,
        VAR_5);
  break;

 case 131:

  FUNC_5(VAR_9, VAR_1,
        VAR_3 | VAR_2,
        VAR_3);


  FUNC_5(VAR_9, VAR_6,
        VAR_7 | VAR_8,
        VAR_7);


  FUNC_5(VAR_9, VAR_0,
        VAR_4,
        VAR_4);

  FUNC_1(VAR_11->regmap, 1);
  break;
 }

 return 0;
}
