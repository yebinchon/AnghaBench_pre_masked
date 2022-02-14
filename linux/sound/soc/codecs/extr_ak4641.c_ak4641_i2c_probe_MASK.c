
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct TYPE_3__ {struct ak4641_platform_data* platform_data; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct ak4641_priv {int regmap; } ;
struct ak4641_platform_data {int gpio_power; int gpio_npdn; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct ak4641_priv* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,char*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (struct i2c_client*,struct ak4641_priv*) ;
 int VAR_5 ;
 int FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_6,
       const struct i2c_device_id *VAR_7)
{
 struct ak4641_platform_data *VAR_8 = VAR_6->dev.platform_data;
 struct ak4641_priv *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(&VAR_6->dev, sizeof(struct ak4641_priv),
         VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->regmap = FUNC_4(VAR_6, &VAR_4);
 if (FUNC_1(VAR_9->regmap))
  return FUNC_2(VAR_9->regmap);

 if (VAR_8) {
  if (FUNC_7(VAR_8->gpio_power)) {
   VAR_10 = FUNC_8(VAR_8->gpio_power,
     VAR_2, "ak4641 power");
   if (VAR_10)
    goto err_out;
  }
  if (FUNC_7(VAR_8->gpio_npdn)) {
   VAR_10 = FUNC_8(VAR_8->gpio_npdn,
     VAR_2, "ak4641 npdn");
   if (VAR_10)
    goto err_gpio;

   FUNC_11(1);
   FUNC_9(VAR_8->gpio_npdn, 1);
  }
 }

 FUNC_10(VAR_6, VAR_9);

 VAR_10 = FUNC_5(&VAR_6->dev,
    &VAR_5,
    VAR_3, FUNC_0(VAR_3));
 if (VAR_10 != 0)
  goto err_gpio2;

 return 0;

err_gpio2:
 if (VAR_8) {
  if (FUNC_7(VAR_8->gpio_power))
   FUNC_9(VAR_8->gpio_power, 0);
  if (FUNC_7(VAR_8->gpio_npdn))
   FUNC_6(VAR_8->gpio_npdn);
 }
err_gpio:
 if (VAR_8 && FUNC_7(VAR_8->gpio_power))
  FUNC_6(VAR_8->gpio_power);
err_out:
 return VAR_10;
}
