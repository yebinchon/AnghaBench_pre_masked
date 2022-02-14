
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct rk_i2s_dev {int is_master_mode; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int FUNC_1 (int) ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;




 unsigned int VAR_24 ;


 unsigned int VAR_25 ;

 unsigned int VAR_26 ;


 int FUNC_2 (int ,int ,unsigned int,unsigned int) ;
 struct rk_i2s_dev* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_27,
    unsigned int VAR_28)
{
 struct rk_i2s_dev *VAR_29 = FUNC_3(VAR_27);
 unsigned int VAR_30 = 0, VAR_31 = 0;

 VAR_30 = VAR_5;
 switch (VAR_28 & VAR_26) {
 case 135:

  VAR_31 = VAR_6;
  VAR_29->is_master_mode = 1;
  break;
 case 136:
  VAR_31 = VAR_7;
  VAR_29->is_master_mode = 0;
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_29->regmap, VAR_1, VAR_30, VAR_31);

 VAR_30 = VAR_2;
 switch (VAR_28 & VAR_25) {
 case 129:
  VAR_31 = VAR_3;
  break;
 case 131:
  VAR_31 = VAR_4;
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_29->regmap, VAR_1, VAR_30, VAR_31);

 VAR_30 = VAR_18 | VAR_22 | VAR_21;
 switch (VAR_28 & VAR_24) {
 case 128:
  VAR_31 = VAR_20;
  break;
 case 130:
  VAR_31 = VAR_17;
  break;
 case 132:
  VAR_31 = VAR_19;
  break;
 case 134:
  VAR_31 = VAR_23;
  break;
 case 133:
  VAR_31 = VAR_23 | FUNC_1(1);
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_29->regmap, VAR_16, VAR_30, VAR_31);

 VAR_30 = VAR_10 | VAR_14 | VAR_13;
 switch (VAR_28 & VAR_24) {
 case 128:
  VAR_31 = VAR_12;
  break;
 case 130:
  VAR_31 = VAR_9;
  break;
 case 132:
  VAR_31 = VAR_11;
  break;
 case 134:
  VAR_31 = VAR_15;
  break;
 case 133:
  VAR_31 = VAR_15 | FUNC_0(1);
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_29->regmap, VAR_8, VAR_30, VAR_31);

 return 0;
}
