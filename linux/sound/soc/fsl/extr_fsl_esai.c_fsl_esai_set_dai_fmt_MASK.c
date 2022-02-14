
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct fsl_esai {int slave_mode; int regmap; } ;


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
 int VAR_11 ;
 int VAR_12 ;






 unsigned int VAR_13 ;



 unsigned int VAR_14 ;

 unsigned int VAR_15 ;



 int FUNC_0 (int ,int ,int,int) ;
 struct fsl_esai* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_16, unsigned int VAR_17)
{
 struct fsl_esai *VAR_18 = FUNC_1(VAR_16);
 u32 VAR_19 = 0, VAR_20 = 0, VAR_21;


 switch (VAR_17 & VAR_13) {
 case 134:

  VAR_19 |= VAR_7;
  VAR_20 |= VAR_4 | VAR_2 | VAR_5;
  break;
 case 131:

  VAR_20 |= VAR_2 | VAR_5;
  break;
 case 128:

  VAR_20 |= VAR_2 | VAR_5;
  VAR_19 |= VAR_8;
  break;
 case 136:

  VAR_19 |= VAR_6 | VAR_7;
  VAR_20 |= VAR_2 | VAR_5;
  break;
 case 135:

  VAR_19 |= VAR_6;
  VAR_20 |= VAR_2 | VAR_5;
  break;
 default:
  return -VAR_0;
 }


 switch (VAR_17 & VAR_14) {
 case 129:

  break;
 case 132:

  VAR_20 ^= VAR_2 | VAR_5;
  break;
 case 130:

  VAR_20 ^= VAR_4;
  break;
 case 133:

  VAR_20 ^= VAR_2 | VAR_5 | VAR_4;
  break;
 default:
  return -VAR_0;
 }

 VAR_18->slave_mode = 0;


 switch (VAR_17 & VAR_15) {
 case 140:
  VAR_18->slave_mode = 1;
  break;
 case 138:
  VAR_20 |= VAR_1;
  break;
 case 139:
  VAR_20 |= VAR_3;
  break;
 case 137:
  VAR_20 |= VAR_3 | VAR_1;
  break;
 default:
  return -VAR_0;
 }

 VAR_21 = VAR_6 | VAR_7 | VAR_8;
 FUNC_0(VAR_18->regmap, VAR_12, VAR_21, VAR_19);
 FUNC_0(VAR_18->regmap, VAR_10, VAR_21, VAR_19);

 VAR_21 = VAR_2 | VAR_5 | VAR_4 |
  VAR_3 | VAR_1;
 FUNC_0(VAR_18->regmap, VAR_11, VAR_21, VAR_20);
 FUNC_0(VAR_18->regmap, VAR_9, VAR_21, VAR_20);

 return 0;
}
