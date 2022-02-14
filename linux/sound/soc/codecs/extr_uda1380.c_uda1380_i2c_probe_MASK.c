
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct uda1380_priv {struct i2c_client* i2c; int reg_cache; } ;
struct uda1380_platform_data {int gpio_power; int gpio_reset; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_5__ {struct uda1380_platform_data* platform_data; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ,int ,char*) ;
 int FUNC_2 (TYPE_1__*,int ,int,int ) ;
 struct uda1380_priv* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (TYPE_1__*,int *,int ,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct i2c_client*,struct uda1380_priv*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_7,
        const struct i2c_device_id *VAR_8)
{
 struct uda1380_platform_data *VAR_9 = VAR_7->dev.platform_data;
 struct uda1380_priv *VAR_10;
 int VAR_11;

 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_3(&VAR_7->dev, sizeof(struct uda1380_priv),
          VAR_2);
 if (VAR_10 == ((void*)0))
  return -VAR_1;

 if (FUNC_5(VAR_9->gpio_reset)) {
  VAR_11 = FUNC_1(&VAR_7->dev, VAR_9->gpio_reset,
   VAR_3, "uda1380 reset");
  if (VAR_11)
   return VAR_11;
 }

 if (FUNC_5(VAR_9->gpio_power)) {
  VAR_11 = FUNC_1(&VAR_7->dev, VAR_9->gpio_power,
   VAR_3, "uda1380 power");
  if (VAR_11)
   return VAR_11;
 }

 VAR_10->reg_cache = FUNC_2(&VAR_7->dev,
     VAR_6,
     FUNC_0(VAR_6) * sizeof(u16),
     VAR_2);
 if (!VAR_10->reg_cache)
  return -VAR_1;

 FUNC_6(VAR_7, VAR_10);
 VAR_10->i2c = VAR_7;

 VAR_11 = FUNC_4(&VAR_7->dev,
   &VAR_4, VAR_5, FUNC_0(VAR_5));
 return VAR_11;
}
