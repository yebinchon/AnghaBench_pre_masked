
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int component; } ;
struct adau1977 {int master; int right_j; int regmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;




 unsigned int VAR_12 ;



 unsigned int VAR_13 ;

 unsigned int VAR_14 ;



 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;
 struct adau1977* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_15, unsigned int VAR_16)
{
 struct adau1977 *VAR_17 = FUNC_1(VAR_15->component);
 unsigned int VAR_18 = 0, VAR_19 = 0, VAR_20 = 0;
 bool VAR_21;
 int VAR_22;

 switch (VAR_16 & VAR_14) {
 case 137:
  VAR_17->master = 0;
  break;
 case 138:
  VAR_19 |= VAR_10;
  VAR_17->master = 1;
  break;
 default:
  return -VAR_11;
 }

 switch (VAR_16 & VAR_13) {
 case 129:
  VAR_21 = 0;
  break;
 case 132:
  VAR_20 |= VAR_0;
  VAR_21 = 0;
  break;
 case 130:
  VAR_21 = 1;
  break;
 case 133:
  VAR_20 |= VAR_0;
  VAR_21 = 1;
  break;
 default:
  return -VAR_11;
 }

 VAR_17->right_j = 0;
 switch (VAR_16 & VAR_12) {
 case 134:
  VAR_18 |= VAR_5;
  break;
 case 131:
  VAR_18 |= VAR_6;
  VAR_21 = !VAR_21;
  break;
 case 128:
  VAR_18 |= VAR_8;
  VAR_17->right_j = 1;
  VAR_21 = !VAR_21;
  break;
 case 136:
  VAR_19 |= VAR_9;
  VAR_18 |= VAR_5;
  VAR_21 = 0;
  break;
 case 135:
  VAR_19 |= VAR_9;
  VAR_18 |= VAR_6;
  VAR_21 = 0;
  break;
 default:
  return -VAR_11;
 }

 if (VAR_21)
  VAR_20 |= VAR_1;

 VAR_22 = FUNC_0(VAR_17->regmap, VAR_2,
  VAR_1 |
  VAR_0, VAR_20);
 if (VAR_22)
  return VAR_22;

 VAR_22 = FUNC_0(VAR_17->regmap, VAR_3,
  VAR_7,
  VAR_18);
 if (VAR_22)
  return VAR_22;

 return FUNC_0(VAR_17->regmap, VAR_4,
  VAR_10 | VAR_9,
  VAR_19);
}
