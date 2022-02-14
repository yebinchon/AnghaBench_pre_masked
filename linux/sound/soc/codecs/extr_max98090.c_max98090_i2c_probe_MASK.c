
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct max98090_priv {int regmap; int dmic_freq; int pdata; int devtype; } ;
struct i2c_device_id {int driver_data; } ;
struct TYPE_9__ {int of_node; int platform_data; TYPE_1__* driver; } ;
struct i2c_client {TYPE_2__ dev; int irq; } ;
struct acpi_device_id {int driver_data; } ;
typedef int kernel_ulong_t ;
struct TYPE_8__ {int acpi_match_table; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 struct acpi_device_id* FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,char*,...) ;
 struct max98090_priv* FUNC_6 (TYPE_2__*,int,int ) ;
 int FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (TYPE_2__*,int ,int *,int ,int,char*,struct max98090_priv*) ;
 int FUNC_9 (TYPE_2__*,int *,int ,int ) ;
 int FUNC_10 (struct i2c_client*,struct max98090_priv*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (int ,char*,int *) ;
 int FUNC_12 (char*) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_10,
     const struct i2c_device_id *VAR_11)
{
 struct max98090_priv *VAR_12;
 const struct acpi_device_id *VAR_13;
 kernel_ulong_t VAR_14 = 0;
 int VAR_15;

 FUNC_12("max98090_i2c_probe\n");

 VAR_12 = FUNC_6(&VAR_10->dev, sizeof(struct max98090_priv),
  VAR_2);
 if (VAR_12 == ((void*)0))
  return -VAR_1;

 if (FUNC_0(&VAR_10->dev)) {
  VAR_13 = FUNC_4(VAR_10->dev.driver->acpi_match_table,
         &VAR_10->dev);
  if (!VAR_13) {
   FUNC_5(&VAR_10->dev, "No driver data\n");
   return -VAR_0;
  }
  VAR_14 = VAR_13->driver_data;
 } else if (VAR_11) {
  VAR_14 = VAR_11->driver_data;
 }

 VAR_12->devtype = VAR_14;
 FUNC_10(VAR_10, VAR_12);
 VAR_12->pdata = VAR_10->dev.platform_data;

 VAR_15 = FUNC_11(VAR_10->dev.of_node, "maxim,dmic-freq",
       &VAR_12->dmic_freq);
 if (VAR_15 < 0)
  VAR_12->dmic_freq = VAR_5;

 VAR_12->regmap = FUNC_7(VAR_10, &VAR_8);
 if (FUNC_2(VAR_12->regmap)) {
  VAR_15 = FUNC_3(VAR_12->regmap);
  FUNC_5(&VAR_10->dev, "Failed to allocate regmap: %d\n", VAR_15);
  goto err_enable;
 }

 VAR_15 = FUNC_8(&VAR_10->dev, VAR_10->irq, ((void*)0),
  VAR_7, VAR_4 | VAR_3,
  "max98090_interrupt", VAR_12);
 if (VAR_15 < 0) {
  FUNC_5(&VAR_10->dev, "request_irq failed: %d\n",
   VAR_15);
  return VAR_15;
 }

 VAR_15 = FUNC_9(&VAR_10->dev,
   &VAR_9, VAR_6,
   FUNC_1(VAR_6));
err_enable:
 return VAR_15;
}
