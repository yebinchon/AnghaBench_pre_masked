
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct rt5514_priv {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;


 unsigned int VAR_10 ;



 unsigned int VAR_11 ;



 int FUNC_0 (int ,int ,int,unsigned int) ;
 struct rt5514_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_12, unsigned int VAR_13)
{
 struct snd_soc_component *VAR_14 = VAR_12->component;
 struct rt5514_priv *VAR_15 = FUNC_1(VAR_14);
 unsigned int VAR_16 = 0;

 switch (VAR_13 & VAR_11) {
 case 128:
  break;

 case 129:
  VAR_16 |= VAR_8;
  break;

 case 131:
  VAR_16 |= VAR_1;
  break;

 case 132:
  VAR_16 |= VAR_1 | VAR_8;
  break;

 default:
  return -VAR_0;
 }

 switch (VAR_13 & VAR_10) {
 case 133:
  break;

 case 130:
  VAR_16 |= VAR_4;
  break;

 case 135:
  VAR_16 |= VAR_6;
  break;

 case 134:
  VAR_16 |= VAR_7;
  break;

 default:
  return -VAR_0;
 }

 FUNC_0(VAR_15->regmap, VAR_3,
  VAR_5 | VAR_2 | VAR_9,
  VAR_16);

 return 0;
}
