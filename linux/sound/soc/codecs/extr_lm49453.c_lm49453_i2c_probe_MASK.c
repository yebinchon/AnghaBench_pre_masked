
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm49453_priv {int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int) ;
 struct lm49453_priv* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (int *,int *,int ,int ) ;
 int FUNC_7 (struct i2c_client*,struct lm49453_priv*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_5,
        const struct i2c_device_id *VAR_6)
{
 struct lm49453_priv *VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_4(&VAR_5->dev, sizeof(struct lm49453_priv),
    VAR_1);

 if (VAR_7 == ((void*)0))
  return -VAR_0;

 FUNC_7(VAR_5, VAR_7);

 VAR_7->regmap = FUNC_5(VAR_5, &VAR_3);
 if (FUNC_1(VAR_7->regmap)) {
  VAR_8 = FUNC_2(VAR_7->regmap);
  FUNC_3(&VAR_5->dev, "Failed to allocate register map: %d\n",
   VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_6(&VAR_5->dev,
          &VAR_4,
          VAR_2, FUNC_0(VAR_2));
 if (VAR_8 < 0)
  FUNC_3(&VAR_5->dev, "Failed to register component: %d\n", VAR_8);

 return VAR_8;
}
