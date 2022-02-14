
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt1305_priv {int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_3 (int *,char*,unsigned int) ;
 struct rt1305_priv* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (int *,int *,int ,int ) ;
 int FUNC_7 (struct i2c_client*,struct rt1305_priv*) ;
 int FUNC_8 (int ,int ,unsigned int*) ;
 int FUNC_9 (struct rt1305_priv*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int ) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_8,
      const struct i2c_device_id *VAR_9)
{
 struct rt1305_priv *VAR_10;
 int VAR_11;
 unsigned int VAR_12;

 VAR_10 = FUNC_4(&VAR_8->dev, sizeof(struct rt1305_priv),
    VAR_2);
 if (VAR_10 == ((void*)0))
  return -VAR_1;

 FUNC_7(VAR_8, VAR_10);

 VAR_10->regmap = FUNC_5(VAR_8, &VAR_6);
 if (FUNC_1(VAR_10->regmap)) {
  VAR_11 = FUNC_2(VAR_10->regmap);
  FUNC_3(&VAR_8->dev, "Failed to allocate register map: %d\n",
   VAR_11);
  return VAR_11;
 }

 FUNC_8(VAR_10->regmap, VAR_3, &VAR_12);
 if (VAR_12 != VAR_4) {
  FUNC_3(&VAR_8->dev,
   "Device with ID register %x is not rt1305\n", VAR_12);
  return -VAR_0;
 }

 FUNC_10(VAR_10->regmap);
 FUNC_9(VAR_10);

 return FUNC_6(&VAR_8->dev,
   &VAR_7,
   VAR_5, FUNC_0(VAR_5));
}
