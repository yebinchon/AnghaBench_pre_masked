
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct nau8824 {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_12 ;
 int VAR_13 ;




 unsigned int VAR_14 ;


 unsigned int VAR_15 ;

 unsigned int VAR_16 ;


 int FUNC_0 (struct nau8824*,int ) ;
 int FUNC_1 (struct nau8824*) ;
 int FUNC_2 (int ,int ,unsigned int,unsigned int) ;
 struct nau8824* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_17, unsigned int VAR_18)
{
 struct snd_soc_component *VAR_19 = VAR_17->component;
 struct nau8824 *VAR_20 = FUNC_3(VAR_19);
 unsigned int VAR_21 = 0, VAR_22 = 0;

 FUNC_0(VAR_20, VAR_1);

 switch (VAR_18 & VAR_16) {
 case 136:
  VAR_22 |= VAR_10;
  break;
 case 135:
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_18 & VAR_15) {
 case 129:
  break;
 case 131:
  VAR_21 |= VAR_2;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_18 & VAR_14) {
 case 132:
  VAR_21 |= VAR_4;
  break;
 case 130:
  VAR_21 |= VAR_5;
  break;
 case 128:
  VAR_21 |= VAR_8;
  break;
 case 134:
  VAR_21 |= VAR_7;
  break;
 case 133:
  VAR_21 |= VAR_7;
  VAR_21 |= VAR_11;
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_20->regmap, VAR_12,
  VAR_6 | VAR_3 |
  VAR_11, VAR_21);
 FUNC_2(VAR_20->regmap, VAR_13,
  VAR_9, VAR_22);

 FUNC_1(VAR_20);

 return 0;
}
