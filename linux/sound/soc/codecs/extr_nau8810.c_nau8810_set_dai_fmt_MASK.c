
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct nau8810 {int regmap; } ;


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



 unsigned int VAR_11 ;



 unsigned int VAR_12 ;

 unsigned int VAR_13 ;



 int FUNC_0 (int ,int ,int,int) ;
 struct nau8810* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_14,
  unsigned int VAR_15)
{
 struct snd_soc_component *VAR_16 = VAR_14->component;
 struct nau8810 *VAR_17 = FUNC_1(VAR_16);
 u16 VAR_18 = 0, VAR_19 = 0;

 switch (VAR_15 & VAR_13) {
 case 137:
  VAR_19 |= VAR_7;
  break;
 case 136:
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_15 & VAR_11) {
 case 134:
  VAR_18 |= VAR_1;
  break;
 case 128:
  break;
 case 131:
  VAR_18 |= VAR_2;
  break;
 case 135:
  VAR_18 |= VAR_4;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_15 & VAR_12) {
 case 129:
  break;
 case 133:
  VAR_18 |= VAR_5 | VAR_8;
  break;
 case 132:
  VAR_18 |= VAR_5;
  break;
 case 130:
  VAR_18 |= VAR_8;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_17->regmap, VAR_10,
  VAR_3 | VAR_8 |
  VAR_5, VAR_18);
 FUNC_0(VAR_17->regmap, VAR_9,
  VAR_6, VAR_19);

 return 0;
}
