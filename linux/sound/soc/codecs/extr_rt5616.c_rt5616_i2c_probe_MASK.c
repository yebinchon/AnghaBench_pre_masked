
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt5616_priv {int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int *,char*,unsigned int) ;
 int FUNC_4 (int *,char*,int) ;
 struct rt5616_priv* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (int *,int *,int ,int ) ;
 int FUNC_8 (struct i2c_client*,struct rt5616_priv*) ;
 int VAR_14 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int ,unsigned int*) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ,int,int) ;
 int FUNC_13 (int ,int ,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_18,
       const struct i2c_device_id *VAR_19)
{
 struct rt5616_priv *VAR_20;
 unsigned int VAR_21;
 int VAR_22;

 VAR_20 = FUNC_5(&VAR_18->dev, sizeof(struct rt5616_priv),
         VAR_2);
 if (!VAR_20)
  return -VAR_1;

 FUNC_8(VAR_18, VAR_20);

 VAR_20->regmap = FUNC_6(VAR_18, &VAR_16);
 if (FUNC_1(VAR_20->regmap)) {
  VAR_22 = FUNC_2(VAR_20->regmap);
  FUNC_3(&VAR_18->dev, "Failed to allocate register map: %d\n",
   VAR_22);
  return VAR_22;
 }

 FUNC_10(VAR_20->regmap, VAR_3, &VAR_21);
 if (VAR_21 != 0x6281) {
  FUNC_3(&VAR_18->dev,
   "Device with ID register %#x is not rt5616\n",
   VAR_21);
  return -VAR_0;
 }
 FUNC_13(VAR_20->regmap, VAR_13, 0);
 FUNC_12(VAR_20->regmap, VAR_4,
      VAR_11 | VAR_10 |
      VAR_5 | VAR_12,
      VAR_11 | VAR_10 |
      VAR_5 | VAR_12);
 FUNC_9(10);
 FUNC_12(VAR_20->regmap, VAR_4,
      VAR_6 | VAR_7,
      VAR_6 | VAR_7);

 VAR_22 = FUNC_11(VAR_20->regmap, VAR_14,
        FUNC_0(VAR_14));
 if (VAR_22 != 0)
  FUNC_4(&VAR_18->dev, "Failed to apply regmap patch: %d\n", VAR_22);

 FUNC_12(VAR_20->regmap, VAR_4,
      VAR_9, VAR_8);

 return FUNC_7(&VAR_18->dev,
          &VAR_17,
          VAR_15, FUNC_0(VAR_15));
}
