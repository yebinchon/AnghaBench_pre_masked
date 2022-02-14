
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct wm8904_priv {int devtype; TYPE_2__* supplies; int regmap; TYPE_1__* pdata; int mclk; } ;
struct of_device_id {scalar_t__ data; } ;
struct i2c_device_id {int driver_data; } ;
struct TYPE_14__ {TYPE_1__* platform_data; scalar_t__ of_node; } ;
struct i2c_client {TYPE_4__ dev; } ;
typedef enum wm8904_type { ____Placeholder_wm8904_type } wm8904_type ;
struct TYPE_13__ {int supply; } ;
struct TYPE_12__ {int* gpio_cfg; int* mic_cfg; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_3 (TYPE_4__*,char*,...) ;
 int FUNC_4 (TYPE_4__*,char*,unsigned int) ;
 int FUNC_5 (TYPE_4__*,char*) ;
 struct wm8904_priv* FUNC_6 (TYPE_4__*,int,int ) ;
 int FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (TYPE_4__*,int,TYPE_2__*) ;
 int FUNC_9 (TYPE_4__*,int *,int *,int) ;
 int FUNC_10 (struct i2c_client*,struct wm8904_priv*) ;
 struct of_device_id* FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ,int ,unsigned int*) ;
 int FUNC_14 (int ,scalar_t__,int,int) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int,TYPE_2__*) ;
 int FUNC_17 (int,TYPE_2__*) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int * VAR_35 ;

__attribute__((used)) static int FUNC_18(struct i2c_client *VAR_36,
       const struct i2c_device_id *VAR_37)
{
 struct wm8904_priv *VAR_38;
 unsigned int VAR_39;
 int VAR_40, VAR_41;

 VAR_38 = FUNC_6(&VAR_36->dev, sizeof(struct wm8904_priv),
         VAR_2);
 if (VAR_38 == ((void*)0))
  return -VAR_1;

 VAR_38->mclk = FUNC_5(&VAR_36->dev, "mclk");
 if (FUNC_1(VAR_38->mclk)) {
  VAR_40 = FUNC_2(VAR_38->mclk);
  FUNC_3(&VAR_36->dev, "Failed to get MCLK\n");
  return VAR_40;
 }

 VAR_38->regmap = FUNC_7(VAR_36, &VAR_34);
 if (FUNC_1(VAR_38->regmap)) {
  VAR_40 = FUNC_2(VAR_38->regmap);
  FUNC_3(&VAR_36->dev, "Failed to allocate register map: %d\n",
   VAR_40);
  return VAR_40;
 }

 if (VAR_36->dev.of_node) {
  const struct of_device_id *VAR_42;

  VAR_42 = FUNC_11(VAR_33, VAR_36->dev.of_node);
  if (VAR_42 == ((void*)0))
   return -VAR_0;
  VAR_38->devtype = (enum wm8904_type)VAR_42->data;
 } else {
  VAR_38->devtype = VAR_37->driver_data;
 }

 FUNC_10(VAR_36, VAR_38);
 VAR_38->pdata = VAR_36->dev.platform_data;

 for (VAR_41 = 0; VAR_41 < FUNC_0(VAR_38->supplies); VAR_41++)
  VAR_38->supplies[VAR_41].supply = VAR_35[VAR_41];

 VAR_40 = FUNC_8(&VAR_36->dev, FUNC_0(VAR_38->supplies),
          VAR_38->supplies);
 if (VAR_40 != 0) {
  FUNC_3(&VAR_36->dev, "Failed to request supplies: %d\n", VAR_40);
  return VAR_40;
 }

 VAR_40 = FUNC_17(FUNC_0(VAR_38->supplies),
        VAR_38->supplies);
 if (VAR_40 != 0) {
  FUNC_3(&VAR_36->dev, "Failed to enable supplies: %d\n", VAR_40);
  return VAR_40;
 }

 VAR_40 = FUNC_13(VAR_38->regmap, VAR_30, &VAR_39);
 if (VAR_40 < 0) {
  FUNC_3(&VAR_36->dev, "Failed to read ID register: %d\n", VAR_40);
  goto err_enable;
 }
 if (VAR_39 != 0x8904) {
  FUNC_3(&VAR_36->dev, "Device is not a WM8904, ID is %x\n", VAR_39);
  VAR_40 = -VAR_0;
  goto err_enable;
 }

 VAR_40 = FUNC_13(VAR_38->regmap, VAR_28, &VAR_39);
 if (VAR_40 < 0) {
  FUNC_3(&VAR_36->dev, "Failed to read device revision: %d\n",
   VAR_40);
  goto err_enable;
 }
 FUNC_4(&VAR_36->dev, "revision %c\n", VAR_39 + 'A');

 VAR_40 = FUNC_15(VAR_38->regmap, VAR_30, 0);
 if (VAR_40 < 0) {
  FUNC_3(&VAR_36->dev, "Failed to issue reset: %d\n", VAR_40);
  goto err_enable;
 }


 FUNC_14(VAR_38->regmap, VAR_3,
      VAR_5, VAR_5);
 FUNC_14(VAR_38->regmap, VAR_4,
      VAR_5, VAR_5);
 FUNC_14(VAR_38->regmap, VAR_14,
      VAR_16, VAR_16);
 FUNC_14(VAR_38->regmap, VAR_15,
      VAR_16, VAR_16);
 FUNC_14(VAR_38->regmap, VAR_6,
      VAR_21 | VAR_19,
      VAR_21 | VAR_19);
 FUNC_14(VAR_38->regmap, VAR_7,
      VAR_21 | VAR_20,
      VAR_21 | VAR_20);
 FUNC_14(VAR_38->regmap, VAR_8,
      VAR_24 | VAR_22,
      VAR_24 | VAR_22);
 FUNC_14(VAR_38->regmap, VAR_9,
      VAR_24 | VAR_23,
      VAR_24 | VAR_23);
 FUNC_14(VAR_38->regmap, VAR_12,
      VAR_29, 0);


 if (VAR_38->pdata) {
  for (VAR_41 = 0; VAR_41 < VAR_18; VAR_41++) {
   if (!VAR_38->pdata->gpio_cfg[VAR_41])
    continue;

   FUNC_14(VAR_38->regmap,
        VAR_17 + VAR_41,
        0xffff,
        VAR_38->pdata->gpio_cfg[VAR_41]);
  }


  for (VAR_41 = 0; VAR_41 < VAR_26; VAR_41++)
   FUNC_14(VAR_38->regmap,
        VAR_25 + VAR_41,
        0xffff,
        VAR_38->pdata->mic_cfg[VAR_41]);
 }




 FUNC_14(VAR_38->regmap, VAR_11,
       VAR_13, VAR_13);


 FUNC_14(VAR_38->regmap, VAR_10,
       VAR_27, 0);


 FUNC_12(VAR_38->regmap, 1);
 FUNC_16(FUNC_0(VAR_38->supplies), VAR_38->supplies);

 VAR_40 = FUNC_9(&VAR_36->dev,
   &VAR_31, &VAR_32, 1);
 if (VAR_40 != 0)
  return VAR_40;

 return 0;

err_enable:
 FUNC_16(FUNC_0(VAR_38->supplies), VAR_38->supplies);
 return VAR_40;
}
