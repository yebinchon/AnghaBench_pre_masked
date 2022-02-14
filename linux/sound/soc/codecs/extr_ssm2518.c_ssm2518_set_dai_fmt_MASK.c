
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssm2518 {int right_j; int regmap; } ;
struct snd_soc_dai {int component; } ;


 int VAR_0 ;



 unsigned int VAR_1 ;



 unsigned int VAR_2 ;

 unsigned int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 struct ssm2518* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_12, unsigned int VAR_13)
{
 struct ssm2518 *VAR_14 = FUNC_1(VAR_12->component);
 unsigned int VAR_15 = 0, VAR_16 = 0;
 bool VAR_17;
 int VAR_18;

 switch (VAR_13 & VAR_3) {
 case 137:
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_13 & VAR_2) {
 case 129:
  VAR_17 = 0;
  break;
 case 132:
  VAR_16 |= VAR_9;
  VAR_17 = 0;
  break;
 case 130:
  VAR_17 = 1;
  break;
 case 133:
  VAR_16 |= VAR_9;
  VAR_17 = 1;
  break;
 default:
  return -VAR_0;
 }

 VAR_14->right_j = 0;
 switch (VAR_13 & VAR_1) {
 case 134:
  VAR_15 |= VAR_6;
  break;
 case 131:
  VAR_15 |= VAR_7;
  VAR_17 = !VAR_17;
  break;
 case 128:
  VAR_15 |= VAR_8;
  VAR_14->right_j = 1;
  VAR_17 = !VAR_17;
  break;
 case 136:
  VAR_16 |= VAR_11;
  VAR_15 |= VAR_6;
  VAR_17 = 0;
  break;
 case 135:
  VAR_16 |= VAR_11;
  VAR_15 |= VAR_7;
  VAR_17 = 0;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_17)
  VAR_16 |= VAR_10;

 VAR_18 = FUNC_0(VAR_14->regmap, VAR_4, VAR_15);
 if (VAR_18)
  return VAR_18;

 return FUNC_0(VAR_14->regmap, VAR_5, VAR_16);
}
