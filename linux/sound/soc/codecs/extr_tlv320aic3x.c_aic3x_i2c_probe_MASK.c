
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct i2c_device_id {scalar_t__ driver_data; } ;
struct TYPE_11__ {struct device_node* of_node; struct aic3x_pdata* platform_data; } ;
struct i2c_client {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
struct aic3x_setup_data {int gpio_func; } ;
struct aic3x_priv {int gpio_reset; scalar_t__ model; int list; int regmap; TYPE_1__* supplies; void* micbias_vg; struct aic3x_setup_data* setup; } ;
struct aic3x_pdata {int gpio_reset; void* micbias_vg; struct aic3x_setup_data* setup; } ;
struct TYPE_10__ {int supply; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* VAR_7 ;
 int FUNC_4 (struct i2c_client*) ;
 int VAR_8 ;
 int FUNC_5 (struct aic3x_priv*) ;
 int VAR_9 ;
 int * VAR_10 ;
 int FUNC_6 (TYPE_2__*,char*,...) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 void* FUNC_8 (TYPE_2__*,int,int ) ;
 int FUNC_9 (struct i2c_client*,int *) ;
 int FUNC_10 (TYPE_2__*,int,TYPE_1__*) ;
 int FUNC_11 (TYPE_2__*,int *,int *,int) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (int,char*) ;
 int FUNC_16 (struct i2c_client*,struct aic3x_priv*) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (struct device_node*,char*,int ) ;
 int FUNC_19 (struct device_node*,char*,int*) ;
 scalar_t__ FUNC_20 (struct device_node*,char*,int ,int) ;
 int FUNC_21 (int ,int) ;
 int FUNC_22 (int ,TYPE_1__*,int) ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_23(struct i2c_client *VAR_13,
      const struct i2c_device_id *VAR_14)
{
 struct aic3x_pdata *VAR_15 = VAR_13->dev.platform_data;
 struct aic3x_priv *VAR_16;
 struct aic3x_setup_data *VAR_17;
 struct device_node *VAR_18 = VAR_13->dev.of_node;
 int VAR_19, VAR_20;
 u32 VAR_21;

 VAR_16 = FUNC_8(&VAR_13->dev, sizeof(struct aic3x_priv), VAR_6);
 if (!VAR_16)
  return -VAR_5;

 VAR_16->regmap = FUNC_9(VAR_13, &VAR_9);
 if (FUNC_2(VAR_16->regmap)) {
  VAR_19 = FUNC_3(VAR_16->regmap);
  return VAR_19;
 }

 FUNC_21(VAR_16->regmap, 1);

 FUNC_16(VAR_13, VAR_16);
 if (VAR_15) {
  VAR_16->gpio_reset = VAR_15->gpio_reset;
  VAR_16->setup = VAR_15->setup;
  VAR_16->micbias_vg = VAR_15->micbias_vg;
 } else if (VAR_18) {
  VAR_17 = FUNC_8(&VAR_13->dev, sizeof(*VAR_17),
        VAR_6);
  if (!VAR_17)
   return -VAR_5;

  VAR_19 = FUNC_18(VAR_18, "reset-gpios", 0);
  if (VAR_19 >= 0) {
   VAR_16->gpio_reset = VAR_19;
  } else {
   VAR_19 = FUNC_18(VAR_18, "gpio-reset", 0);
   if (VAR_19 > 0) {
    FUNC_7(&VAR_13->dev, "Using deprecated property \"gpio-reset\", please update your DT");
    VAR_16->gpio_reset = VAR_19;
   } else {
    VAR_16->gpio_reset = -1;
   }
  }

  if (FUNC_20(VAR_18, "ai3x-gpio-func",
     VAR_17->gpio_func, 2) >= 0) {
   VAR_16->setup = VAR_17;
  }

  if (!FUNC_19(VAR_18, "ai3x-micbias-vg", &VAR_21)) {
   switch (VAR_21) {
   case 1 :
    VAR_16->micbias_vg = VAR_0;
    break;
   case 2 :
    VAR_16->micbias_vg = VAR_1;
    break;
   case 3 :
    VAR_16->micbias_vg = VAR_2;
    break;
   default :
    VAR_16->micbias_vg = VAR_3;
    FUNC_6(&VAR_13->dev, "Unsuitable MicBias voltage "
       "found in DT\n");
   }
  } else {
   VAR_16->micbias_vg = VAR_3;
  }

 } else {
  VAR_16->gpio_reset = -1;
 }

 VAR_16->model = VAR_14->driver_data;

 if (FUNC_14(VAR_16->gpio_reset) &&
     !FUNC_5(VAR_16)) {
  VAR_19 = FUNC_15(VAR_16->gpio_reset, "tlv320aic3x reset");
  if (VAR_19 != 0)
   goto err;
  FUNC_12(VAR_16->gpio_reset, 0);
 }

 for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_16->supplies); VAR_20++)
  VAR_16->supplies[VAR_20].supply = VAR_10[VAR_20];

 VAR_19 = FUNC_10(&VAR_13->dev, FUNC_0(VAR_16->supplies),
          VAR_16->supplies);
 if (VAR_19 != 0) {
  FUNC_6(&VAR_13->dev, "Failed to request supplies: %d\n", VAR_19);
  goto err_gpio;
 }

 FUNC_4(VAR_13);

 if (VAR_16->model == VAR_4) {
  VAR_19 = FUNC_22(VAR_16->regmap, VAR_7,
         FUNC_0(VAR_7));
  if (VAR_19 != 0)
   FUNC_6(&VAR_13->dev, "Failed to init class D: %d\n",
    VAR_19);
 }

 VAR_19 = FUNC_11(&VAR_13->dev,
   &VAR_12, &VAR_8, 1);

 if (VAR_19 != 0)
  goto err_gpio;

 FUNC_1(&VAR_16->list);
 FUNC_17(&VAR_16->list, &VAR_11);

 return 0;

err_gpio:
 if (FUNC_14(VAR_16->gpio_reset) &&
     !FUNC_5(VAR_16))
  FUNC_13(VAR_16->gpio_reset);
err:
 return VAR_19;
}
