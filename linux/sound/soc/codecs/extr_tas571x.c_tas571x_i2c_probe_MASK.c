
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int num_controls; int controls; } ;
struct tas571x_private {TYPE_3__ component_driver; void* regmap; TYPE_1__* chip; void* reset_gpio; void* pdn_gpio; TYPE_2__* supplies; void* mclk; } ;
struct of_device_id {TYPE_1__* data; } ;
struct i2c_device_id {scalar_t__ driver_data; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;
struct TYPE_7__ {int supply; } ;
struct TYPE_6__ {int num_supply_names; int vol_reg_size; int num_controls; int controls; int regmap_config; int * supply_names; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct device*,char*,int) ;
 void* FUNC_4 (struct device*,char*) ;
 void* FUNC_5 (struct device*,char*,int ) ;
 struct tas571x_private* FUNC_6 (struct device*,int,int ) ;
 void* FUNC_7 (struct device*,int *,struct i2c_client*,int ) ;
 int FUNC_8 (struct device*,int,TYPE_2__*) ;
 int FUNC_9 (struct device*,TYPE_3__*,int *,int) ;
 int FUNC_10 (void*,int ) ;
 int FUNC_11 (struct i2c_client*,struct tas571x_private*) ;
 int FUNC_12 (TYPE_3__*,int *,int) ;
 struct of_device_id* FUNC_13 (int ,struct device*) ;
 int FUNC_14 (void*,int ,int,int ) ;
 int FUNC_15 (void*,int ,int ) ;
 int FUNC_16 (int,TYPE_2__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_17 (int,int) ;

__attribute__((used)) static int FUNC_18(struct i2c_client *VAR_12,
        const struct i2c_device_id *VAR_13)
{
 struct tas571x_private *VAR_14;
 struct device *VAR_15 = &VAR_12->dev;
 const struct of_device_id *VAR_16;
 int VAR_17, VAR_18;

 VAR_14 = FUNC_6(VAR_15, sizeof(*VAR_14), VAR_3);
 if (!VAR_14)
  return -VAR_2;
 FUNC_11(VAR_12, VAR_14);

 VAR_16 = FUNC_13(VAR_11, VAR_15);
 if (VAR_16)
  VAR_14->chip = VAR_16->data;
 else
  VAR_14->chip = (void *) VAR_13->driver_data;

 VAR_14->mclk = FUNC_4(VAR_15, "mclk");
 if (FUNC_0(VAR_14->mclk) && FUNC_1(VAR_14->mclk) != -VAR_1) {
  FUNC_3(VAR_15, "Failed to request mclk: %ld\n",
   FUNC_1(VAR_14->mclk));
  return FUNC_1(VAR_14->mclk);
 }

 if (FUNC_2(VAR_14->chip->num_supply_names > VAR_6))
  return -VAR_0;
 for (VAR_17 = 0; VAR_17 < VAR_14->chip->num_supply_names; VAR_17++)
  VAR_14->supplies[VAR_17].supply = VAR_14->chip->supply_names[VAR_17];

 VAR_18 = FUNC_8(VAR_15, VAR_14->chip->num_supply_names,
          VAR_14->supplies);
 if (VAR_18) {
  FUNC_3(VAR_15, "Failed to get supplies: %d\n", VAR_18);
  return VAR_18;
 }
 VAR_18 = FUNC_16(VAR_14->chip->num_supply_names,
        VAR_14->supplies);
 if (VAR_18) {
  FUNC_3(VAR_15, "Failed to enable supplies: %d\n", VAR_18);
  return VAR_18;
 }

 VAR_14->regmap = FUNC_7(VAR_15, ((void*)0), VAR_12,
     VAR_14->chip->regmap_config);
 if (FUNC_0(VAR_14->regmap))
  return FUNC_1(VAR_14->regmap);

 VAR_14->pdn_gpio = FUNC_5(VAR_15, "pdn", VAR_5);
 if (FUNC_0(VAR_14->pdn_gpio)) {
  FUNC_3(VAR_15, "error requesting pdn_gpio: %ld\n",
   FUNC_1(VAR_14->pdn_gpio));
  return FUNC_1(VAR_14->pdn_gpio);
 }

 VAR_14->reset_gpio = FUNC_5(VAR_15, "reset",
         VAR_4);
 if (FUNC_0(VAR_14->reset_gpio)) {
  FUNC_3(VAR_15, "error requesting reset_gpio: %ld\n",
   FUNC_1(VAR_14->reset_gpio));
  return FUNC_1(VAR_14->reset_gpio);
 } else if (VAR_14->reset_gpio) {

  FUNC_17(100, 200);
  FUNC_10(VAR_14->reset_gpio, 0);
  FUNC_17(13500, 20000);
 }

 VAR_18 = FUNC_15(VAR_14->regmap, VAR_8, 0);
 if (VAR_18)
  return VAR_18;

 FUNC_17(50000, 60000);

 FUNC_12(&VAR_14->component_driver, &VAR_9, sizeof(VAR_14->component_driver));
 VAR_14->component_driver.controls = VAR_14->chip->controls;
 VAR_14->component_driver.num_controls = VAR_14->chip->num_controls;

 if (VAR_14->chip->vol_reg_size == 2) {





  VAR_18 = FUNC_14(VAR_14->regmap, VAR_7, 1, 0);
  if (VAR_18)
   return VAR_18;
 }

 return FUNC_9(&VAR_12->dev,
          &VAR_14->component_driver,
          &VAR_10, 1);
}
