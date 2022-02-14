
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct da9055_priv {int regmap; struct da9055_platform_data* pdata; } ;
struct da9055_platform_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,char*,int) ;
 struct da9055_platform_data* FUNC_3 (int *) ;
 struct da9055_priv* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (int *,int *,int *,int) ;
 int FUNC_7 (struct i2c_client*,struct da9055_priv*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_5,
       const struct i2c_device_id *VAR_6)
{
 struct da9055_priv *VAR_7;
 struct da9055_platform_data *VAR_8 = FUNC_3(&VAR_5->dev);
 int VAR_9;

 VAR_7 = FUNC_4(&VAR_5->dev, sizeof(struct da9055_priv),
         VAR_1);
 if (!VAR_7)
  return -VAR_0;

 if (VAR_8)
  VAR_7->pdata = VAR_8;

 FUNC_7(VAR_5, VAR_7);

 VAR_7->regmap = FUNC_5(VAR_5, &VAR_3);
 if (FUNC_0(VAR_7->regmap)) {
  VAR_9 = FUNC_1(VAR_7->regmap);
  FUNC_2(&VAR_5->dev, "regmap_init() failed: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_6(&VAR_5->dev,
   &VAR_4, &VAR_2, 1);
 if (VAR_9 < 0) {
  FUNC_2(&VAR_5->dev, "Failed to register da9055 component: %d\n",
   VAR_9);
 }
 return VAR_9;
}
