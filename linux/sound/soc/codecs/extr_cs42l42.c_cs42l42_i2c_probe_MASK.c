
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct TYPE_14__ {scalar_t__ of_node; } ;
struct i2c_client {TYPE_3__ dev; int irq; } ;
struct cs42l42_private {TYPE_1__* supplies; scalar_t__ regmap; scalar_t__ reset_gpio; } ;
struct TYPE_13__ {int supply; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
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
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_26 ;
 int FUNC_3 (struct i2c_client*,struct cs42l42_private*) ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_4 (struct cs42l42_private*) ;
 int FUNC_5 (struct cs42l42_private*) ;
 int * VAR_29 ;
 int FUNC_6 (TYPE_3__*,char*) ;
 int FUNC_7 (TYPE_3__*,char*,...) ;
 int FUNC_8 (TYPE_3__*,char*,unsigned int) ;
 scalar_t__ FUNC_9 (TYPE_3__*,char*,int ) ;
 struct cs42l42_private* FUNC_10 (TYPE_3__*,int,int ) ;
 scalar_t__ FUNC_11 (struct i2c_client*,int *) ;
 int FUNC_12 (TYPE_3__*,int,TYPE_1__*) ;
 int FUNC_13 (TYPE_3__*,int ,int *,int ,int,char*,struct cs42l42_private*) ;
 int FUNC_14 (TYPE_3__*,int *,int *,int) ;
 int FUNC_15 (scalar_t__,int) ;
 int FUNC_16 (struct i2c_client*,struct cs42l42_private*) ;
 int FUNC_17 (int) ;
 int FUNC_18 (scalar_t__,int ,unsigned int*) ;
 int FUNC_19 (scalar_t__,int ,int,int) ;
 int FUNC_20 (int,TYPE_1__*) ;
 int FUNC_21 (int,TYPE_1__*) ;
 int VAR_30 ;

__attribute__((used)) static int FUNC_22(struct i2c_client *VAR_31,
           const struct i2c_device_id *VAR_32)
{
 struct cs42l42_private *VAR_33;
 int VAR_34, VAR_35;
 unsigned int VAR_36 = 0;
 unsigned int VAR_37;

 VAR_33 = FUNC_10(&VAR_31->dev, sizeof(struct cs42l42_private),
          VAR_22);
 if (!VAR_33)
  return -VAR_21;

 FUNC_16(VAR_31, VAR_33);

 VAR_33->regmap = FUNC_11(VAR_31, &VAR_28);
 if (FUNC_1(VAR_33->regmap)) {
  VAR_34 = FUNC_2(VAR_33->regmap);
  FUNC_7(&VAR_31->dev, "regmap_init() failed: %d\n", VAR_34);
  return VAR_34;
 }

 for (VAR_35 = 0; VAR_35 < FUNC_0(VAR_33->supplies); VAR_35++)
  VAR_33->supplies[VAR_35].supply = VAR_29[VAR_35];

 VAR_34 = FUNC_12(&VAR_31->dev,
          FUNC_0(VAR_33->supplies),
          VAR_33->supplies);
 if (VAR_34 != 0) {
  FUNC_7(&VAR_31->dev,
   "Failed to request supplies: %d\n", VAR_34);
  return VAR_34;
 }

 VAR_34 = FUNC_21(FUNC_0(VAR_33->supplies),
        VAR_33->supplies);
 if (VAR_34 != 0) {
  FUNC_7(&VAR_31->dev,
   "Failed to enable supplies: %d\n", VAR_34);
  return VAR_34;
 }


 VAR_33->reset_gpio = FUNC_9(&VAR_31->dev,
  "reset", VAR_23);
 if (FUNC_1(VAR_33->reset_gpio))
  return FUNC_2(VAR_33->reset_gpio);

 if (VAR_33->reset_gpio) {
  FUNC_6(&VAR_31->dev, "Found reset GPIO\n");
  FUNC_15(VAR_33->reset_gpio, 1);
 }
 FUNC_17(3);


 VAR_34 = FUNC_13(&VAR_31->dev,
   VAR_31->irq,
   ((void*)0), VAR_27,
   VAR_24 | VAR_25,
   "cs42l42", VAR_33);

 if (VAR_34 != 0)
  FUNC_7(&VAR_31->dev,
   "Failed to request IRQ: %d\n", VAR_34);


 VAR_34 = FUNC_18(VAR_33->regmap, VAR_7, &VAR_37);
 VAR_36 = (VAR_37 & 0xFF) << 12;

 VAR_34 = FUNC_18(VAR_33->regmap, VAR_8, &VAR_37);
 VAR_36 |= (VAR_37 & 0xFF) << 4;

 VAR_34 = FUNC_18(VAR_33->regmap, VAR_9, &VAR_37);
 VAR_36 |= (VAR_37 & 0xF0) >> 4;

 if (VAR_36 != VAR_6) {
  VAR_34 = -VAR_20;
  FUNC_7(&VAR_31->dev,
   "CS42L42 Device ID (%X). Expected %X\n",
   VAR_36, VAR_6);
  return VAR_34;
 }

 VAR_34 = FUNC_18(VAR_33->regmap, VAR_19, &VAR_37);
 if (VAR_34 < 0) {
  FUNC_7(&VAR_31->dev, "Get Revision ID failed\n");
  return VAR_34;
 }

 FUNC_8(&VAR_31->dev,
   "Cirrus Logic CS42L42, Revision: %02X\n", VAR_37 & 0xFF);


 FUNC_19(VAR_33->regmap, VAR_18,
   VAR_4 |
   VAR_2 |
   VAR_14 |
   VAR_10 |
   VAR_12 |
   VAR_0 |
   VAR_16,
   (1 << VAR_5) |
   (1 << VAR_3) |
   (1 << VAR_15) |
   (1 << VAR_11) |
   (1 << VAR_13) |
   (1 << VAR_1) |
   (0 << VAR_17));

 if (VAR_31->dev.of_node) {
  VAR_34 = FUNC_3(VAR_31, VAR_33);
  if (VAR_34 != 0)
   return VAR_34;
 }


 FUNC_5(VAR_33);


 FUNC_4(VAR_33);


 VAR_34 = FUNC_14(&VAR_31->dev,
   &VAR_30, &VAR_26, 1);
 if (VAR_34 < 0)
  goto err_disable;
 return 0;

err_disable:
 FUNC_20(FUNC_0(VAR_33->supplies),
    VAR_33->supplies);
 return VAR_34;
}
