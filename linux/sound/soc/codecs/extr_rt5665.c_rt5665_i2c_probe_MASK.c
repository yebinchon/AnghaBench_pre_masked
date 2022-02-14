
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct rt5665_platform_data {int dmic1_data_pin; int dmic2_data_pin; scalar_t__ in4_diff; scalar_t__ in3_diff; scalar_t__ in2_diff; scalar_t__ in1_diff; int ldo1_en; } ;
struct rt5665_priv {scalar_t__ id; int calibrate_mutex; int jd_check_work; int calibrate_work; int jack_detect_work; int regmap; struct rt5665_platform_data pdata; TYPE_1__* supplies; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; scalar_t__ irq; } ;
struct TYPE_6__ {int supply; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
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
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,...) ;
 struct rt5665_platform_data* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int ,int ,char*) ;
 struct rt5665_priv* FUNC_8 (int *,int,int ) ;
 int FUNC_9 (struct i2c_client*,int *) ;
 int FUNC_10 (int *,int,TYPE_1__*) ;
 int FUNC_11 (int *,scalar_t__,int *,int ,int,char*,struct rt5665_priv*) ;
 int FUNC_12 (int *,int *,TYPE_1__*,int) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct i2c_client*,struct rt5665_priv*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int ,unsigned int*) ;
 int FUNC_17 (int ,int ,int,int) ;
 int FUNC_18 (int ,int ,int) ;
 int FUNC_19 (int,TYPE_1__*) ;
 int VAR_57 ;
 TYPE_1__* VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int FUNC_20 (struct rt5665_priv*,int *) ;
 int VAR_62 ;
 int * VAR_63 ;
 int VAR_64 ;
 int FUNC_21 (int,int) ;

__attribute__((used)) static int FUNC_22(struct i2c_client *VAR_65,
      const struct i2c_device_id *VAR_66)
{
 struct rt5665_platform_data *VAR_67 = FUNC_6(&VAR_65->dev);
 struct rt5665_priv *VAR_68;
 int VAR_69, VAR_70;
 unsigned int VAR_71;

 VAR_68 = FUNC_8(&VAR_65->dev, sizeof(struct rt5665_priv),
  VAR_5);

 if (VAR_68 == ((void*)0))
  return -VAR_4;

 FUNC_14(VAR_65, VAR_68);

 if (VAR_67)
  VAR_68->pdata = *VAR_67;
 else
  FUNC_20(VAR_68, &VAR_65->dev);

 for (VAR_69 = 0; VAR_69 < FUNC_0(VAR_68->supplies); VAR_69++)
  VAR_68->supplies[VAR_69].supply = VAR_63[VAR_69];

 VAR_70 = FUNC_10(&VAR_65->dev, FUNC_0(VAR_68->supplies),
          VAR_68->supplies);
 if (VAR_70 != 0) {
  FUNC_5(&VAR_65->dev, "Failed to request supplies: %d\n", VAR_70);
  return VAR_70;
 }

 VAR_70 = FUNC_19(FUNC_0(VAR_68->supplies),
        VAR_68->supplies);
 if (VAR_70 != 0) {
  FUNC_5(&VAR_65->dev, "Failed to enable supplies: %d\n", VAR_70);
  return VAR_70;
 }

 if (FUNC_13(VAR_68->pdata.ldo1_en)) {
  if (FUNC_7(&VAR_65->dev, VAR_68->pdata.ldo1_en,
       VAR_6, "rt5665"))
   FUNC_5(&VAR_65->dev, "Fail gpio_request gpio_ldo\n");
 }


 FUNC_21(300000, 350000);

 VAR_68->regmap = FUNC_9(VAR_65, &VAR_62);
 if (FUNC_2(VAR_68->regmap)) {
  VAR_70 = FUNC_3(VAR_68->regmap);
  FUNC_5(&VAR_65->dev, "Failed to allocate register map: %d\n",
   VAR_70);
  return VAR_70;
 }

 FUNC_16(VAR_68->regmap, VAR_12, &VAR_71);
 if (VAR_71 != VAR_2) {
  FUNC_5(&VAR_65->dev,
   "Device with ID register %x is not rt5665\n", VAR_71);
  return -VAR_3;
 }

 FUNC_16(VAR_68->regmap, VAR_53, &VAR_71);
 switch (VAR_71) {
 case 0x0:
  VAR_68->id = VAR_1;
  break;
 case 0x3:
 default:
  VAR_68->id = VAR_0;
  break;
 }

 FUNC_18(VAR_68->regmap, VAR_53, 0);


 if (VAR_68->pdata.in1_diff)
  FUNC_17(VAR_68->regmap, VAR_43,
   VAR_42, VAR_42);
 if (VAR_68->pdata.in2_diff)
  FUNC_17(VAR_68->regmap, VAR_43,
   VAR_44, VAR_44);
 if (VAR_68->pdata.in3_diff)
  FUNC_17(VAR_68->regmap, VAR_46,
   VAR_45, VAR_45);
 if (VAR_68->pdata.in4_diff)
  FUNC_17(VAR_68->regmap, VAR_46,
   VAR_47, VAR_47);


 if (VAR_68->pdata.dmic1_data_pin != VAR_13 ||
  VAR_68->pdata.dmic2_data_pin != VAR_14) {
  FUNC_17(VAR_68->regmap, VAR_36,
   VAR_34, VAR_33);
  FUNC_17(VAR_68->regmap, VAR_35,
    VAR_32, VAR_31);
  switch (VAR_68->pdata.dmic1_data_pin) {
  case 130:
   FUNC_17(VAR_68->regmap, VAR_21,
    VAR_17, VAR_16);
   break;

  case 131:
   FUNC_17(VAR_68->regmap, VAR_21,
    VAR_17, VAR_15);
   FUNC_17(VAR_68->regmap, VAR_35,
    VAR_26, VAR_25);
   break;

  default:
   FUNC_4(&VAR_65->dev, "no DMIC1\n");
   break;
  }

  switch (VAR_68->pdata.dmic2_data_pin) {
  case 128:
   FUNC_17(VAR_68->regmap, VAR_21,
    VAR_20, VAR_19);
   break;

  case 129:
   FUNC_17(VAR_68->regmap,
    VAR_21,
    VAR_20,
    VAR_18);
   FUNC_17(VAR_68->regmap, VAR_35,
    VAR_28, VAR_27);
   break;

  default:
   FUNC_4(&VAR_65->dev, "no DMIC2\n");
   break;

  }
 }

 FUNC_18(VAR_68->regmap, VAR_41, 0x0002);
 FUNC_17(VAR_68->regmap, VAR_22,
  0xf000 | VAR_55, 0xe000 | VAR_56);

 FUNC_17(VAR_68->regmap, VAR_54,
  VAR_11, VAR_10);

 FUNC_17(VAR_68->regmap, VAR_38,
  VAR_51, VAR_50);


 if (VAR_68->id == VAR_1) {
  FUNC_17(VAR_68->regmap, VAR_36,
   VAR_24, VAR_23);
  FUNC_17(VAR_68->regmap, VAR_37,
   VAR_30, VAR_29);
 }


 FUNC_17(VAR_68->regmap, VAR_52,
  VAR_40 | VAR_49,
  VAR_39 | VAR_48);

 FUNC_1(&VAR_68->jack_detect_work,
    VAR_60);
 FUNC_1(&VAR_68->calibrate_work,
    VAR_57);
 FUNC_1(&VAR_68->jd_check_work,
    VAR_61);

 FUNC_15(&VAR_68->calibrate_mutex);

 if (VAR_65->irq) {
  VAR_70 = FUNC_11(&VAR_65->dev, VAR_65->irq, ((void*)0),
   VAR_59, VAR_9 | VAR_8
   | VAR_7, "rt5665", VAR_68);
  if (VAR_70)
   FUNC_5(&VAR_65->dev, "Failed to reguest IRQ: %d\n", VAR_70);

 }

 return FUNC_12(&VAR_65->dev,
   &VAR_64,
   VAR_58, FUNC_0(VAR_58));
}
