
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_13__ {int name; } ;
struct stm32_sai_sub_data {uintptr_t id; TYPE_1__ cpu_dai_drv; TYPE_10__* pdata; int irq_lock; int ctrl_lock; struct platform_device* pdev; } ;
struct snd_dmaengine_pcm_config {int dummy; } ;
struct TYPE_14__ {int parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct TYPE_12__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct stm32_sai_sub_data*) ;
 scalar_t__ FUNC_1 (struct stm32_sai_sub_data*) ;
 int FUNC_2 (TYPE_3__*,char*,...) ;
 TYPE_10__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 struct stm32_sai_sub_data* FUNC_5 (TYPE_3__*,int,int ) ;
 int FUNC_6 (TYPE_3__*,int ,int ,int ,int ,struct stm32_sai_sub_data*) ;
 int FUNC_7 (TYPE_3__*,struct snd_dmaengine_pcm_config const*,int ) ;
 int FUNC_8 (TYPE_3__*,int *,TYPE_1__*,int) ;
 int FUNC_9 (int *) ;
 struct of_device_id* FUNC_10 (int ,TYPE_3__*) ;
 int FUNC_11 (struct platform_device*,struct stm32_sai_sub_data*) ;
 int FUNC_12 (int *) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 struct snd_dmaengine_pcm_config VAR_7 ;
 struct snd_dmaengine_pcm_config VAR_8 ;
 TYPE_1__ VAR_9 ;
 int VAR_10 ;
 int FUNC_13 (struct platform_device*,struct stm32_sai_sub_data*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_11)
{
 struct stm32_sai_sub_data *VAR_12;
 const struct of_device_id *VAR_13;
 const struct snd_dmaengine_pcm_config *VAR_14 = &VAR_7;
 int VAR_15;

 VAR_12 = FUNC_5(&VAR_11->dev, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_13 = FUNC_10(VAR_10, &VAR_11->dev);
 if (!VAR_13)
  return -VAR_0;
 VAR_12->id = (uintptr_t)VAR_13->data;

 VAR_12->pdev = VAR_11;
 FUNC_9(&VAR_12->ctrl_lock);
 FUNC_12(&VAR_12->irq_lock);
 FUNC_11(VAR_11, VAR_12);

 VAR_12->pdata = FUNC_3(VAR_11->dev.parent);
 if (!VAR_12->pdata) {
  FUNC_2(&VAR_11->dev, "Parent device data not available\n");
  return -VAR_0;
 }

 VAR_15 = FUNC_13(VAR_11, VAR_12);
 if (VAR_15)
  return VAR_15;

 if (FUNC_0(VAR_12))
  VAR_12->cpu_dai_drv = VAR_9;
 else
  VAR_12->cpu_dai_drv = VAR_5;
 VAR_12->cpu_dai_drv.name = FUNC_4(&VAR_11->dev);

 VAR_15 = FUNC_6(&VAR_11->dev, VAR_12->pdata->irq, VAR_6,
          VAR_3, FUNC_4(&VAR_11->dev), VAR_12);
 if (VAR_15) {
  FUNC_2(&VAR_11->dev, "IRQ request returned %d\n", VAR_15);
  return VAR_15;
 }

 VAR_15 = FUNC_8(&VAR_11->dev, &VAR_4,
           &VAR_12->cpu_dai_drv, 1);
 if (VAR_15)
  return VAR_15;

 if (FUNC_1(VAR_12))
  VAR_14 = &VAR_8;

 VAR_15 = FUNC_7(&VAR_11->dev, VAR_14, 0);
 if (VAR_15) {
  FUNC_2(&VAR_11->dev, "Could not register pcm dma\n");
  return VAR_15;
 }

 return 0;
}
