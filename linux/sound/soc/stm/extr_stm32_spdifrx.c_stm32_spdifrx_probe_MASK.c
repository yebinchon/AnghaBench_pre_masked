
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct stm32_spdifrx_data {scalar_t__ dmab; struct reset_control* ctrl_chan; struct reset_control* regmap; int irq; int regmap_conf; int base; int lock; int cs_completion; struct platform_device* pdev; } ;
struct snd_dmaengine_pcm_config {int dummy; } ;
struct reset_control {int dummy; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct reset_control*) ;
 int FUNC_3 (struct reset_control*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,char*,int ,int ) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int *) ;
 struct stm32_spdifrx_data* FUNC_7 (int *,int,int ) ;
 struct reset_control* FUNC_8 (int *,char*,int ,int ) ;
 int FUNC_9 (int *,int ,int ,int ,int ,struct stm32_spdifrx_data*) ;
 struct reset_control* FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,struct snd_dmaengine_pcm_config const*,int ) ;
 int FUNC_12 (int *,int *,int ,int ) ;
 int FUNC_13 (struct reset_control*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct platform_device*,struct stm32_spdifrx_data*) ;
 int FUNC_16 (struct reset_control*,int ,scalar_t__*) ;
 int FUNC_17 (struct reset_control*) ;
 int FUNC_18 (struct reset_control*) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_21 (int *,struct stm32_spdifrx_data*) ;
 int VAR_9 ;
 int FUNC_22 (struct platform_device*,struct stm32_spdifrx_data*) ;
 struct snd_dmaengine_pcm_config VAR_10 ;
 int FUNC_23 (int) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_11)
{
 struct stm32_spdifrx_data *VAR_12;
 struct reset_control *VAR_13;
 const struct snd_dmaengine_pcm_config *VAR_14 = ((void*)0);
 u32 VAR_15, VAR_16;
 int VAR_17;

 VAR_12 = FUNC_7(&VAR_11->dev, sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_12->pdev = VAR_11;
 FUNC_14(&VAR_12->cs_completion);
 FUNC_20(&VAR_12->lock);

 FUNC_15(VAR_11, VAR_12);

 VAR_17 = FUNC_22(VAR_11, VAR_12);
 if (VAR_17)
  return VAR_17;

 VAR_12->regmap = FUNC_8(&VAR_11->dev, "kclk",
          VAR_12->base,
          VAR_12->regmap_conf);
 if (FUNC_2(VAR_12->regmap)) {
  FUNC_5(&VAR_11->dev, "Regmap init failed\n");
  return FUNC_3(VAR_12->regmap);
 }

 VAR_17 = FUNC_9(&VAR_11->dev, VAR_12->irq, VAR_9, 0,
          FUNC_6(&VAR_11->dev), VAR_12);
 if (VAR_17) {
  FUNC_5(&VAR_11->dev, "IRQ request returned %d\n", VAR_17);
  return VAR_17;
 }

 VAR_13 = FUNC_10(&VAR_11->dev, ((void*)0));
 if (!FUNC_2(VAR_13)) {
  FUNC_17(VAR_13);
  FUNC_23(2);
  FUNC_18(VAR_13);
 }

 VAR_17 = FUNC_12(&VAR_11->dev,
           &VAR_7,
           VAR_8,
           FUNC_0(VAR_8));
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_21(&VAR_11->dev, VAR_12);
 if (VAR_17)
  goto error;

 VAR_14 = &VAR_10;
 VAR_17 = FUNC_11(&VAR_11->dev, VAR_14, 0);
 if (VAR_17) {
  FUNC_5(&VAR_11->dev, "PCM DMA register returned %d\n", VAR_17);
  goto error;
 }

 VAR_17 = FUNC_16(VAR_12->regmap, VAR_5, &VAR_16);
 if (VAR_17)
  goto error;

 if (VAR_16 == VAR_2) {
  VAR_17 = FUNC_16(VAR_12->regmap, VAR_6, &VAR_15);

  FUNC_4(&VAR_11->dev, "SPDIFRX version: %lu.%lu registered\n",
   FUNC_1(VAR_3, VAR_15),
   FUNC_1(VAR_4, VAR_15));
 }

 return VAR_17;

error:
 if (!FUNC_2(VAR_12->ctrl_chan))
  FUNC_13(VAR_12->ctrl_chan);
 if (VAR_12->dmab)
  FUNC_19(VAR_12->dmab);

 return VAR_17;
}
