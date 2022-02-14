
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8991_priv {int regmap; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct snd_soc_component*) ;
 struct wm8991_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ) ;
 int FUNC_6 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_17,
     enum snd_soc_bias_level VAR_18)
{
 struct wm8991_priv *VAR_19 = FUNC_4(VAR_17);
 u16 VAR_20;

 switch (VAR_18) {
 case 130:
  break;

 case 129:

  VAR_20 = FUNC_5(VAR_17, VAR_13) &
        ~VAR_16;
  FUNC_6(VAR_17, VAR_13, VAR_20 | 0x2);
  break;

 case 128:
  if (FUNC_3(VAR_17) == 131) {
   FUNC_2(VAR_19->regmap);

   FUNC_6(VAR_17, VAR_0, VAR_6 |
          VAR_10 | VAR_8 |
          VAR_9 | VAR_7 |
          VAR_11);


   FUNC_6(VAR_17, VAR_1, VAR_14 |
          VAR_2 | VAR_12 |
          VAR_15);


   FUNC_0(300);


   FUNC_6(VAR_17, VAR_1, VAR_14 |
          VAR_2 | VAR_12);


   FUNC_6(VAR_17, VAR_0, 0);


   FUNC_6(VAR_17, VAR_13, 0x1b00);

   FUNC_0(50);


   FUNC_6(VAR_17, VAR_13, 0x1f02);

   FUNC_0(100);


   FUNC_6(VAR_17, VAR_13, 0x1f03);

   FUNC_0(600);


   FUNC_6(VAR_17, VAR_1, VAR_14 |
          VAR_2 | VAR_12 |
          VAR_3);


   FUNC_6(VAR_17, VAR_13, 0x3);


   FUNC_6(VAR_17, VAR_1, VAR_3);
  }


  VAR_20 = FUNC_5(VAR_17, VAR_13) &
        ~VAR_16;
  FUNC_6(VAR_17, VAR_13, VAR_20 | 0x4);
  break;

 case 131:

  FUNC_6(VAR_17, VAR_1, VAR_14 |
         VAR_12 | VAR_3);


  FUNC_6(VAR_17, VAR_1, VAR_14 |
         VAR_2 | VAR_12 |
         VAR_3);


  VAR_20 = FUNC_5(VAR_17, VAR_4);
  FUNC_6(VAR_17, VAR_4, VAR_20 | VAR_5);


  FUNC_6(VAR_17, VAR_13, 0x1f03);


  FUNC_6(VAR_17, VAR_13, 0x1f01);

  FUNC_0(300);


  FUNC_6(VAR_17, VAR_0, VAR_6 |
         VAR_10 | VAR_8 |
         VAR_9 | VAR_7 |
         VAR_11);


  FUNC_6(VAR_17, VAR_13, 0x0);


  FUNC_6(VAR_17, VAR_1, 0x0);
  FUNC_1(VAR_19->regmap);
  break;
 }

 return 0;
}
