
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt5514_platform_data {int dummy; } ;
struct rt5514_priv {int regmap; int i2c_regmap; struct rt5514_platform_data pdata; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,char*,unsigned int) ;
 struct rt5514_platform_data* FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int) ;
 struct rt5514_priv* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,int *,struct i2c_client*,int *) ;
 int FUNC_8 (struct i2c_client*,int *) ;
 int FUNC_9 (int *,int *,int ,int ) ;
 int FUNC_10 (struct i2c_client*,struct rt5514_priv*) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ,unsigned int*) ;
 int FUNC_13 (int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_14 (struct rt5514_priv*,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_11,
      const struct i2c_device_id *VAR_12)
{
 struct rt5514_platform_data *VAR_13 = FUNC_4(&VAR_11->dev);
 struct rt5514_priv *VAR_14;
 int VAR_15;
 unsigned int VAR_16 = ~0;

 VAR_14 = FUNC_6(&VAR_11->dev, sizeof(struct rt5514_priv),
    VAR_2);
 if (VAR_14 == ((void*)0))
  return -VAR_1;

 FUNC_10(VAR_11, VAR_14);

 if (VAR_13)
  VAR_14->pdata = *VAR_13;
 else
  FUNC_14(VAR_14, &VAR_11->dev);

 VAR_14->i2c_regmap = FUNC_8(VAR_11, &VAR_7);
 if (FUNC_1(VAR_14->i2c_regmap)) {
  VAR_15 = FUNC_2(VAR_14->i2c_regmap);
  FUNC_3(&VAR_11->dev, "Failed to allocate register map: %d\n",
   VAR_15);
  return VAR_15;
 }

 VAR_14->regmap = FUNC_7(&VAR_11->dev, ((void*)0), VAR_11, &VAR_9);
 if (FUNC_1(VAR_14->regmap)) {
  VAR_15 = FUNC_2(VAR_14->regmap);
  FUNC_3(&VAR_11->dev, "Failed to allocate register map: %d\n",
   VAR_15);
  return VAR_15;
 }







 VAR_15 = FUNC_12(VAR_14->regmap, VAR_4, &VAR_16);
 if (VAR_15 || VAR_16 != VAR_3)
  VAR_15 = FUNC_12(VAR_14->regmap, VAR_4, &VAR_16);
 if (VAR_15 || VAR_16 != VAR_3) {
  FUNC_3(&VAR_11->dev,
   "Device with ID register %x is not rt5514\n", VAR_16);
  return -VAR_0;
 }

 VAR_15 = FUNC_11(VAR_14->i2c_regmap, VAR_6,
        FUNC_0(VAR_6));
 if (VAR_15 != 0)
  FUNC_5(&VAR_11->dev, "Failed to apply i2c_regmap patch: %d\n",
   VAR_15);

 VAR_15 = FUNC_13(VAR_14->regmap, VAR_8,
        FUNC_0(VAR_8));
 if (VAR_15 != 0)
  FUNC_5(&VAR_11->dev, "Failed to apply regmap patch: %d\n", VAR_15);

 return FUNC_9(&VAR_11->dev,
   &VAR_10,
   VAR_5, FUNC_0(VAR_5));
}
