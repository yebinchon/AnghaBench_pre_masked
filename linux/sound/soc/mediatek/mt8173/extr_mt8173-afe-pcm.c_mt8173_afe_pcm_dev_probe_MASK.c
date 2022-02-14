
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct mtk_base_afe {int memif_size; int irqs_size; int (* runtime_resume ) (int *) ;int runtime_suspend; int reg_back_up_list_num; int * reg_back_up_list; int irq_fs; int memif_fs; int * mtk_afe_hardware; TYPE_2__* memif; TYPE_1__* irqs; int * dev; int regmap; int base_addr; struct mt8173_afe_private* platform_priv; } ;
struct mt8173_afe_private {int dummy; } ;
struct TYPE_4__ {int irq_usage; int const_irq; int * data; } ;
struct TYPE_3__ {int irq_occupyed; int * irq_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 void* FUNC_6 (int *,int,int,int ) ;
 void* FUNC_7 (int *,int,int ) ;
 int FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (int *,int ,int *) ;
 int FUNC_10 (int *,int,int ,int ,char*,void*) ;
 int FUNC_11 (int *,int *,int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int FUNC_13 (struct mtk_base_afe*) ;
 int VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 int VAR_14 ;
 int FUNC_14 (int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_15 (struct platform_device*,int ) ;
 int FUNC_16 (struct platform_device*,struct mtk_base_afe*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_19)
{
 int VAR_20, VAR_21;
 int VAR_22;
 struct mtk_base_afe *VAR_23;
 struct mt8173_afe_private *VAR_24;

 VAR_20 = FUNC_12(&VAR_19->dev, FUNC_1(33));
 if (VAR_20)
  return VAR_20;

 VAR_23 = FUNC_7(&VAR_19->dev, sizeof(*VAR_23), VAR_2);
 if (!VAR_23)
  return -VAR_0;

 VAR_23->platform_priv = FUNC_7(&VAR_19->dev, sizeof(*VAR_24),
       VAR_2);
 VAR_24 = VAR_23->platform_priv;
 if (!VAR_24)
  return -VAR_0;

 VAR_23->dev = &VAR_19->dev;

 VAR_22 = FUNC_15(VAR_19, 0);
 if (VAR_22 <= 0)
  return VAR_22 < 0 ? VAR_22 : -VAR_1;
 VAR_20 = FUNC_10(VAR_23->dev, VAR_22, VAR_11,
          0, "Afe_ISR_Handle", (void *)VAR_23);
 if (VAR_20) {
  FUNC_4(VAR_23->dev, "could not request_irq\n");
  return VAR_20;
 }

 VAR_23->base_addr = FUNC_8(VAR_19, 0);
 if (FUNC_2(VAR_23->base_addr))
  return FUNC_3(VAR_23->base_addr);

 VAR_23->regmap = FUNC_9(&VAR_19->dev, VAR_23->base_addr,
  &VAR_14);
 if (FUNC_2(VAR_23->regmap))
  return FUNC_3(VAR_23->regmap);


 VAR_20 = FUNC_13(VAR_23);
 if (VAR_20) {
  FUNC_4(VAR_23->dev, "mt8173_afe_init_audio_clk fail\n");
  return VAR_20;
 }


 VAR_23->memif_size = VAR_4;
 VAR_23->memif = FUNC_6(VAR_23->dev, VAR_23->memif_size,
      sizeof(*VAR_23->memif), VAR_2);
 if (!VAR_23->memif)
  return -VAR_0;

 VAR_23->irqs_size = VAR_3;
 VAR_23->irqs = FUNC_6(VAR_23->dev, VAR_23->irqs_size,
     sizeof(*VAR_23->irqs), VAR_2);
 if (!VAR_23->irqs)
  return -VAR_0;

 for (VAR_21 = 0; VAR_21 < VAR_23->irqs_size; VAR_21++) {
  VAR_23->memif[VAR_21].data = &VAR_6[VAR_21];
  VAR_23->irqs[VAR_21].irq_data = &VAR_5[VAR_21];
  VAR_23->irqs[VAR_21].irq_occupyed = 1;
  VAR_23->memif[VAR_21].irq_usage = VAR_21;
  VAR_23->memif[VAR_21].const_irq = 1;
 }

 VAR_23->mtk_afe_hardware = &VAR_8;
 VAR_23->memif_fs = VAR_17;
 VAR_23->irq_fs = VAR_16;

 FUNC_16(VAR_19, VAR_23);

 FUNC_18(&VAR_19->dev);
 if (!FUNC_19(&VAR_19->dev)) {
  VAR_20 = FUNC_14(&VAR_19->dev);
  if (VAR_20)
   goto err_pm_disable;
 }

 VAR_23->reg_back_up_list = VAR_7;
 VAR_23->reg_back_up_list_num = FUNC_0(VAR_7);
 VAR_23->runtime_resume = FUNC_14;
 VAR_23->runtime_suspend = VAR_15;

 VAR_20 = FUNC_11(&VAR_19->dev,
      &VAR_18,
      ((void*)0), 0);
 if (VAR_20)
  goto err_pm_disable;

 VAR_20 = FUNC_11(&VAR_19->dev,
      &VAR_12,
      VAR_13,
      FUNC_0(VAR_13));
 if (VAR_20)
  goto err_pm_disable;

 VAR_20 = FUNC_11(&VAR_19->dev,
      &VAR_9,
      VAR_10,
      FUNC_0(VAR_10));
 if (VAR_20)
  goto err_pm_disable;

 FUNC_5(&VAR_19->dev, "MT8173 AFE driver initialized.\n");
 return 0;

err_pm_disable:
 FUNC_17(&VAR_19->dev);
 return VAR_20;
}
