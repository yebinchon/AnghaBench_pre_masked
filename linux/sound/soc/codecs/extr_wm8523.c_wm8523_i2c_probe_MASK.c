
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct wm8523_priv {TYPE_1__* supplies; int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct TYPE_5__ {int supply; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,unsigned int) ;
 struct wm8523_priv* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (int *,int,TYPE_1__*) ;
 int FUNC_8 (int *,int *,int *,int) ;
 int FUNC_9 (struct i2c_client*,struct wm8523_priv*) ;
 int FUNC_10 (int ,int ,unsigned int*) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int,TYPE_1__*) ;
 int FUNC_13 (int,TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_10,
       const struct i2c_device_id *VAR_11)
{
 struct wm8523_priv *VAR_12;
 unsigned int VAR_13;
 int VAR_14, VAR_15;

 VAR_12 = FUNC_5(&VAR_10->dev, sizeof(struct wm8523_priv),
         VAR_2);
 if (VAR_12 == ((void*)0))
  return -VAR_1;

 VAR_12->regmap = FUNC_6(VAR_10, &VAR_8);
 if (FUNC_1(VAR_12->regmap)) {
  VAR_14 = FUNC_2(VAR_12->regmap);
  FUNC_3(&VAR_10->dev, "Failed to create regmap: %d\n", VAR_14);
  return VAR_14;
 }

 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_12->supplies); VAR_15++)
  VAR_12->supplies[VAR_15].supply = VAR_9[VAR_15];

 VAR_14 = FUNC_7(&VAR_10->dev, FUNC_0(VAR_12->supplies),
          VAR_12->supplies);
 if (VAR_14 != 0) {
  FUNC_3(&VAR_10->dev, "Failed to request supplies: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_13(FUNC_0(VAR_12->supplies),
        VAR_12->supplies);
 if (VAR_14 != 0) {
  FUNC_3(&VAR_10->dev, "Failed to enable supplies: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_10(VAR_12->regmap, VAR_4, &VAR_13);
 if (VAR_14 < 0) {
  FUNC_3(&VAR_10->dev, "Failed to read ID register\n");
  goto err_enable;
 }
 if (VAR_13 != 0x8523) {
  FUNC_3(&VAR_10->dev, "Device is not a WM8523, ID is %x\n", VAR_14);
  VAR_14 = -VAR_0;
  goto err_enable;
 }

 VAR_14 = FUNC_10(VAR_12->regmap, VAR_5, &VAR_13);
 if (VAR_14 < 0) {
  FUNC_3(&VAR_10->dev, "Failed to read revision register\n");
  goto err_enable;
 }
 FUNC_4(&VAR_10->dev, "revision %c\n",
   (VAR_13 & VAR_3) + 'A');

 VAR_14 = FUNC_11(VAR_12->regmap, VAR_4, 0x8523);
 if (VAR_14 != 0) {
  FUNC_3(&VAR_10->dev, "Failed to reset device: %d\n", VAR_14);
  goto err_enable;
 }

 FUNC_12(FUNC_0(VAR_12->supplies), VAR_12->supplies);

 FUNC_9(VAR_10, VAR_12);

 VAR_14 = FUNC_8(&VAR_10->dev,
   &VAR_6, &VAR_7, 1);

 return VAR_14;

err_enable:
 FUNC_12(FUNC_0(VAR_12->supplies), VAR_12->supplies);
 return VAR_14;
}
