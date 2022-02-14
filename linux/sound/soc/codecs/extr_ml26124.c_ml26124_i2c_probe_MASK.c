
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ml26124_priv {int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 struct ml26124_priv* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (int *,int *,int *,int) ;
 int FUNC_6 (struct i2c_client*,struct ml26124_priv*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_5,
        const struct i2c_device_id *VAR_6)
{
 struct ml26124_priv *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(&VAR_5->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_6(VAR_5, VAR_7);

 VAR_7->regmap = FUNC_4(VAR_5, &VAR_3);
 if (FUNC_0(VAR_7->regmap)) {
  VAR_8 = FUNC_1(VAR_7->regmap);
  FUNC_2(&VAR_5->dev, "regmap_init_i2c() failed: %d\n", VAR_8);
  return VAR_8;
 }

 return FUNC_5(&VAR_5->dev,
   &VAR_4, &VAR_2, 1);
}
