
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sun4i_i2s {int regmap; } ;


 int VAR_0 ;




 unsigned int VAR_1 ;



 unsigned int VAR_2 ;

 unsigned int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_2(const struct sun4i_i2s *VAR_19,
     unsigned int VAR_20)
{
 u32 VAR_21, VAR_22;
 u8 VAR_23;
 switch (VAR_20 & VAR_2) {
 case 133:

  VAR_22 = VAR_12;
  break;
 case 132:

  VAR_22 = VAR_12 |
        VAR_14;
  break;
 case 130:

  VAR_22 = 0;
  break;
 case 129:
  VAR_22 = VAR_14;
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_19->regmap, VAR_5,
      VAR_15 |
      VAR_13,
      VAR_22);


 switch (VAR_20 & VAR_1) {
 case 136:
  VAR_21 = VAR_10;
  VAR_23 = 1;
  break;

 case 135:
  VAR_21 = VAR_10;
  VAR_23 = 0;
  break;

 case 134:
  VAR_21 = VAR_8;
  VAR_23 = 1;
  break;

 case 131:
  VAR_21 = VAR_8;
  VAR_23 = 0;
  break;

 case 128:
  VAR_21 = VAR_11;
  VAR_23 = 0;
  break;

 default:
  return -VAR_0;
 }

 FUNC_1(VAR_19->regmap, VAR_4,
      VAR_9, VAR_21);
 FUNC_1(VAR_19->regmap, VAR_18,
      VAR_17,
      FUNC_0(VAR_23));
 FUNC_1(VAR_19->regmap, VAR_16,
      VAR_17,
      FUNC_0(VAR_23));


 switch (VAR_20 & VAR_3) {
 case 137:

  VAR_22 = VAR_6 | VAR_7;
  break;

 case 138:

  VAR_22 = 0;
  break;

 default:
  return -VAR_0;
 }

 FUNC_1(VAR_19->regmap, VAR_4,
      VAR_6 | VAR_7,
      VAR_22);

 return 0;
}
