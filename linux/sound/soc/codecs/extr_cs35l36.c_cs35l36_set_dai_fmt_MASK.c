
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int component; } ;
struct cs35l36_private {int regmap; } ;


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
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;


 unsigned int VAR_17 ;


 unsigned int VAR_18 ;




 unsigned int VAR_19 ;
 unsigned int VAR_20 ;


 int FUNC_0 (int ,int ,int ,unsigned int) ;
 struct cs35l36_private* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_21,
          unsigned int VAR_22)
{
 struct cs35l36_private *VAR_23 =
   FUNC_1(VAR_21->component);
 unsigned int VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;

 switch (VAR_22 & VAR_20) {
 case 137:
  VAR_27 = 1;
  break;
 case 136:
  VAR_27 = 0;
  break;
 default:
  return -VAR_16;
 }

 FUNC_0(VAR_23->regmap, VAR_3,
    VAR_14,
    VAR_27 << VAR_15);
 FUNC_0(VAR_23->regmap, VAR_2,
    VAR_8,
    VAR_27 << VAR_9);

 switch (VAR_22 & VAR_17) {
 case 135:
  VAR_28 = 1;
  break;
 case 133:
  VAR_28 = 0;
  break;
 default:
  return -VAR_16;
 }

 FUNC_0(VAR_23->regmap, VAR_3,
      VAR_10, VAR_28 <<
      VAR_11);
 FUNC_0(VAR_23->regmap, VAR_2,
      VAR_4, VAR_28 <<
      VAR_5);

 switch (VAR_22 & VAR_18) {
 case 134:
  VAR_24 = 0;
  break;
 case 132:
  VAR_24 = 2;
  break;
 default:
  return -VAR_16;
 }

 switch (VAR_22 & VAR_19) {
 case 129:
  VAR_25 = 1;
  VAR_26 = 0;
  break;
 case 130:
  VAR_25 = 0;
  VAR_26 = 1;
  break;
 case 131:
  VAR_25 = 1;
  VAR_26 = 1;
  break;
 case 128:
  VAR_25 = 0;
  VAR_26 = 0;
  break;
 default:
  return -VAR_16;
 }

 FUNC_0(VAR_23->regmap, VAR_2,
      VAR_6,
      VAR_25 << VAR_7);
 FUNC_0(VAR_23->regmap, VAR_3,
      VAR_12,
      VAR_26 << VAR_13);
 FUNC_0(VAR_23->regmap, VAR_1,
      VAR_0, VAR_24);

 return 0;
}
