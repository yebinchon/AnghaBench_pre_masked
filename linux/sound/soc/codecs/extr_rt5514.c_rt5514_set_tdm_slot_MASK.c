
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct rt5514_priv {int regmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;
 struct rt5514_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_27, unsigned int VAR_28,
   unsigned int VAR_29, int VAR_30, int VAR_31)
{
 struct snd_soc_component *VAR_32 = VAR_27->component;
 struct rt5514_priv *VAR_33 = FUNC_1(VAR_32);
 unsigned int VAR_34 = 0, VAR_35 = 0;

 if (VAR_29 || VAR_28)
  VAR_34 |= VAR_25;

 switch (VAR_28) {
 case 0x3:
  VAR_35 |= VAR_18 | VAR_22 |
   VAR_20;
  break;

 case 0x30:
  VAR_35 |= VAR_18 | VAR_22 |
   VAR_21;
  break;

 case 0xf:
  VAR_35 |= VAR_18 | VAR_23 |
   VAR_20;
  break;

 case 0xf0:
  VAR_35 |= VAR_18 | VAR_23 |
   VAR_21;
  break;

 default:
  break;
 }



 switch (VAR_30) {
 case 4:
  VAR_34 |= VAR_10 | VAR_14;
  break;

 case 6:
  VAR_34 |= VAR_11 | VAR_15;
  break;

 case 8:
  VAR_34 |= VAR_12 | VAR_16;
  break;

 case 2:
 default:
  break;
 }

 switch (VAR_31) {
 case 20:
  VAR_34 |= VAR_0 | VAR_4;
  break;

 case 24:
  VAR_34 |= VAR_1 | VAR_5;
  break;

 case 25:
  VAR_34 |= VAR_26;
  break;

 case 32:
  VAR_34 |= VAR_2 | VAR_6;
  break;

 case 16:
 default:
  break;
 }

 FUNC_0(VAR_33->regmap, VAR_8, VAR_25 |
  VAR_13 | VAR_17 |
  VAR_3 | VAR_7 |
  VAR_26, VAR_34);

 FUNC_0(VAR_33->regmap, VAR_9,
  VAR_18 | VAR_24 |
  VAR_19, VAR_35);

 return 0;
}
