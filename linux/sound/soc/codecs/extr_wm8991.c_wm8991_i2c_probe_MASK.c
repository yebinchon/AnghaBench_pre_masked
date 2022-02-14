
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8991_priv {int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int *,char*,int) ;
 struct wm8991_priv* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (int *,int *,int *,int) ;
 int FUNC_6 (struct i2c_client*,struct wm8991_priv*) ;
 int FUNC_7 (int ,int ,unsigned int*) ;
 int FUNC_8 (int ,int ,int,int) ;
 int FUNC_9 (int ,int ,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_19,
       const struct i2c_device_id *VAR_20)
{
 struct wm8991_priv *VAR_21;
 unsigned int VAR_22;
 int VAR_23;

 VAR_21 = FUNC_3(&VAR_19->dev, sizeof(*VAR_21), VAR_2);
 if (!VAR_21)
  return -VAR_1;

 VAR_21->regmap = FUNC_4(VAR_19, &VAR_18);
 if (FUNC_0(VAR_21->regmap))
  return FUNC_1(VAR_21->regmap);

 FUNC_6(VAR_19, VAR_21);

 VAR_23 = FUNC_7(VAR_21->regmap, VAR_12, &VAR_22);
 if (VAR_23 != 0) {
  FUNC_2(&VAR_19->dev, "Failed to read device ID: %d\n", VAR_23);
  return VAR_23;
 }
 if (VAR_22 != 0x8991) {
  FUNC_2(&VAR_19->dev, "Device with ID %x is not a WM8991\n", VAR_22);
  return -VAR_0;
 }

 VAR_23 = FUNC_9(VAR_21->regmap, VAR_12, 0);
 if (VAR_23 < 0) {
  FUNC_2(&VAR_19->dev, "Failed to issue reset: %d\n", VAR_23);
  return VAR_23;
 }

 FUNC_8(VAR_21->regmap, VAR_4,
      VAR_3, VAR_3);

 FUNC_8(VAR_21->regmap, VAR_6,
      VAR_7, 1);

 FUNC_8(VAR_21->regmap, VAR_10,
      VAR_15 | VAR_14,
      VAR_15 | VAR_14);

 FUNC_8(VAR_21->regmap, VAR_11,
      VAR_9, VAR_9);

 FUNC_9(VAR_21->regmap, VAR_5, 0);
 FUNC_9(VAR_21->regmap, VAR_8,
       0x50 | (1<<8));
 FUNC_9(VAR_21->regmap, VAR_13,
       0x50 | (1<<8));

 VAR_23 = FUNC_5(&VAR_19->dev,
         &VAR_16, &VAR_17, 1);

 return VAR_23;
}
