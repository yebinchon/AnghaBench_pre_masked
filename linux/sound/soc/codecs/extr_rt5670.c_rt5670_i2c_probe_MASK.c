
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt5670_platform_data {int dev_gpio; int in2_diff; int dmic_en; int dmic1_data_pin; int dmic2_data_pin; int dmic3_data_pin; int jd_mode; } ;
struct rt5670_priv {int regmap; struct rt5670_platform_data pdata; int sysclk_src; scalar_t__ sysclk; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
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
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int FUNC_3 (int *,char*,...) ;
 struct rt5670_platform_data* FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int *,char*,int) ;
 struct rt5670_priv* FUNC_7 (int *,int,int ) ;
 int FUNC_8 (struct i2c_client*,int *) ;
 int FUNC_9 (int *,int *,int ,int ) ;
 int FUNC_10 (int ) ;
 int VAR_78 ;
 int FUNC_11 (struct i2c_client*,struct rt5670_priv*) ;
 int VAR_79 ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int VAR_80 ;
 int FUNC_17 (int ,int ,unsigned int*) ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (int ,int ,int,int) ;
 int FUNC_20 (int ,int ,int) ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;

__attribute__((used)) static int FUNC_21(struct i2c_client *VAR_85,
      const struct i2c_device_id *VAR_86)
{
 struct rt5670_platform_data *VAR_87 = FUNC_4(&VAR_85->dev);
 struct rt5670_priv *VAR_88;
 int VAR_89;
 unsigned int VAR_90;

 VAR_88 = FUNC_7(&VAR_85->dev,
    sizeof(struct rt5670_priv),
    VAR_2);
 if (((void*)0) == VAR_88)
  return -VAR_1;

 FUNC_11(VAR_85, VAR_88);

 if (VAR_87)
  VAR_88->pdata = *VAR_87;

 FUNC_10(VAR_78);
 if (VAR_80) {
  FUNC_5(&VAR_85->dev, "Overriding quirk 0x%x => 0x%x\n",
    (unsigned int)VAR_82, VAR_80);
  VAR_82 = VAR_80;
 }

 if (VAR_82 & VAR_5) {
  VAR_88->pdata.dev_gpio = 1;
  FUNC_5(&VAR_85->dev, "quirk dev_gpio\n");
 }
 if (VAR_82 & VAR_47) {
  VAR_88->pdata.in2_diff = 1;
  FUNC_5(&VAR_85->dev, "quirk IN2_DIFF\n");
 }
 if (VAR_82 & VAR_24) {
  VAR_88->pdata.dmic_en = 1;
  FUNC_5(&VAR_85->dev, "quirk DMIC enabled\n");
 }
 if (VAR_82 & VAR_9) {
  VAR_88->pdata.dmic1_data_pin = 129;
  FUNC_5(&VAR_85->dev, "quirk DMIC1 on IN2P pin\n");
 }
 if (VAR_82 & VAR_7) {
  VAR_88->pdata.dmic1_data_pin = 133;
  FUNC_5(&VAR_85->dev, "quirk DMIC1 on GPIO6 pin\n");
 }
 if (VAR_82 & VAR_8) {
  VAR_88->pdata.dmic1_data_pin = 132;
  FUNC_5(&VAR_85->dev, "quirk DMIC1 on GPIO7 pin\n");
 }
 if (VAR_82 & VAR_11) {
  VAR_88->pdata.dmic2_data_pin = 128;
  FUNC_5(&VAR_85->dev, "quirk DMIC2 on INR pin\n");
 }
 if (VAR_82 & VAR_10) {
  VAR_88->pdata.dmic2_data_pin = 131;
  FUNC_5(&VAR_85->dev, "quirk DMIC2 on GPIO8 pin\n");
 }
 if (VAR_82 & VAR_12) {
  VAR_88->pdata.dmic3_data_pin = 134;
  FUNC_5(&VAR_85->dev, "quirk DMIC3 on GPIO5 pin\n");
 }

 if (VAR_82 & VAR_59) {
  VAR_88->pdata.jd_mode = 1;
  FUNC_5(&VAR_85->dev, "quirk JD mode 1\n");
 }
 if (VAR_82 & VAR_60) {
  VAR_88->pdata.jd_mode = 2;
  FUNC_5(&VAR_85->dev, "quirk JD mode 2\n");
 }
 if (VAR_82 & VAR_61) {
  VAR_88->pdata.jd_mode = 3;
  FUNC_5(&VAR_85->dev, "quirk JD mode 3\n");
 }

 VAR_88->regmap = FUNC_8(VAR_85, &VAR_83);
 if (FUNC_1(VAR_88->regmap)) {
  VAR_89 = FUNC_2(VAR_88->regmap);
  FUNC_3(&VAR_85->dev, "Failed to allocate register map: %d\n",
   VAR_89);
  return VAR_89;
 }

 FUNC_17(VAR_88->regmap, VAR_77, &VAR_90);
 if (VAR_90 != VAR_4) {
  FUNC_3(&VAR_85->dev,
   "Device with ID register %#x is not rt5670/72\n", VAR_90);
  return -VAR_0;
 }

 FUNC_20(VAR_88->regmap, VAR_72, 0);
 FUNC_19(VAR_88->regmap, VAR_65,
  VAR_67 | VAR_68 |
  VAR_71, VAR_71);
 FUNC_12(100);

 FUNC_20(VAR_88->regmap, VAR_72, 0);

 FUNC_17(VAR_88->regmap, VAR_76, &VAR_90);
 if (VAR_90 >= 4)
  FUNC_20(VAR_88->regmap, VAR_42, 0x0980);
 else
  FUNC_20(VAR_88->regmap, VAR_42, 0x0d00);

 VAR_89 = FUNC_18(VAR_88->regmap, VAR_79,
        FUNC_0(VAR_79));
 if (VAR_89 != 0)
  FUNC_6(&VAR_85->dev, "Failed to apply regmap patch: %d\n", VAR_89);

 FUNC_19(VAR_88->regmap, VAR_6,
     VAR_64, VAR_64);

 if (VAR_88->pdata.in2_diff)
  FUNC_19(VAR_88->regmap, VAR_46,
     VAR_48, VAR_48);

 if (VAR_88->pdata.dev_gpio) {

  FUNC_20(VAR_88->regmap, VAR_43, 0x0000);
  FUNC_20(VAR_88->regmap, VAR_44, 0x0010);
  FUNC_20(VAR_88->regmap, VAR_45, 0x0014);

  FUNC_19(VAR_88->regmap, VAR_40,
       VAR_29, VAR_28);
  FUNC_19(VAR_88->regmap, VAR_41,
       VAR_26, VAR_27);
 }

 if (VAR_88->pdata.jd_mode) {
  FUNC_19(VAR_88->regmap, VAR_25,
       VAR_73, VAR_74);
  VAR_88->sysclk = 0;
  VAR_88->sysclk_src = VAR_75;
  FUNC_19(VAR_88->regmap, VAR_65,
       VAR_70, VAR_70);
  FUNC_19(VAR_88->regmap, VAR_66,
       VAR_69, VAR_69);
  FUNC_19(VAR_88->regmap, VAR_49,
       VAR_51, VAR_50);
  FUNC_19(VAR_88->regmap, VAR_57,
       VAR_62 |
       VAR_63,
       VAR_56 | VAR_58);
  switch (VAR_88->pdata.jd_mode) {
  case 1:
   FUNC_19(VAR_88->regmap, VAR_3,
        VAR_55,
        VAR_52);
   break;
  case 2:
   FUNC_19(VAR_88->regmap, VAR_3,
        VAR_55,
        VAR_53);
   break;
  case 3:
   FUNC_19(VAR_88->regmap, VAR_3,
        VAR_55,
        VAR_54);
   break;
  default:
   break;
  }
 }

 if (VAR_88->pdata.dmic_en) {
  FUNC_19(VAR_88->regmap, VAR_40,
       VAR_31,
       VAR_30);

  switch (VAR_88->pdata.dmic1_data_pin) {
  case 129:
   FUNC_19(VAR_88->regmap, VAR_22,
        VAR_16,
        VAR_15);
   break;

  case 133:
   FUNC_19(VAR_88->regmap, VAR_22,
        VAR_16,
        VAR_13);
   FUNC_19(VAR_88->regmap, VAR_40,
        VAR_35,
        VAR_34);
   break;

  case 132:
   FUNC_19(VAR_88->regmap, VAR_22,
        VAR_16,
        VAR_14);
   FUNC_19(VAR_88->regmap, VAR_40,
        VAR_37,
        VAR_36);
   break;

  default:
   break;
  }

  switch (VAR_88->pdata.dmic2_data_pin) {
  case 128:
   FUNC_19(VAR_88->regmap, VAR_22,
        VAR_19,
        VAR_18);
   break;

  case 131:
   FUNC_19(VAR_88->regmap, VAR_22,
        VAR_19,
        VAR_17);
   FUNC_19(VAR_88->regmap, VAR_40,
        VAR_39,
        VAR_38);
   break;

  default:
   break;
  }

  switch (VAR_88->pdata.dmic3_data_pin) {
  case 134:
   FUNC_19(VAR_88->regmap, VAR_23,
        VAR_21,
        VAR_20);
   FUNC_19(VAR_88->regmap, VAR_40,
        VAR_33,
        VAR_32);
   break;

  case 130:
  case 135:
   FUNC_3(&VAR_85->dev,
    "Always use GPIO5 as DMIC3 data pin\n");
   break;

  default:
   break;
  }

 }

 FUNC_15(&VAR_85->dev);
 FUNC_13(&VAR_85->dev);

 VAR_89 = FUNC_9(&VAR_85->dev,
   &VAR_84,
   VAR_81, FUNC_0(VAR_81));
 if (VAR_89 < 0)
  goto err;

 FUNC_16(&VAR_85->dev);

 return 0;
err:
 FUNC_14(&VAR_85->dev);

 return VAR_89;
}
