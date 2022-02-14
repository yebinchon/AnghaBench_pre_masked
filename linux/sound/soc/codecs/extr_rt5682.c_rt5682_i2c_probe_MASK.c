
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct rt5682_platform_data {int dmic1_data_pin; int dmic1_clk_pin; int ldo1_en; } ;
struct rt5682_priv {int jd_check_work; int jack_detect_work; int regmap; struct rt5682_platform_data pdata; int calibrate_mutex; TYPE_1__* supplies; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; scalar_t__ irq; } ;
struct TYPE_8__ {int supply; } ;


 int FUNC_0 (TYPE_1__*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
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
 int FUNC_4 (int *,char*,...) ;
 struct rt5682_platform_data* FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,...) ;
 scalar_t__ FUNC_7 (int *,int ,int ,char*) ;
 struct rt5682_priv* FUNC_8 (int *,int,int ) ;
 int FUNC_9 (struct i2c_client*,int *) ;
 int FUNC_10 (int *,int,TYPE_1__*) ;
 int FUNC_11 (int *,scalar_t__,int *,int ,int,char*,struct rt5682_priv*) ;
 int FUNC_12 (int *,int *,TYPE_1__*,int) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct i2c_client*,struct rt5682_priv*) ;
 struct rt5682_platform_data VAR_41 ;
 int FUNC_15 (int *) ;
 TYPE_1__* VAR_42 ;
 int FUNC_16 (char*,unsigned int) ;
 int FUNC_17 (int ,TYPE_1__*,int) ;
 int FUNC_18 (int ,int ,unsigned int*) ;
 int FUNC_19 (int ,int ,int,int) ;
 int FUNC_20 (int ,int ,int) ;
 int FUNC_21 (int,TYPE_1__*) ;
 int FUNC_22 (struct rt5682_priv*) ;
 TYPE_1__* VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int FUNC_23 (struct rt5682_priv*,int *) ;
 int VAR_47 ;
 int FUNC_24 (int ) ;
 int * VAR_48 ;
 int VAR_49 ;
 int FUNC_25 (int,int) ;

__attribute__((used)) static int FUNC_26(struct i2c_client *VAR_50,
      const struct i2c_device_id *VAR_51)
{
 struct rt5682_platform_data *VAR_52 = FUNC_5(&VAR_50->dev);
 struct rt5682_priv *VAR_53;
 int VAR_54, VAR_55;
 unsigned int VAR_56;

 VAR_53 = FUNC_8(&VAR_50->dev, sizeof(struct rt5682_priv),
  VAR_3);

 if (VAR_53 == ((void*)0))
  return -VAR_2;

 FUNC_14(VAR_50, VAR_53);

 VAR_53->pdata = VAR_41;

 if (VAR_52)
  VAR_53->pdata = *VAR_52;
 else
  FUNC_23(VAR_53, &VAR_50->dev);

 VAR_53->regmap = FUNC_9(VAR_50, &VAR_47);
 if (FUNC_2(VAR_53->regmap)) {
  VAR_55 = FUNC_3(VAR_53->regmap);
  FUNC_4(&VAR_50->dev, "Failed to allocate register map: %d\n",
   VAR_55);
  return VAR_55;
 }

 for (VAR_54 = 0; VAR_54 < FUNC_0(VAR_53->supplies); VAR_54++)
  VAR_53->supplies[VAR_54].supply = VAR_48[VAR_54];

 VAR_55 = FUNC_10(&VAR_50->dev, FUNC_0(VAR_53->supplies),
          VAR_53->supplies);
 if (VAR_55 != 0) {
  FUNC_4(&VAR_50->dev, "Failed to request supplies: %d\n", VAR_55);
  return VAR_55;
 }

 VAR_55 = FUNC_21(FUNC_0(VAR_53->supplies),
        VAR_53->supplies);
 if (VAR_55 != 0) {
  FUNC_4(&VAR_50->dev, "Failed to enable supplies: %d\n", VAR_55);
  return VAR_55;
 }

 if (FUNC_13(VAR_53->pdata.ldo1_en)) {
  if (FUNC_7(&VAR_50->dev, VAR_53->pdata.ldo1_en,
       VAR_4, "rt5682"))
   FUNC_4(&VAR_50->dev, "Fail gpio_request gpio_ldo\n");
 }


 FUNC_25(300000, 350000);

 FUNC_20(VAR_53->regmap, VAR_35, 0x1);
 FUNC_25(10000, 15000);

 FUNC_18(VAR_53->regmap, VAR_13, &VAR_56);
 if (VAR_56 != VAR_0) {
  FUNC_16("Device with ID register %x is not rt5682\n", VAR_56);
  return -VAR_1;
 }

 FUNC_24(VAR_53->regmap);

 FUNC_15(&VAR_53->calibrate_mutex);
 FUNC_22(VAR_53);

 VAR_55 = FUNC_17(VAR_53->regmap, VAR_42,
        FUNC_0(VAR_42));
 if (VAR_55 != 0)
  FUNC_6(&VAR_50->dev, "Failed to apply regmap patch: %d\n", VAR_55);

 FUNC_20(VAR_53->regmap, VAR_12, 0x0000);


 if (VAR_53->pdata.dmic1_data_pin != VAR_14) {
  switch (VAR_53->pdata.dmic1_data_pin) {
  case 129:
   FUNC_19(VAR_53->regmap, VAR_18,
    VAR_17, VAR_15);
   FUNC_19(VAR_53->regmap, VAR_30,
    VAR_22, VAR_21);
   break;

  case 128:
   FUNC_19(VAR_53->regmap, VAR_18,
    VAR_17, VAR_16);
   FUNC_19(VAR_53->regmap, VAR_30,
    VAR_29, VAR_28);
   break;

  default:
   FUNC_6(&VAR_50->dev, "invalid DMIC_DAT pin\n");
   break;
  }

  switch (VAR_53->pdata.dmic1_clk_pin) {
  case 131:
   FUNC_19(VAR_53->regmap, VAR_30,
    VAR_20, VAR_19);
   break;

  case 130:
   FUNC_19(VAR_53->regmap, VAR_30,
    VAR_24, VAR_23);
   break;

  default:
   FUNC_6(&VAR_50->dev, "invalid DMIC_CLK pin\n");
   break;
  }
 }

 FUNC_19(VAR_53->regmap, VAR_39,
   VAR_37 | VAR_34,
   VAR_36 | VAR_33);
 FUNC_20(VAR_53->regmap, VAR_38, 0x0380);
 FUNC_19(VAR_53->regmap, VAR_30,
   VAR_26 | VAR_29,
   VAR_25 | VAR_27);
 FUNC_20(VAR_53->regmap, VAR_40, 0x0000);
 FUNC_19(VAR_53->regmap, VAR_8,
   VAR_32, VAR_31);
 FUNC_19(VAR_53->regmap, VAR_9,
   VAR_11, VAR_10);

 FUNC_1(&VAR_53->jack_detect_work,
    VAR_45);
 FUNC_1(&VAR_53->jd_check_work,
    VAR_46);


 if (VAR_50->irq) {
  VAR_55 = FUNC_11(&VAR_50->dev, VAR_50->irq, ((void*)0),
   VAR_44, VAR_7 | VAR_6
   | VAR_5, "rt5682", VAR_53);
  if (VAR_55)
   FUNC_4(&VAR_50->dev, "Failed to reguest IRQ: %d\n", VAR_55);

 }

 return FUNC_12(&VAR_50->dev,
     &VAR_49,
     VAR_43, FUNC_0(VAR_43));
}
