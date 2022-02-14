
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct nau8540 {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;




 unsigned int VAR_16 ;


 unsigned int VAR_17 ;

 unsigned int VAR_18 ;


 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;
 struct nau8540* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_19, unsigned int VAR_20)
{
 struct snd_soc_component *VAR_21 = VAR_19->component;
 struct nau8540 *VAR_22 = FUNC_1(VAR_21);
 unsigned int VAR_23 = 0, VAR_24 = 0;

 switch (VAR_20 & VAR_18) {
 case 136:
  VAR_24 |= VAR_11;
  break;
 case 135:
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_20 & VAR_17) {
 case 129:
  break;
 case 131:
  VAR_23 |= VAR_1;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_20 & VAR_16) {
 case 132:
  VAR_23 |= VAR_2;
  break;
 case 130:
  VAR_23 |= VAR_3;
  break;
 case 128:
  VAR_23 |= VAR_6;
  break;
 case 134:
  VAR_23 |= VAR_5;
  break;
 case 133:
  VAR_23 |= VAR_5;
  VAR_23 |= VAR_12;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_22->regmap, VAR_13,
  VAR_7 | VAR_4 |
  VAR_1 | VAR_12, VAR_23);
 FUNC_0(VAR_22->regmap, VAR_14,
  VAR_10 | VAR_8, VAR_24);
 FUNC_0(VAR_22->regmap, VAR_15,
  VAR_9, 0);

 return 0;
}
