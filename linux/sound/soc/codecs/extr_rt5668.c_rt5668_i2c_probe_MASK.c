
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct rt5668_platform_data {int dmic1_data_pin; int dmic1_clk_pin; int ldo1_en; } ;
struct rt5668_priv {int calibrate_mutex; int jd_check_work; int jack_detect_work; int regmap; struct rt5668_platform_data pdata; TYPE_1__* supplies; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; scalar_t__ irq; } ;
struct TYPE_6__ {int supply; } ;


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
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,...) ;
 struct rt5668_platform_data* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int ,int ,char*) ;
 struct rt5668_priv* FUNC_8 (int *,int,int ) ;
 int FUNC_9 (struct i2c_client*,int *) ;
 int FUNC_10 (int *,int,TYPE_1__*) ;
 int FUNC_11 (int *,scalar_t__,int *,int ,int,char*,struct rt5668_priv*) ;
 int FUNC_12 (int *,int *,TYPE_1__*,int) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct i2c_client*,struct rt5668_priv*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char*,unsigned int) ;
 int FUNC_17 (int ,int ,unsigned int*) ;
 int FUNC_18 (int ,int ,int,int) ;
 int FUNC_19 (int ,int ,int) ;
 int FUNC_20 (int,TYPE_1__*) ;
 int FUNC_21 (struct rt5668_priv*) ;
 TYPE_1__* VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_22 (struct rt5668_priv*,int *) ;
 int VAR_39 ;
 int FUNC_23 (int ) ;
 int * VAR_40 ;
 int VAR_41 ;
 int FUNC_24 (int,int) ;

__attribute__((used)) static int FUNC_25(struct i2c_client *VAR_42,
      const struct i2c_device_id *VAR_43)
{
 struct rt5668_platform_data *VAR_44 = FUNC_6(&VAR_42->dev);
 struct rt5668_priv *VAR_45;
 int VAR_46, VAR_47;
 unsigned int VAR_48;

 VAR_45 = FUNC_8(&VAR_42->dev, sizeof(struct rt5668_priv),
  VAR_3);

 if (VAR_45 == ((void*)0))
  return -VAR_2;

 FUNC_14(VAR_42, VAR_45);

 if (VAR_44)
  VAR_45->pdata = *VAR_44;
 else
  FUNC_22(VAR_45, &VAR_42->dev);

 VAR_45->regmap = FUNC_9(VAR_42, &VAR_39);
 if (FUNC_2(VAR_45->regmap)) {
  VAR_47 = FUNC_3(VAR_45->regmap);
  FUNC_5(&VAR_42->dev, "Failed to allocate register map: %d\n",
   VAR_47);
  return VAR_47;
 }

 for (VAR_46 = 0; VAR_46 < FUNC_0(VAR_45->supplies); VAR_46++)
  VAR_45->supplies[VAR_46].supply = VAR_40[VAR_46];

 VAR_47 = FUNC_10(&VAR_42->dev, FUNC_0(VAR_45->supplies),
          VAR_45->supplies);
 if (VAR_47 != 0) {
  FUNC_5(&VAR_42->dev, "Failed to request supplies: %d\n", VAR_47);
  return VAR_47;
 }

 VAR_47 = FUNC_20(FUNC_0(VAR_45->supplies),
        VAR_45->supplies);
 if (VAR_47 != 0) {
  FUNC_5(&VAR_42->dev, "Failed to enable supplies: %d\n", VAR_47);
  return VAR_47;
 }

 if (FUNC_13(VAR_45->pdata.ldo1_en)) {
  if (FUNC_7(&VAR_42->dev, VAR_45->pdata.ldo1_en,
       VAR_4, "rt5668"))
   FUNC_5(&VAR_42->dev, "Fail gpio_request gpio_ldo\n");
 }


 FUNC_24(300000, 350000);

 FUNC_19(VAR_45->regmap, VAR_29, 0x1);
 FUNC_24(10000, 15000);

 FUNC_17(VAR_45->regmap, VAR_9, &VAR_48);
 if (VAR_48 != VAR_0) {
  FUNC_16("Device with ID register %x is not rt5668\n", VAR_48);
  return -VAR_1;
 }

 FUNC_23(VAR_45->regmap);

 FUNC_21(VAR_45);

 FUNC_19(VAR_45->regmap, VAR_8, 0x0000);


 if (VAR_45->pdata.dmic1_data_pin != VAR_10) {
  switch (VAR_45->pdata.dmic1_data_pin) {
  case 129:
   FUNC_18(VAR_45->regmap, VAR_14,
    VAR_13, VAR_11);
   FUNC_18(VAR_45->regmap, VAR_26,
    VAR_18, VAR_17);
   break;

  case 128:
   FUNC_18(VAR_45->regmap, VAR_14,
    VAR_13, VAR_12);
   FUNC_18(VAR_45->regmap, VAR_26,
    VAR_25, VAR_24);
   break;

  default:
   FUNC_4(&VAR_42->dev, "invalid DMIC_DAT pin\n");
   break;
  }

  switch (VAR_45->pdata.dmic1_clk_pin) {
  case 131:
   FUNC_18(VAR_45->regmap, VAR_26,
    VAR_16, VAR_15);
   break;

  case 130:
   FUNC_18(VAR_45->regmap, VAR_26,
    VAR_20, VAR_19);
   break;

  default:
   FUNC_4(&VAR_42->dev, "invalid DMIC_CLK pin\n");
   break;
  }
 }

 FUNC_18(VAR_45->regmap, VAR_33,
   VAR_31 | VAR_28,
   VAR_30 | VAR_27);
 FUNC_19(VAR_45->regmap, VAR_32, 0x0380);
 FUNC_18(VAR_45->regmap, VAR_26,
   VAR_22 | VAR_25,
   VAR_21 | VAR_23);
 FUNC_19(VAR_45->regmap, VAR_34, 0x0000);

 FUNC_1(&VAR_45->jack_detect_work,
    VAR_37);
 FUNC_1(&VAR_45->jd_check_work,
    VAR_38);

 FUNC_15(&VAR_45->calibrate_mutex);

 if (VAR_42->irq) {
  VAR_47 = FUNC_11(&VAR_42->dev, VAR_42->irq, ((void*)0),
   VAR_36, VAR_7 | VAR_6
   | VAR_5, "rt5668", VAR_45);
  if (VAR_47)
   FUNC_5(&VAR_42->dev, "Failed to reguest IRQ: %d\n", VAR_47);

 }

 return FUNC_12(&VAR_42->dev, &VAR_41,
   VAR_35, FUNC_0(VAR_35));
}
