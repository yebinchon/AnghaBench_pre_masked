
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt1011_priv {int cali_work; int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_4 (int *,char*,unsigned int) ;
 struct rt1011_priv* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (int *,int *,int ,int ) ;
 int FUNC_8 (struct i2c_client*,struct rt1011_priv*) ;
 int FUNC_9 (int ,int ,unsigned int*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_9,
      const struct i2c_device_id *VAR_10)
{
 struct rt1011_priv *VAR_11;
 int VAR_12;
 unsigned int VAR_13;

 VAR_11 = FUNC_5(&VAR_9->dev, sizeof(struct rt1011_priv),
    VAR_2);
 if (VAR_11 == ((void*)0))
  return -VAR_1;

 FUNC_8(VAR_9, VAR_11);

 VAR_11->regmap = FUNC_6(VAR_9, &VAR_7);
 if (FUNC_2(VAR_11->regmap)) {
  VAR_12 = FUNC_3(VAR_11->regmap);
  FUNC_4(&VAR_9->dev, "Failed to allocate register map: %d\n",
   VAR_12);
  return VAR_12;
 }

 FUNC_9(VAR_11->regmap, VAR_3, &VAR_13);
 if (VAR_13 != VAR_4) {
  FUNC_4(&VAR_9->dev,
   "Device with ID register %x is not rt1011\n", VAR_13);
  return -VAR_0;
 }

 FUNC_1(&VAR_11->cali_work, VAR_5);

 return FUNC_7(&VAR_9->dev,
  &VAR_8,
  VAR_6, FUNC_0(VAR_6));

}
