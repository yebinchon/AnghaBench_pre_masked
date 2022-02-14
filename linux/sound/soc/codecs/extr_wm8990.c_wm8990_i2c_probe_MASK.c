
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8990_priv {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wm8990_priv* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int *,int *,int) ;
 int FUNC_2 (struct i2c_client*,struct wm8990_priv*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_4,
       const struct i2c_device_id *VAR_5)
{
 struct wm8990_priv *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(&VAR_4->dev, sizeof(struct wm8990_priv),
         VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 FUNC_2(VAR_4, VAR_6);

 VAR_7 = FUNC_1(&VAR_4->dev,
   &VAR_2, &VAR_3, 1);

 return VAR_7;
}
