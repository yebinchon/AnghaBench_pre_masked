
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq_cmos; scalar_t__ irq_high; } ;
struct wm9081_priv {int regmap; TYPE_1__ pdata; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,char*,...) ;
 scalar_t__ FUNC_3 (int *) ;
 struct wm9081_priv* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (int *,int *,int *,int) ;
 int FUNC_7 (struct i2c_client*,struct wm9081_priv*) ;
 int FUNC_8 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int ,unsigned int*) ;
 int FUNC_11 (int ,int ,unsigned int,unsigned int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_10,
       const struct i2c_device_id *VAR_11)
{
 struct wm9081_priv *VAR_12;
 unsigned int VAR_13;
 int VAR_14;

 VAR_12 = FUNC_4(&VAR_10->dev, sizeof(struct wm9081_priv),
         VAR_2);
 if (VAR_12 == ((void*)0))
  return -VAR_1;

 FUNC_7(VAR_10, VAR_12);

 VAR_12->regmap = FUNC_5(VAR_10, &VAR_9);
 if (FUNC_0(VAR_12->regmap)) {
  VAR_14 = FUNC_1(VAR_12->regmap);
  FUNC_2(&VAR_10->dev, "regmap_init() failed: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_10(VAR_12->regmap, VAR_6, &VAR_13);
 if (VAR_14 != 0) {
  FUNC_2(&VAR_10->dev, "Failed to read chip ID: %d\n", VAR_14);
  return VAR_14;
 }
 if (VAR_13 != 0x9081) {
  FUNC_2(&VAR_10->dev, "Device is not a WM9081: ID=0x%x\n", VAR_13);
  return -VAR_0;
 }

 VAR_14 = FUNC_12(VAR_12->regmap);
 if (VAR_14 < 0) {
  FUNC_2(&VAR_10->dev, "Failed to issue reset\n");
  return VAR_14;
 }

 if (FUNC_3(&VAR_10->dev))
  FUNC_8(&VAR_12->pdata, FUNC_3(&VAR_10->dev),
         sizeof(VAR_12->pdata));

 VAR_13 = 0;
 if (VAR_12->pdata.irq_high)
  VAR_13 |= VAR_5;
 if (!VAR_12->pdata.irq_cmos)
  VAR_13 |= VAR_4;
 FUNC_11(VAR_12->regmap, VAR_3,
      VAR_5 | VAR_4, VAR_13);

 FUNC_9(VAR_12->regmap, 1);

 VAR_14 = FUNC_6(&VAR_10->dev,
   &VAR_7, &VAR_8, 1);
 if (VAR_14 < 0)
  return VAR_14;

 return 0;
}
