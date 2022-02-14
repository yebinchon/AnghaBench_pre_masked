
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_sai_sub_data {int master; unsigned int fmt; int regmap; scalar_t__ sync; } ;
struct snd_soc_dai {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;




 unsigned int VAR_10 ;



 unsigned int VAR_11 ;

 unsigned int VAR_12 ;



 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (struct stm32_sai_sub_data*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,int ,int,int) ;
 struct stm32_sai_sub_data* FUNC_5 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dai *VAR_15, unsigned int VAR_16)
{
 struct stm32_sai_sub_data *VAR_17 = FUNC_5(VAR_15);
 int VAR_18, VAR_19 = 0;
 int VAR_20, VAR_21 = 0;
 int VAR_22;

 FUNC_2(VAR_15->dev, "fmt %x\n", VAR_16);


 VAR_18 = VAR_4;
 VAR_20 = VAR_4;

 VAR_20 |= VAR_5;
 if (FUNC_1(VAR_17)) {
  VAR_18 |= FUNC_0(VAR_2);
  goto conf_update;
 }

 VAR_18 |= FUNC_0(VAR_1);

 switch (VAR_16 & VAR_10) {

 case 134:
  VAR_18 |= VAR_3;
  VAR_19 |= VAR_8 | VAR_7;
  break;

 case 130:
  VAR_19 |= VAR_9 | VAR_7;
  break;

 case 131:
  VAR_19 |= VAR_9 | VAR_7;
  break;
 case 136:
  VAR_19 |= VAR_9 | VAR_8;
  break;
 case 135:
  VAR_19 |= VAR_9;
  break;
 default:
  FUNC_3(VAR_15->dev, "Unsupported protocol %#x\n",
   VAR_16 & VAR_10);
  return -VAR_0;
 }

 VAR_20 |= VAR_3;
 VAR_21 |= VAR_9 | VAR_8 |
       VAR_7;


 switch (VAR_16 & VAR_11) {
 case 128:
  break;
 case 132:
  VAR_18 ^= VAR_3;
  break;
 case 129:
  VAR_19 ^= VAR_9;
  break;
 case 133:

  VAR_18 ^= VAR_3;
  VAR_19 ^= VAR_9;
  break;
 default:
  FUNC_3(VAR_15->dev, "Unsupported strobing %#x\n",
   VAR_16 & VAR_11);
  return -VAR_0;
 }
 VAR_20 |= VAR_3;
 VAR_21 |= VAR_9;

 FUNC_4(VAR_17->regmap, VAR_14, VAR_21, VAR_19);


 switch (VAR_16 & VAR_12) {
 case 138:

  VAR_18 |= VAR_6;
  VAR_17->master = 0;
  break;
 case 137:
  VAR_17->master = 1;
  break;
 default:
  FUNC_3(VAR_15->dev, "Unsupported mode %#x\n",
   VAR_16 & VAR_12);
  return -VAR_0;
 }


 if (VAR_17->sync) {
  FUNC_2(VAR_15->dev, "Synchronized SAI configured as slave\n");
  VAR_18 |= VAR_6;
  VAR_17->master = 0;
 }

 VAR_20 |= VAR_6;

conf_update:
 VAR_22 = FUNC_4(VAR_17->regmap, VAR_13, VAR_20, VAR_18);
 if (VAR_22 < 0) {
  FUNC_3(VAR_15->dev, "Failed to update CR1 register\n");
  return VAR_22;
 }

 VAR_17->fmt = VAR_16;

 return 0;
}
