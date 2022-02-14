
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt5659_platform_data {int dmic1_data_pin; int dmic2_data_pin; int jd_src; scalar_t__ in4_diff; scalar_t__ in3_diff; scalar_t__ in1_diff; } ;
struct rt5659_priv {int * regmap; int jack_detect_work; struct rt5659_platform_data pdata; int * mclk; void* gpiod_reset; int * gpiod_ldo1_en; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; scalar_t__ irq; } ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_9 ;




 int VAR_10 ;




 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;

 int VAR_58 ;

 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int) ;
 struct rt5659_platform_data* FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int * FUNC_8 (int *,char*) ;
 void* FUNC_9 (int *,char*,int ) ;
 struct rt5659_priv* FUNC_10 (int *,int,int ) ;
 int * FUNC_11 (struct i2c_client*,int *) ;
 int FUNC_12 (int *,scalar_t__,int *,int ,int,char*,struct rt5659_priv*) ;
 int FUNC_13 (int *,int *,int ,int ) ;
 int FUNC_14 (struct i2c_client*,struct rt5659_priv*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int *,int ,unsigned int*) ;
 int FUNC_17 (int *,int ,int,int) ;
 int FUNC_18 (int *,int ,int) ;
 int FUNC_19 (struct rt5659_priv*) ;
 int VAR_64 ;
 int FUNC_20 (struct rt5659_priv*) ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int FUNC_21 (struct rt5659_priv*,int *) ;
 int VAR_68 ;
 int VAR_69 ;

__attribute__((used)) static int FUNC_22(struct i2c_client *VAR_70,
      const struct i2c_device_id *VAR_71)
{
 struct rt5659_platform_data *VAR_72 = FUNC_6(&VAR_70->dev);
 struct rt5659_priv *VAR_73;
 int VAR_74;
 unsigned int VAR_75;

 VAR_73 = FUNC_10(&VAR_70->dev, sizeof(struct rt5659_priv),
  VAR_4);

 if (VAR_73 == ((void*)0))
  return -VAR_3;

 FUNC_14(VAR_70, VAR_73);

 if (VAR_72)
  VAR_73->pdata = *VAR_72;
 else
  FUNC_21(VAR_73, &VAR_70->dev);

 VAR_73->gpiod_ldo1_en = FUNC_9(&VAR_70->dev, "ldo1-en",
       VAR_5);
 if (FUNC_2(VAR_73->gpiod_ldo1_en))
  FUNC_7(&VAR_70->dev, "Request ldo1-en GPIO failed\n");

 VAR_73->gpiod_reset = FUNC_9(&VAR_70->dev, "reset",
       VAR_5);


 FUNC_15(300);

 VAR_73->regmap = FUNC_11(VAR_70, &VAR_68);
 if (FUNC_2(VAR_73->regmap)) {
  VAR_74 = FUNC_3(VAR_73->regmap);
  FUNC_5(&VAR_70->dev, "Failed to allocate register map: %d\n",
   VAR_74);
  return VAR_74;
 }

 FUNC_16(VAR_73->regmap, VAR_9, &VAR_75);
 if (VAR_75 != VAR_0) {
  FUNC_5(&VAR_70->dev,
   "Device with ID register %x is not rt5659\n", VAR_75);
  return -VAR_1;
 }

 FUNC_18(VAR_73->regmap, VAR_63, 0);


 VAR_73->mclk = FUNC_8(&VAR_70->dev, "mclk");
 if (FUNC_2(VAR_73->mclk)) {
  if (FUNC_3(VAR_73->mclk) != -VAR_2)
   return FUNC_3(VAR_73->mclk);

  VAR_73->mclk = ((void*)0);
 }

 FUNC_19(VAR_73);


 if (VAR_73->pdata.in1_diff)
  FUNC_17(VAR_73->regmap, VAR_52,
   VAR_51, VAR_51);
 if (VAR_73->pdata.in3_diff)
  FUNC_17(VAR_73->regmap, VAR_54,
   VAR_53, VAR_53);
 if (VAR_73->pdata.in4_diff)
  FUNC_17(VAR_73->regmap, VAR_54,
   VAR_55, VAR_55);


 if (VAR_73->pdata.dmic1_data_pin != VAR_10 ||
  VAR_73->pdata.dmic2_data_pin != VAR_11) {
  FUNC_17(VAR_73->regmap, VAR_47,
   VAR_37, VAR_35);

  switch (VAR_73->pdata.dmic1_data_pin) {
  case 134:
   FUNC_17(VAR_73->regmap, VAR_22,
    VAR_16, VAR_15);
   break;

  case 136:
   FUNC_17(VAR_73->regmap,
    VAR_48,
    VAR_50,
    VAR_49);
   FUNC_17(VAR_73->regmap, VAR_22,
    VAR_16, VAR_13);
   FUNC_17(VAR_73->regmap, VAR_47,
    VAR_40, VAR_38);
   break;

  case 135:
   FUNC_17(VAR_73->regmap, VAR_22,
    VAR_16, VAR_14);
   FUNC_17(VAR_73->regmap, VAR_47,
    VAR_46, VAR_44);
   break;

  case 137:
   FUNC_17(VAR_73->regmap, VAR_22,
    VAR_16, VAR_12);
   FUNC_17(VAR_73->regmap, VAR_47,
    VAR_29,
    VAR_27);
   break;

  default:
   FUNC_4(&VAR_70->dev, "no DMIC1\n");
   break;
  }

  switch (VAR_73->pdata.dmic2_data_pin) {
  case 130:
   FUNC_17(VAR_73->regmap,
    VAR_22,
    VAR_21,
    VAR_20);
   break;

  case 131:
   FUNC_17(VAR_73->regmap,
    VAR_22,
    VAR_21,
    VAR_19);
   FUNC_17(VAR_73->regmap,
    VAR_47,
    VAR_43,
    VAR_41);
   break;

  case 133:
   FUNC_17(VAR_73->regmap,
    VAR_22,
    VAR_21,
    VAR_17);
   FUNC_17(VAR_73->regmap,
    VAR_47,
    VAR_26,
    VAR_24);
   break;

  case 132:
   FUNC_17(VAR_73->regmap,
    VAR_22,
    VAR_21,
    VAR_18);
   FUNC_17(VAR_73->regmap,
    VAR_47,
    VAR_32,
    VAR_30);
   break;

  default:
   FUNC_4(&VAR_70->dev, "no DMIC2\n");
   break;

  }
 } else {
  FUNC_17(VAR_73->regmap, VAR_47,
   VAR_37 | VAR_40 |
   VAR_46 | VAR_29 |
   VAR_43 | VAR_26 |
   VAR_32,
   VAR_36 | VAR_39 |
   VAR_45 | VAR_28 |
   VAR_42 | VAR_25 |
   VAR_31);
  FUNC_17(VAR_73->regmap, VAR_22,
   VAR_16 | VAR_21,
   VAR_15 | VAR_20);
 }

 switch (VAR_73->pdata.jd_src) {
 case 129:
  FUNC_18(VAR_73->regmap, VAR_23, 0xa880);
  FUNC_18(VAR_73->regmap, VAR_62, 0x9000);
  FUNC_18(VAR_73->regmap, VAR_47, 0xc800);
  FUNC_17(VAR_73->regmap, VAR_59,
    VAR_61, VAR_61);
  FUNC_18(VAR_73->regmap, VAR_60, 0x0001);
  FUNC_18(VAR_73->regmap, VAR_57, 0x0040);
  FUNC_1(&VAR_73->jack_detect_work,
   VAR_67);
  break;
 case 128:
  FUNC_18(VAR_73->regmap, VAR_48, 0x8000);
  FUNC_18(VAR_73->regmap, VAR_62, 0x0900);
  FUNC_18(VAR_73->regmap, VAR_23, 0x70c0);
  FUNC_18(VAR_73->regmap, VAR_58, 0x2000);
  FUNC_18(VAR_73->regmap, VAR_56, 0x0040);
  FUNC_1(&VAR_73->jack_detect_work,
   VAR_66);
  FUNC_20(VAR_73);
  break;
 default:
  break;
 }

 if (VAR_70->irq) {
  VAR_74 = FUNC_12(&VAR_70->dev, VAR_70->irq, ((void*)0),
   VAR_65, VAR_8 | VAR_7
   | VAR_6, "rt5659", VAR_73);
  if (VAR_74)
   FUNC_5(&VAR_70->dev, "Failed to reguest IRQ: %d\n", VAR_74);


  FUNC_17(VAR_73->regmap, VAR_47,
       VAR_34, VAR_33);
 }

 return FUNC_13(&VAR_70->dev,
   &VAR_69,
   VAR_64, FUNC_0(VAR_64));
}
