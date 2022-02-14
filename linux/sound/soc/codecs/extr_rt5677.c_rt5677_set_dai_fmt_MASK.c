
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct rt5677_priv {int* master; int regmap; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;




 unsigned int VAR_13 ;


 unsigned int VAR_14 ;

 unsigned int VAR_15 ;

 int FUNC_0 (int ,int ,int,unsigned int) ;
 struct rt5677_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_16, unsigned int VAR_17)
{
 struct snd_soc_component *VAR_18 = VAR_16->component;
 struct rt5677_priv *VAR_19 = FUNC_1(VAR_18);
 unsigned int VAR_20 = 0;

 switch (VAR_17 & VAR_15) {
 case 135:
  VAR_19->master[VAR_16->id] = 1;
  break;
 case 134:
  VAR_20 |= VAR_12;
  VAR_19->master[VAR_16->id] = 0;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_17 & VAR_14) {
 case 128:
  break;
 case 130:
  VAR_20 |= VAR_5;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_17 & VAR_13) {
 case 131:
  break;
 case 129:
  VAR_20 |= VAR_7;
  break;
 case 133:
  VAR_20 |= VAR_9;
  break;
 case 132:
  VAR_20 |= VAR_10;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_16->id) {
 case 139:
  FUNC_0(VAR_19->regmap, VAR_1,
   VAR_11 | VAR_6 |
   VAR_8, VAR_20);
  break;
 case 138:
  FUNC_0(VAR_19->regmap, VAR_2,
   VAR_11 | VAR_6 |
   VAR_8, VAR_20);
  break;
 case 137:
  FUNC_0(VAR_19->regmap, VAR_3,
   VAR_11 | VAR_6 |
   VAR_8, VAR_20);
  break;
 case 136:
  FUNC_0(VAR_19->regmap, VAR_4,
   VAR_11 | VAR_6 |
   VAR_8, VAR_20);
  break;
 default:
  break;
 }


 return 0;
}
