
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ shared_lrclk; } ;
struct wm8960_priv {int regmap; TYPE_1__ pdata; int mclk; } ;
struct wm8960_data {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_9__ {scalar_t__ of_node; } ;
struct i2c_client {TYPE_3__ dev; } ;


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
 int FUNC_2 (TYPE_3__*,char*,...) ;
 struct wm8960_data* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 struct wm8960_priv* FUNC_5 (TYPE_3__*,int,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (TYPE_3__*,int *,int *,int) ;
 int FUNC_8 (struct i2c_client*,struct wm8960_priv*) ;
 int FUNC_9 (TYPE_1__*,struct wm8960_data*,int) ;
 int FUNC_10 (int ,int ,int,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct i2c_client*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_17,
       const struct i2c_device_id *VAR_18)
{
 struct wm8960_data *VAR_19 = FUNC_3(&VAR_17->dev);
 struct wm8960_priv *VAR_20;
 int VAR_21;

 VAR_20 = FUNC_5(&VAR_17->dev, sizeof(struct wm8960_priv),
         VAR_2);
 if (VAR_20 == ((void*)0))
  return -VAR_0;

 VAR_20->mclk = FUNC_4(&VAR_17->dev, "mclk");
 if (FUNC_0(VAR_20->mclk)) {
  if (FUNC_1(VAR_20->mclk) == -VAR_1)
   return -VAR_1;
 }

 VAR_20->regmap = FUNC_6(VAR_17, &VAR_16);
 if (FUNC_0(VAR_20->regmap))
  return FUNC_1(VAR_20->regmap);

 if (VAR_19)
  FUNC_9(&VAR_20->pdata, VAR_19, sizeof(struct wm8960_data));
 else if (VAR_17->dev.of_node)
  FUNC_12(VAR_17, &VAR_20->pdata);

 VAR_21 = FUNC_11(VAR_20->regmap);
 if (VAR_21 != 0) {
  FUNC_2(&VAR_17->dev, "Failed to issue reset\n");
  return VAR_21;
 }

 if (VAR_20->pdata.shared_lrclk) {
  VAR_21 = FUNC_10(VAR_20->regmap, VAR_3,
      0x4, 0x4);
  if (VAR_21 != 0) {
   FUNC_2(&VAR_17->dev, "Failed to enable LRCM: %d\n",
    VAR_21);
   return VAR_21;
  }
 }


 FUNC_10(VAR_20->regmap, VAR_6, 0x100, 0x100);
 FUNC_10(VAR_20->regmap, VAR_11, 0x100, 0x100);
 FUNC_10(VAR_20->regmap, VAR_4, 0x100, 0x100);
 FUNC_10(VAR_20->regmap, VAR_9, 0x100, 0x100);
 FUNC_10(VAR_20->regmap, VAR_5, 0x100, 0x100);
 FUNC_10(VAR_20->regmap, VAR_10, 0x100, 0x100);
 FUNC_10(VAR_20->regmap, VAR_7, 0x100, 0x100);
 FUNC_10(VAR_20->regmap, VAR_12, 0x100, 0x100);
 FUNC_10(VAR_20->regmap, VAR_8, 0x100, 0x100);
 FUNC_10(VAR_20->regmap, VAR_13, 0x100, 0x100);

 FUNC_8(VAR_17, VAR_20);

 VAR_21 = FUNC_7(&VAR_17->dev,
   &VAR_14, &VAR_15, 1);

 return VAR_21;
}
