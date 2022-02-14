
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct ak5558_priv {int reset_gpiod; struct i2c_client* i2c; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*,int ) ;
 struct ak5558_priv* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (int *,int *,int *,int) ;
 int FUNC_6 (struct i2c_client*,struct ak5558_priv*) ;
 int FUNC_7 (int *) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_6)
{
 struct ak5558_priv *VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_3(&VAR_6->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->regmap = FUNC_4(VAR_6, &VAR_4);
 if (FUNC_0(VAR_7->regmap))
  return FUNC_1(VAR_7->regmap);

 FUNC_6(VAR_6, VAR_7);
 VAR_7->i2c = VAR_6;

 VAR_7->reset_gpiod = FUNC_2(&VAR_6->dev, "reset",
            VAR_2);
 if (FUNC_0(VAR_7->reset_gpiod))
  return FUNC_1(VAR_7->reset_gpiod);

 VAR_8 = FUNC_5(&VAR_6->dev,
         &VAR_5,
         &VAR_3, 1);
 if (VAR_8)
  return VAR_8;

 FUNC_7(&VAR_6->dev);

 return 0;
}
