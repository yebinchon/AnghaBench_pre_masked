
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct TYPE_17__ {scalar_t__ of_node; } ;
struct i2c_client {TYPE_4__ dev; } ;
struct cs35l32_platform_data {int boost_mng; int sdout_share; int sdout_datacfg; int batt_recov; int batt_thresh; } ;
struct cs35l32_private {TYPE_1__* supplies; int regmap; struct cs35l32_platform_data pdata; int reset_gpio; } ;
struct TYPE_16__ {int supply; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
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
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_20 ;
 int FUNC_3 (struct i2c_client*,struct cs35l32_platform_data*) ;
 TYPE_1__* VAR_21 ;
 int VAR_22 ;
 int * VAR_23 ;
 int FUNC_4 (TYPE_4__*,char*,...) ;
 struct cs35l32_platform_data* FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,char*,unsigned int) ;
 int FUNC_7 (TYPE_4__*,char*,int ) ;
 void* FUNC_8 (TYPE_4__*,int,int ) ;
 int FUNC_9 (struct i2c_client*,int *) ;
 int FUNC_10 (TYPE_4__*,int,TYPE_1__*) ;
 int FUNC_11 (TYPE_4__*,int *,TYPE_1__*,int) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (struct i2c_client*,struct cs35l32_private*) ;
 int FUNC_14 (int ,int ,unsigned int*) ;
 int FUNC_15 (int ,TYPE_1__*,int) ;
 int FUNC_16 (int ,int ,int,int) ;
 int FUNC_17 (int,TYPE_1__*) ;
 int FUNC_18 (int,TYPE_1__*) ;
 int VAR_24 ;

__attribute__((used)) static int FUNC_19(struct i2c_client *VAR_25,
           const struct i2c_device_id *VAR_26)
{
 struct cs35l32_private *VAR_27;
 struct cs35l32_platform_data *VAR_28 =
  FUNC_5(&VAR_25->dev);
 int VAR_29, VAR_30;
 unsigned int VAR_31 = 0;
 unsigned int VAR_32;

 VAR_27 = FUNC_8(&VAR_25->dev, sizeof(*VAR_27), VAR_18);
 if (!VAR_27)
  return -VAR_17;

 FUNC_13(VAR_25, VAR_27);

 VAR_27->regmap = FUNC_9(VAR_25, &VAR_22);
 if (FUNC_1(VAR_27->regmap)) {
  VAR_29 = FUNC_2(VAR_27->regmap);
  FUNC_4(&VAR_25->dev, "regmap_init() failed: %d\n", VAR_29);
  return VAR_29;
 }

 if (VAR_28) {
  VAR_27->pdata = *VAR_28;
 } else {
  VAR_28 = FUNC_8(&VAR_25->dev, sizeof(*VAR_28),
         VAR_18);
  if (!VAR_28)
   return -VAR_17;

  if (VAR_25->dev.of_node) {
   VAR_29 = FUNC_3(VAR_25,
           &VAR_27->pdata);
   if (VAR_29 != 0)
    return VAR_29;
  }
 }

 for (VAR_30 = 0; VAR_30 < FUNC_0(VAR_27->supplies); VAR_30++)
  VAR_27->supplies[VAR_30].supply = VAR_23[VAR_30];

 VAR_29 = FUNC_10(&VAR_25->dev,
          FUNC_0(VAR_27->supplies),
          VAR_27->supplies);
 if (VAR_29 != 0) {
  FUNC_4(&VAR_25->dev,
   "Failed to request supplies: %d\n", VAR_29);
  return VAR_29;
 }

 VAR_29 = FUNC_18(FUNC_0(VAR_27->supplies),
        VAR_27->supplies);
 if (VAR_29 != 0) {
  FUNC_4(&VAR_25->dev,
   "Failed to enable supplies: %d\n", VAR_29);
  return VAR_29;
 }


 VAR_27->reset_gpio = FUNC_7(&VAR_25->dev,
  "reset", VAR_19);
 if (FUNC_1(VAR_27->reset_gpio))
  return FUNC_2(VAR_27->reset_gpio);

 FUNC_12(VAR_27->reset_gpio, 1);


 VAR_29 = FUNC_14(VAR_27->regmap, VAR_9, &VAR_32);
 VAR_31 = (VAR_32 & 0xFF) << 12;

 VAR_29 = FUNC_14(VAR_27->regmap, VAR_10, &VAR_32);
 VAR_31 |= (VAR_32 & 0xFF) << 4;

 VAR_29 = FUNC_14(VAR_27->regmap, VAR_11, &VAR_32);
 VAR_31 |= (VAR_32 & 0xF0) >> 4;

 if (VAR_31 != VAR_8) {
  VAR_29 = -VAR_16;
  FUNC_4(&VAR_25->dev,
   "CS35L32 Device ID (%X). Expected %X\n",
   VAR_31, VAR_8);
  return VAR_29;
 }

 VAR_29 = FUNC_14(VAR_27->regmap, VAR_15, &VAR_32);
 if (VAR_29 < 0) {
  FUNC_4(&VAR_25->dev, "Get Revision ID failed\n");
  return VAR_29;
 }

 VAR_29 = FUNC_15(VAR_27->regmap, VAR_21,
        FUNC_0(VAR_21));
 if (VAR_29 < 0) {
  FUNC_4(&VAR_25->dev, "Failed to apply errata patch\n");
  return VAR_29;
 }

 FUNC_6(&VAR_25->dev,
   "Cirrus Logic CS35L32, Revision: %02X\n", VAR_32 & 0xFF);


 if (VAR_27->pdata.boost_mng)
  FUNC_16(VAR_27->regmap, VAR_3,
       VAR_7,
    VAR_27->pdata.boost_mng);


 if (VAR_27->pdata.sdout_share)
  FUNC_16(VAR_27->regmap, VAR_0,
        VAR_2,
    VAR_27->pdata.sdout_share << 3);


 if (VAR_27->pdata.sdout_datacfg)
  FUNC_16(VAR_27->regmap, VAR_0,
       VAR_1,
    VAR_27->pdata.sdout_datacfg << 4);


 if (VAR_27->pdata.batt_recov)
  FUNC_16(VAR_27->regmap, VAR_5,
       VAR_4,
    VAR_27->pdata.batt_recov << 1);


 if (VAR_27->pdata.batt_thresh)
  FUNC_16(VAR_27->regmap, VAR_5,
       VAR_6,
    VAR_27->pdata.batt_thresh << 4);


 FUNC_16(VAR_27->regmap, VAR_14, VAR_13,
       VAR_13);


 VAR_29 = FUNC_14(VAR_27->regmap, VAR_12, &VAR_32);

 VAR_29 = FUNC_11(&VAR_25->dev,
   &VAR_24, VAR_20,
   FUNC_0(VAR_20));
 if (VAR_29 < 0)
  goto err_disable;

 return 0;

err_disable:
 FUNC_17(FUNC_0(VAR_27->supplies),
          VAR_27->supplies);
 return VAR_29;
}
