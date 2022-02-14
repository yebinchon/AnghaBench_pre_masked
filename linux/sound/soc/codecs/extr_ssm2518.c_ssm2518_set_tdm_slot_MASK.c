
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssm2518 {int regmap; } ;
struct snd_soc_dai {int component; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int ,int ,unsigned int) ;
 int FUNC_2 (int ,int ,int) ;
 struct ssm2518* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_17, unsigned int VAR_18,
 unsigned int VAR_19, int VAR_20, int VAR_21)
{
 struct ssm2518 *VAR_22 = FUNC_3(VAR_17->component);
 unsigned int VAR_23, VAR_24;
 int VAR_25, VAR_26;
 int VAR_27;

 if (VAR_20 == 0)
  return FUNC_1(VAR_22->regmap,
   VAR_4, VAR_7,
   VAR_6);

 if (VAR_18 == 0 || VAR_19 != 0)
  return -VAR_0;

 if (VAR_20 == 1) {
  if (VAR_18 != 1)
   return -VAR_0;
  VAR_25 = 0;
  VAR_26 = 0;
 } else {

  VAR_25 = FUNC_0(VAR_18);
  VAR_18 &= ~(1 << VAR_25);
  if (VAR_18 == 0) {
   VAR_26 = VAR_25;
  } else {
   VAR_26 = FUNC_0(VAR_18);
   VAR_18 &= ~(1 << VAR_26);
  }
 }

 if (VAR_18 != 0 || VAR_25 >= VAR_20 || VAR_26 >= VAR_20)
  return -VAR_0;

 switch (VAR_21) {
 case 16:
  VAR_24 = VAR_13;
  break;
 case 24:
  VAR_24 = VAR_14;
  break;
 case 32:
  VAR_24 = VAR_15;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_20) {
 case 1:
  VAR_23 = VAR_8;
  break;
 case 2:
  VAR_23 = VAR_10;
  break;
 case 4:
  VAR_23 = VAR_11;
  break;
 case 8:
  VAR_23 = VAR_12;
  break;
 case 16:
  VAR_23 = VAR_9;
  break;
 default:
  return -VAR_0;
 }

 VAR_27 = FUNC_2(VAR_22->regmap, VAR_3,
  (VAR_25 << VAR_1) |
  (VAR_26 << VAR_2));
 if (VAR_27)
  return VAR_27;

 VAR_27 = FUNC_1(VAR_22->regmap, VAR_4,
  VAR_7, VAR_23);
 if (VAR_27)
  return VAR_27;

 return FUNC_1(VAR_22->regmap, VAR_5,
  VAR_16, VAR_24);
}
