
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ dmic2_clk_pin; scalar_t__ micbias1_vdd_3v3; scalar_t__ lout3_diff; scalar_t__ lout2_diff; scalar_t__ lout1_diff; scalar_t__ in2_diff; scalar_t__ in1_diff; } ;
struct rt5677_priv {int type; void* regmap; TYPE_1__ pdata; void* regmap_physical; void* reset_pin; void* pow_ldo2; TYPE_2__* dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct TYPE_13__ {scalar_t__ of_node; } ;
struct i2c_client {TYPE_2__ dev; } ;
struct acpi_device_id {scalar_t__ driver_data; } ;
typedef enum rt5677_type { ____Placeholder_rt5677_type } rt5677_type ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 unsigned int VAR_6 ;
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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 struct acpi_device_id* FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,char*,int) ;
 int FUNC_6 (TYPE_2__*,char*,int) ;
 void* FUNC_7 (TYPE_2__*,char*,int ) ;
 struct rt5677_priv* FUNC_8 (TYPE_2__*,int,int ) ;
 void* FUNC_9 (TYPE_2__*,int *,struct i2c_client*,int *) ;
 void* FUNC_10 (struct i2c_client*,int *) ;
 int FUNC_11 (TYPE_2__*,int *,int ,int ) ;
 int FUNC_12 (struct i2c_client*,struct rt5677_priv*) ;
 int VAR_26 ;
 int FUNC_13 (int) ;
 struct of_device_id* FUNC_14 (int ,TYPE_2__*) ;
 int FUNC_15 (void*,int ,unsigned int*) ;
 int FUNC_16 (void*,int ,int ) ;
 int FUNC_17 (void*,int ,int ,int ) ;
 int FUNC_18 (void*,int ,int) ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_19 (struct i2c_client*) ;
 int FUNC_20 (struct i2c_client*) ;
 int VAR_29 ;
 int FUNC_21 (struct rt5677_priv*,TYPE_2__*) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;

__attribute__((used)) static int FUNC_22(struct i2c_client *VAR_33)
{
 struct rt5677_priv *VAR_34;
 int VAR_35;
 unsigned int VAR_36;

 VAR_34 = FUNC_8(&VAR_33->dev, sizeof(struct rt5677_priv),
    VAR_3);
 if (VAR_34 == ((void*)0))
  return -VAR_2;

 VAR_34->dev = &VAR_33->dev;
 FUNC_12(VAR_33, VAR_34);

 if (VAR_33->dev.of_node) {
  const struct of_device_id *VAR_37;

  VAR_37 = FUNC_14(VAR_29, &VAR_33->dev);
  if (VAR_37)
   VAR_34->type = (enum rt5677_type)VAR_37->data;
 } else if (FUNC_0(&VAR_33->dev)) {
  const struct acpi_device_id *VAR_38;

  VAR_38 = FUNC_4(VAR_27, &VAR_33->dev);
  if (VAR_38)
   VAR_34->type = (enum rt5677_type)VAR_38->driver_data;
 } else {
  return -VAR_0;
 }

 FUNC_21(VAR_34, &VAR_33->dev);





 VAR_34->pow_ldo2 = FUNC_7(&VAR_33->dev,
   "realtek,pow-ldo2", VAR_4);
 if (FUNC_2(VAR_34->pow_ldo2)) {
  VAR_35 = FUNC_3(VAR_34->pow_ldo2);
  FUNC_5(&VAR_33->dev, "Failed to request POW_LDO2: %d\n", VAR_35);
  return VAR_35;
 }
 VAR_34->reset_pin = FUNC_7(&VAR_33->dev,
   "realtek,reset", VAR_5);
 if (FUNC_2(VAR_34->reset_pin)) {
  VAR_35 = FUNC_3(VAR_34->reset_pin);
  FUNC_5(&VAR_33->dev, "Failed to request RESET: %d\n", VAR_35);
  return VAR_35;
 }

 if (VAR_34->pow_ldo2 || VAR_34->reset_pin) {




  FUNC_13(10);
 }

 VAR_34->regmap_physical = FUNC_10(VAR_33,
     &VAR_31);
 if (FUNC_2(VAR_34->regmap_physical)) {
  VAR_35 = FUNC_3(VAR_34->regmap_physical);
  FUNC_5(&VAR_33->dev, "Failed to allocate register map: %d\n",
   VAR_35);
  return VAR_35;
 }

 VAR_34->regmap = FUNC_9(&VAR_33->dev, ((void*)0), VAR_33, &VAR_30);
 if (FUNC_2(VAR_34->regmap)) {
  VAR_35 = FUNC_3(VAR_34->regmap);
  FUNC_5(&VAR_33->dev, "Failed to allocate register map: %d\n",
   VAR_35);
  return VAR_35;
 }

 FUNC_15(VAR_34->regmap, VAR_25, &VAR_36);
 if (VAR_36 != VAR_6) {
  FUNC_5(&VAR_33->dev,
   "Device with ID register %#x is not rt5677\n", VAR_36);
  return -VAR_1;
 }

 FUNC_18(VAR_34->regmap, VAR_24, 0x10ec);

 VAR_35 = FUNC_16(VAR_34->regmap, VAR_26,
        FUNC_1(VAR_26));
 if (VAR_35 != 0)
  FUNC_6(&VAR_33->dev, "Failed to apply regmap patch: %d\n", VAR_35);

 if (VAR_34->pdata.in1_diff)
  FUNC_17(VAR_34->regmap, VAR_14,
     VAR_15, VAR_15);

 if (VAR_34->pdata.in2_diff)
  FUNC_17(VAR_34->regmap, VAR_14,
     VAR_16, VAR_16);

 if (VAR_34->pdata.lout1_diff)
  FUNC_17(VAR_34->regmap, VAR_17,
     VAR_18, VAR_18);

 if (VAR_34->pdata.lout2_diff)
  FUNC_17(VAR_34->regmap, VAR_17,
     VAR_19, VAR_19);

 if (VAR_34->pdata.lout3_diff)
  FUNC_17(VAR_34->regmap, VAR_17,
     VAR_20, VAR_20);

 if (VAR_34->pdata.dmic2_clk_pin == VAR_7) {
  FUNC_17(VAR_34->regmap, VAR_8,
     VAR_12,
     VAR_11);
  FUNC_17(VAR_34->regmap, VAR_13,
     VAR_9,
     VAR_10);
 }

 if (VAR_34->pdata.micbias1_vdd_3v3)
  FUNC_17(VAR_34->regmap, VAR_21,
   VAR_23,
   VAR_22);

 FUNC_19(VAR_33);
 VAR_35 = FUNC_20(VAR_33);
 if (VAR_35)
  FUNC_5(&VAR_33->dev, "Failed to initialize irq: %d\n", VAR_35);

 return FUNC_11(&VAR_33->dev,
          &VAR_32,
          VAR_28, FUNC_1(VAR_28));
}
