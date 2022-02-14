
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssm4567 {int regmap; } ;
struct snd_soc_dai {int dummy; } ;


 int VAR_0 ;



 unsigned int VAR_1 ;



 unsigned int VAR_2 ;

 unsigned int VAR_3 ;



 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;
 struct ssm4567* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_10, unsigned int VAR_11)
{
 struct ssm4567 *VAR_12 = FUNC_1(VAR_10);
 unsigned int VAR_13 = 0;
 bool VAR_14;

 switch (VAR_11 & VAR_3) {
 case 137:
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_11 & VAR_2) {
 case 129:
  VAR_14 = 0;
  break;
 case 132:
  VAR_13 |= VAR_5;
  VAR_14 = 0;
  break;
 case 130:
  VAR_13 |= VAR_6;
  VAR_14 = 1;
  break;
 case 133:
  VAR_13 |= VAR_5;
  VAR_14 = 1;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_11 & VAR_1) {
 case 134:
  break;
 case 131:
  VAR_13 |= VAR_7;
  VAR_14 = !VAR_14;
  break;
 case 136:
  VAR_13 |= VAR_9;
  break;
 case 135:
  VAR_13 |= VAR_9 | VAR_7;
  break;
 case 128:
  VAR_13 |= VAR_8;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_14)
  VAR_13 |= VAR_6;

 return FUNC_0(VAR_12->regmap, VAR_4,
   VAR_5 |
   VAR_6 |
   VAR_7 |
   VAR_9 |
   VAR_8,
   VAR_13);
}
