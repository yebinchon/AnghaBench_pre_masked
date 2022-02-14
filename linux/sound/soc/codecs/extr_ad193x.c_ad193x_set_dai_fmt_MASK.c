
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int component; } ;
struct ad193x_priv {int regmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 int VAR_20 ;





 unsigned int VAR_21 ;



 unsigned int VAR_22 ;
 unsigned int VAR_23 ;


 scalar_t__ FUNC_0 (struct ad193x_priv*) ;
 int FUNC_1 (int ,int ,int ,unsigned int) ;
 struct ad193x_priv* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_24,
  unsigned int VAR_25)
{
 struct ad193x_priv *VAR_26 = FUNC_2(VAR_24->component);
 unsigned int VAR_27 = 0;
 unsigned int VAR_28 = 0;
 unsigned int VAR_29 = 0;
 unsigned int VAR_30 = 0;





 switch (VAR_25 & VAR_21) {
 case 132:
  VAR_27 |= VAR_9;
  VAR_28 |= VAR_18;
  break;
 case 133:
  VAR_27 |= VAR_7;
  VAR_28 |= VAR_19;
  break;
 default:
  if (FUNC_0(VAR_26))
   return -VAR_20;
 }

 switch (VAR_25 & VAR_22) {
 case 128:
  break;
 case 129:
  VAR_29 |= VAR_6;
  VAR_30 |= VAR_16;
  break;
 case 130:
  VAR_29 |= VAR_0;
  VAR_30 |= VAR_10;
  break;
 case 131:
  VAR_29 |= VAR_6;
  VAR_29 |= VAR_0;
  VAR_30 |= VAR_16;
  VAR_30 |= VAR_10;
  break;
 default:
  return -VAR_20;
 }


 if (VAR_25 & 133)
  VAR_30 ^= VAR_16;

 switch (VAR_25 & VAR_23) {
 case 137:
  VAR_29 |= VAR_5;
  VAR_29 |= VAR_1;
  VAR_30 |= VAR_15;
  VAR_30 |= VAR_11;
  break;
 case 135:
  VAR_29 |= VAR_5;
  VAR_30 |= VAR_15;
  break;
 case 136:
  VAR_29 |= VAR_1;
  VAR_30 |= VAR_11;
  break;
 case 134:
  break;
 default:
  return -VAR_20;
 }

 if (FUNC_0(VAR_26)) {
  FUNC_1(VAR_26->regmap, VAR_2,
       VAR_8, VAR_27);
  FUNC_1(VAR_26->regmap, VAR_3,
       VAR_4, VAR_29);
 }
 FUNC_1(VAR_26->regmap, VAR_12,
      VAR_17, VAR_28);
 FUNC_1(VAR_26->regmap, VAR_13,
  VAR_14, VAR_30);

 return 0;
}
