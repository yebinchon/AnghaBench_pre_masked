
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8978_priv {int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,char*,int) ;
 struct wm8978_priv* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (int *,int *,int *,int) ;
 int FUNC_6 (struct i2c_client*,struct wm8978_priv*) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_6,
       const struct i2c_device_id *VAR_7)
{
 struct wm8978_priv *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(&VAR_6->dev, sizeof(struct wm8978_priv),
         VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_8->regmap = FUNC_4(VAR_6, &VAR_5);
 if (FUNC_0(VAR_8->regmap)) {
  VAR_9 = FUNC_1(VAR_8->regmap);
  FUNC_2(&VAR_6->dev, "Failed to allocate regmap: %d\n", VAR_9);
  return VAR_9;
 }

 FUNC_6(VAR_6, VAR_8);


 VAR_9 = FUNC_7(VAR_8->regmap, VAR_2, 0);
 if (VAR_9 != 0) {
  FUNC_2(&VAR_6->dev, "Failed to issue reset: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_5(&VAR_6->dev,
   &VAR_3, &VAR_4, 1);
 if (VAR_9 != 0) {
  FUNC_2(&VAR_6->dev, "Failed to register CODEC: %d\n", VAR_9);
  return VAR_9;
 }

 return 0;
}
