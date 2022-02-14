
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct da732x_priv {int pll_en; int regmap; } ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;




 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct snd_soc_component*) ;
 struct da732x_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,int ,int,int ) ;
 int FUNC_8 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_component *VAR_42,
     enum snd_soc_bias_level VAR_43)
{
 struct da732x_priv *VAR_44 = FUNC_6(VAR_42);

 switch (VAR_43) {
 case 130:
  FUNC_7(VAR_42, VAR_29,
        VAR_4,
        VAR_2);
  break;
 case 129:
  break;
 case 128:
  if (FUNC_5(VAR_42) == 131) {

   FUNC_8(VAR_42, VAR_37,
          VAR_41);
   FUNC_8(VAR_42, VAR_29,
          VAR_6);

   FUNC_2(VAR_39);


   FUNC_8(VAR_42, VAR_37,
          VAR_28);


   FUNC_8(VAR_42, VAR_31,
          VAR_7);


   FUNC_8(VAR_42, VAR_32,
          VAR_8);

   FUNC_8(VAR_42, VAR_38,
          VAR_13 |
          VAR_14 |
          VAR_15);
   FUNC_8(VAR_42, VAR_33,
          VAR_16);

   FUNC_1(VAR_42, VAR_10);

   FUNC_8(VAR_42, VAR_30,
         VAR_40 | VAR_26);


   FUNC_8(VAR_42, VAR_34,
          VAR_20 |
          VAR_21 |
          VAR_22 |
          VAR_23 |
          VAR_0 |
          VAR_1 |
          VAR_24 |
          VAR_25);
   FUNC_8(VAR_42, VAR_35,
          VAR_11 | VAR_12 |
          VAR_17 | VAR_18 |
          VAR_19);

   FUNC_0(VAR_42);

   FUNC_3(VAR_44->regmap, 0);
   FUNC_4(VAR_44->regmap);
  } else {
   FUNC_7(VAR_42, VAR_29,
         VAR_4,
         VAR_3);
   FUNC_7(VAR_42, VAR_36,
         VAR_27, 0);
   VAR_44->pll_en = 0;
  }
  break;
 case 131:
  FUNC_3(VAR_44->regmap, 1);
  FUNC_1(VAR_42, VAR_9);
  FUNC_7(VAR_42, VAR_29, VAR_6,
        VAR_5);
  VAR_44->pll_en = 0;
  break;
 }

 return 0;
}
