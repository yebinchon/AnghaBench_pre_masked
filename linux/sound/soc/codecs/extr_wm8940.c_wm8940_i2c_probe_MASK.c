
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8940_priv {int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct wm8940_priv* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct i2c_client*,int *) ;
 int FUNC_4 (int *,int *,int *,int) ;
 int FUNC_5 (struct i2c_client*,struct wm8940_priv*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_5,
       const struct i2c_device_id *VAR_6)
{
 struct wm8940_priv *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(&VAR_5->dev, sizeof(struct wm8940_priv),
         VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_7->regmap = FUNC_3(VAR_5, &VAR_4);
 if (FUNC_0(VAR_7->regmap))
  return FUNC_1(VAR_7->regmap);

 FUNC_5(VAR_5, VAR_7);

 VAR_8 = FUNC_4(&VAR_5->dev,
   &VAR_2, &VAR_3, 1);

 return VAR_8;
}
