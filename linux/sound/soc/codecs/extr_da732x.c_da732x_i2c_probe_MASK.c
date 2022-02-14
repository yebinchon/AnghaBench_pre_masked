
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct da732x_priv {int regmap; } ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,unsigned int,unsigned int) ;
 struct da732x_priv* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (int *,int *,int ,int ) ;
 int FUNC_8 (struct i2c_client*,struct da732x_priv*) ;
 int FUNC_9 (int ,int ,unsigned int*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_8,
       const struct i2c_device_id *VAR_9)
{
 struct da732x_priv *VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 VAR_10 = FUNC_5(&VAR_8->dev, sizeof(struct da732x_priv),
         VAR_4);
 if (!VAR_10)
  return -VAR_3;

 FUNC_8(VAR_8, VAR_10);

 VAR_10->regmap = FUNC_6(VAR_8, &VAR_6);
 if (FUNC_1(VAR_10->regmap)) {
  VAR_12 = FUNC_2(VAR_10->regmap);
  FUNC_3(&VAR_8->dev, "Failed to initialize regmap\n");
  goto err;
 }

 VAR_12 = FUNC_9(VAR_10->regmap, VAR_2, &VAR_11);
 if (VAR_12 < 0) {
  FUNC_3(&VAR_8->dev, "Failed to read ID register: %d\n", VAR_12);
  goto err;
 }

 FUNC_4(&VAR_8->dev, "Revision: %d.%d\n",
   (VAR_11 & VAR_0) >> 4,
   (VAR_11 & VAR_1));

 VAR_12 = FUNC_7(&VAR_8->dev,
         &VAR_7,
         VAR_5, FUNC_0(VAR_5));
 if (VAR_12 != 0)
  FUNC_3(&VAR_8->dev, "Failed to register component.\n");

err:
 return VAR_12;
}
