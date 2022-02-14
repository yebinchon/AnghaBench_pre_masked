
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_1(const struct sun4i_i2s *VAR_17,
     unsigned int VAR_18)
{
 u32 VAR_19;


 switch (VAR_18 & VAR_2) {
 case 133:

  VAR_19 = VAR_8 |
        VAR_14;
  break;
 case 132:

  VAR_19 = VAR_8;
  break;
 case 130:

  VAR_19 = VAR_14;
  break;
 case 129:
  VAR_19 = 0;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_17->regmap, VAR_16,
      VAR_15 |
      VAR_9,
      VAR_19);


 switch (VAR_18 & VAR_1) {
 case 134:
  VAR_19 = VAR_10;
  break;

 case 131:
  VAR_19 = VAR_11;
  break;

 case 128:
  VAR_19 = VAR_13;
  break;

 default:
  return -VAR_0;
 }

 FUNC_0(VAR_17->regmap, VAR_16,
      VAR_12, VAR_19);


 switch (VAR_18 & VAR_3) {
 case 135:

  VAR_19 = VAR_5;
  break;

 case 136:

  VAR_19 = VAR_6;
  break;

 default:
  return -VAR_0;
 }
 FUNC_0(VAR_17->regmap, VAR_7,
      VAR_4, VAR_19);
 return 0;
}
