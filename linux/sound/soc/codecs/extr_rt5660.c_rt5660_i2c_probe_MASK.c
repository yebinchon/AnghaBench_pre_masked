
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct rt5660_platform_data {scalar_t__ dmic1_data_pin; } ;
struct rt5660_priv {int regmap; struct rt5660_platform_data pdata; int mclk; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_8__ {scalar_t__ of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
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
 int FUNC_3 (TYPE_1__*,char*,unsigned int) ;
 struct rt5660_platform_data* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char*,int) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 struct rt5660_priv* FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (struct i2c_client*,int *) ;
 int FUNC_9 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_10 (struct i2c_client*,struct rt5660_priv*) ;
 int FUNC_11 (int ,int ,unsigned int*) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int ,int,int) ;
 int FUNC_14 (int ,int ,int ) ;
 int VAR_20 ;
 int FUNC_15 (struct rt5660_priv*,TYPE_1__*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

__attribute__((used)) static int FUNC_16(struct i2c_client *VAR_24,
      const struct i2c_device_id *VAR_25)
{
 struct rt5660_platform_data *VAR_26 = FUNC_4(&VAR_24->dev);
 struct rt5660_priv *VAR_27;
 int VAR_28;
 unsigned int VAR_29;

 VAR_27 = FUNC_7(&VAR_24->dev, sizeof(struct rt5660_priv),
  VAR_3);

 if (VAR_27 == ((void*)0))
  return -VAR_1;


 VAR_27->mclk = FUNC_6(&VAR_24->dev, "mclk");
 if (FUNC_2(VAR_27->mclk) == -VAR_2)
  return -VAR_2;

 FUNC_10(VAR_24, VAR_27);

 if (VAR_26)
  VAR_27->pdata = *VAR_26;
 else if (VAR_24->dev.of_node)
  FUNC_15(VAR_27, &VAR_24->dev);

 VAR_27->regmap = FUNC_8(VAR_24, &VAR_22);
 if (FUNC_1(VAR_27->regmap)) {
  VAR_28 = FUNC_2(VAR_27->regmap);
  FUNC_3(&VAR_24->dev, "Failed to allocate register map: %d\n",
   VAR_28);
  return VAR_28;
 }

 FUNC_11(VAR_27->regmap, VAR_19, &VAR_29);
 if (VAR_29 != VAR_5) {
  FUNC_3(&VAR_24->dev,
   "Device with ID register %#x is not rt5660\n", VAR_29);
  return -VAR_0;
 }

 FUNC_14(VAR_27->regmap, VAR_15, 0);

 VAR_28 = FUNC_12(VAR_27->regmap, VAR_21,
        FUNC_0(VAR_21));
 if (VAR_28 != 0)
  FUNC_5(&VAR_24->dev, "Failed to apply regmap patch: %d\n", VAR_28);

 FUNC_13(VAR_27->regmap, VAR_9,
  VAR_4 | VAR_13 | VAR_14,
  VAR_4 | VAR_13 | VAR_14);

 if (VAR_27->pdata.dmic1_data_pin) {
  FUNC_13(VAR_27->regmap, VAR_12,
   VAR_11, VAR_10);

  if (VAR_27->pdata.dmic1_data_pin == VAR_6)
   FUNC_13(VAR_27->regmap, VAR_8,
    VAR_18,
    VAR_16);
  else if (VAR_27->pdata.dmic1_data_pin == VAR_7)
   FUNC_13(VAR_27->regmap, VAR_8,
    VAR_18,
    VAR_17);
 }

 return FUNC_9(&VAR_24->dev,
          &VAR_23,
          VAR_20, FUNC_0(VAR_20));
}
