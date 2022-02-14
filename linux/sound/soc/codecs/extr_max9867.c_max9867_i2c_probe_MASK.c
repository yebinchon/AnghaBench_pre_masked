
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max9867_priv {int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*,int) ;
 struct max9867_priv* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (int *,int *,int ,int ) ;
 int FUNC_8 (struct i2c_client*,struct max9867_priv*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_6,
  const struct i2c_device_id *VAR_7)
{
 struct max9867_priv *VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = FUNC_5(&VAR_6->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_8(VAR_6, VAR_8);
 VAR_8->regmap = FUNC_6(VAR_6, &VAR_5);
 if (FUNC_1(VAR_8->regmap)) {
  VAR_9 = FUNC_2(VAR_8->regmap);
  FUNC_3(&VAR_6->dev, "Failed to allocate regmap: %d\n", VAR_9);
  return VAR_9;
 }
 VAR_9 = FUNC_9(VAR_8->regmap, VAR_2, &VAR_10);
 if (VAR_9 < 0) {
  FUNC_3(&VAR_6->dev, "Failed to read: %d\n", VAR_9);
  return VAR_9;
 }
 FUNC_4(&VAR_6->dev, "device revision: %x\n", VAR_10);
 VAR_9 = FUNC_7(&VAR_6->dev, &VAR_3,
   VAR_4, FUNC_0(VAR_4));
 if (VAR_9 < 0)
  FUNC_3(&VAR_6->dev, "Failed to register component: %d\n", VAR_9);
 return VAR_9;
}
