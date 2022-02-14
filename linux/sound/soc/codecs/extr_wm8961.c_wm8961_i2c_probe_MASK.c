
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8961_priv {int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,unsigned int,unsigned int) ;
 struct wm8961_priv* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (int *,int *,int *,int) ;
 int FUNC_7 (struct i2c_client*,struct wm8961_priv*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int ,unsigned int*) ;
 int FUNC_10 (int ,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_12,
       const struct i2c_device_id *VAR_13)
{
 struct wm8961_priv *VAR_14;
 unsigned int VAR_15;
 int VAR_16;

 VAR_14 = FUNC_4(&VAR_12->dev, sizeof(struct wm8961_priv),
         VAR_2);
 if (VAR_14 == ((void*)0))
  return -VAR_1;

 VAR_14->regmap = FUNC_5(VAR_12, &VAR_11);
 if (FUNC_0(VAR_14->regmap))
  return FUNC_1(VAR_14->regmap);

 VAR_16 = FUNC_9(VAR_14->regmap, VAR_8, &VAR_15);
 if (VAR_16 != 0) {
  FUNC_2(&VAR_12->dev, "Failed to read chip ID: %d\n", VAR_16);
  return VAR_16;
 }

 if (VAR_15 != 0x1801) {
  FUNC_2(&VAR_12->dev, "Device is not a WM8961: ID=0x%x\n", VAR_15);
  return -VAR_0;
 }


 FUNC_8(VAR_14->regmap, 1);
 VAR_16 = FUNC_9(VAR_14->regmap, VAR_7, &VAR_15);
 FUNC_8(VAR_14->regmap, 0);

 if (VAR_16 != 0) {
  FUNC_2(&VAR_12->dev, "Failed to read chip revision: %d\n", VAR_16);
  return VAR_16;
 }

 FUNC_3(&VAR_12->dev, "WM8961 family %d revision %c\n",
   (VAR_15 & VAR_5) >> VAR_6,
   ((VAR_15 & VAR_3) >> VAR_4)
   + 'A');

 VAR_16 = FUNC_10(VAR_14->regmap, VAR_8, 0x1801);
 if (VAR_16 != 0) {
  FUNC_2(&VAR_12->dev, "Failed to issue reset: %d\n", VAR_16);
  return VAR_16;
 }

 FUNC_7(VAR_12, VAR_14);

 VAR_16 = FUNC_6(&VAR_12->dev,
   &VAR_9, &VAR_10, 1);

 return VAR_16;
}
