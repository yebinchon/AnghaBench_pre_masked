
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct max98095_priv {int pdata; int devtype; int regmap; int lock; } ;
struct i2c_device_id {int driver_data; } ;
struct TYPE_4__ {int platform_data; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 struct max98095_priv* FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_7 (struct i2c_client*,struct max98095_priv*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_5,
        const struct i2c_device_id *VAR_6)
{
 struct max98095_priv *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(&VAR_5->dev, sizeof(struct max98095_priv),
    VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 FUNC_8(&VAR_7->lock);

 VAR_7->regmap = FUNC_5(VAR_5, &VAR_3);
 if (FUNC_1(VAR_7->regmap)) {
  VAR_8 = FUNC_2(VAR_7->regmap);
  FUNC_3(&VAR_5->dev, "Failed to allocate regmap: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_7->devtype = VAR_6->driver_data;
 FUNC_7(VAR_5, VAR_7);
 VAR_7->pdata = VAR_5->dev.platform_data;

 VAR_8 = FUNC_6(&VAR_5->dev,
         &VAR_4,
         VAR_2, FUNC_0(VAR_2));
 return VAR_8;
}
