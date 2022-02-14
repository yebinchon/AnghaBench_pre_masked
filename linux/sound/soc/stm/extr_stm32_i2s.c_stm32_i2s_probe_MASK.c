
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct stm32_i2s_data {int regmap; int dai_drv; int regmap_conf; int base; int irq_lock; int lock_fd; int ms_flg; struct platform_device* pdev; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int *,char*,int ,int ) ;
 int FUNC_4 (int *,char*) ;
 struct stm32_i2s_data* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,char*,int ,int ) ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int *,int *,int ,int) ;
 int FUNC_9 (struct platform_device*,struct stm32_i2s_data*) ;
 int FUNC_10 (int ,int ,scalar_t__*) ;
 int FUNC_11 (int ,int ,int ,int ) ;
 int FUNC_12 (int *) ;
 int VAR_13 ;
 int FUNC_13 (struct platform_device*,struct stm32_i2s_data*) ;
 int FUNC_14 (struct platform_device*,struct stm32_i2s_data*) ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_15)
{
 struct stm32_i2s_data *VAR_16;
 u32 VAR_17;
 int VAR_18;

 VAR_16 = FUNC_5(&VAR_15->dev, sizeof(*VAR_16), VAR_2);
 if (!VAR_16)
  return -VAR_0;

 VAR_18 = FUNC_14(VAR_15, VAR_16);
 if (VAR_18)
  return VAR_18;

 VAR_16->pdev = VAR_15;
 VAR_16->ms_flg = VAR_6;
 FUNC_12(&VAR_16->lock_fd);
 FUNC_12(&VAR_16->irq_lock);
 FUNC_9(VAR_15, VAR_16);

 VAR_18 = FUNC_13(VAR_15, VAR_16);
 if (VAR_18)
  return VAR_18;

 VAR_16->regmap = FUNC_6(&VAR_15->dev, "pclk",
      VAR_16->base, VAR_16->regmap_conf);
 if (FUNC_1(VAR_16->regmap)) {
  FUNC_4(&VAR_15->dev, "regmap init failed\n");
  return FUNC_2(VAR_16->regmap);
 }

 VAR_18 = FUNC_8(&VAR_15->dev, &VAR_13,
           VAR_16->dai_drv, 1);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_7(&VAR_15->dev,
           &VAR_14, 0);
 if (VAR_18)
  return VAR_18;


 VAR_18 = FUNC_11(VAR_16->regmap, VAR_9,
     VAR_3, VAR_3);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_10(VAR_16->regmap, VAR_11, &VAR_17);
 if (VAR_18)
  return VAR_18;

 if (VAR_17 == VAR_5) {
  VAR_18 = FUNC_10(VAR_16->regmap, VAR_10, &VAR_17);
  if (VAR_18)
   return VAR_18;

  if (!FUNC_0(VAR_4, VAR_17)) {
   FUNC_4(&VAR_15->dev,
    "Device does not support i2s mode\n");
   return -VAR_1;
  }

  VAR_18 = FUNC_10(VAR_16->regmap, VAR_12, &VAR_17);

  FUNC_3(&VAR_15->dev, "I2S version: %lu.%lu registered\n",
   FUNC_0(VAR_7, VAR_17),
   FUNC_0(VAR_8, VAR_17));
 }

 return VAR_18;
}
