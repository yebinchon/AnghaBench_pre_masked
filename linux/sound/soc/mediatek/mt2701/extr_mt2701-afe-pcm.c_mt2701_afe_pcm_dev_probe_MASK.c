
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct device {TYPE_1__* parent; } ;
struct platform_device {struct device dev; } ;
struct mtk_base_afe {int memif_size; int irqs_size; int (* runtime_resume ) (struct device*) ;int runtime_suspend; int reg_back_up_list_num; int * reg_back_up_list; int irq_fs; int memif_fs; int * mtk_afe_hardware; TYPE_3__* irqs; TYPE_2__* memif; int irq_alloc_lock; int regmap; struct device* dev; struct mt2701_afe_private* platform_priv; } ;
struct mt2701_i2s_path {int dummy; } ;
struct mt2701_afe_private {TYPE_4__* i2s_path; TYPE_5__* soc; } ;
struct TYPE_10__ {int i2s_num; } ;
struct TYPE_9__ {int ** i2s_data; } ;
struct TYPE_8__ {int * irq_data; } ;
struct TYPE_7__ {int irq_usage; int * data; } ;
struct TYPE_6__ {int of_node; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*) ;
 void* FUNC_5 (struct device*,int,int,int ) ;
 void* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,int,int ,int ,char*,void*) ;
 int FUNC_8 (struct device*,int *,int *,int ) ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int FUNC_9 (struct device*) ;
 int VAR_13 ;
 int VAR_14 ;
 int ** VAR_15 ;
 int FUNC_10 (struct mtk_base_afe*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_11 (int *) ;
 TYPE_5__* FUNC_12 (struct device*) ;
 int FUNC_13 (struct platform_device*,char*) ;
 int FUNC_14 (struct platform_device*,struct mtk_base_afe*) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct device*) ;
 int FUNC_17 (struct device*) ;
 int FUNC_18 (struct device*) ;
 int FUNC_19 (struct device*) ;
 int FUNC_20 (int ) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_19)
{
 struct mtk_base_afe *VAR_20;
 struct mt2701_afe_private *VAR_21;
 struct device *VAR_22;
 int VAR_23, VAR_24, VAR_25;

 VAR_20 = FUNC_6(&VAR_19->dev, sizeof(*VAR_20), VAR_1);
 if (!VAR_20)
  return -VAR_0;

 VAR_20->platform_priv = FUNC_6(&VAR_19->dev, sizeof(*VAR_21),
       VAR_1);
 if (!VAR_20->platform_priv)
  return -VAR_0;

 VAR_21 = VAR_20->platform_priv;
 VAR_21->soc = FUNC_12(&VAR_19->dev);
 VAR_20->dev = &VAR_19->dev;
 VAR_22 = VAR_20->dev;

 VAR_21->i2s_path = FUNC_5(VAR_22,
       VAR_21->soc->i2s_num,
       sizeof(struct mt2701_i2s_path),
       VAR_1);
 if (!VAR_21->i2s_path)
  return -VAR_0;

 VAR_24 = FUNC_13(VAR_19, "asys");
 if (VAR_24 < 0)
  return VAR_24;

 VAR_25 = FUNC_7(VAR_22, VAR_24, VAR_14,
          VAR_2, "asys-isr", (void *)VAR_20);
 if (VAR_25) {
  FUNC_3(VAR_22, "could not request_irq for asys-isr\n");
  return VAR_25;
 }

 VAR_20->regmap = FUNC_20(VAR_22->parent->of_node);
 if (FUNC_1(VAR_20->regmap)) {
  FUNC_3(VAR_22, "could not get regmap from parent\n");
  return FUNC_2(VAR_20->regmap);
 }

 FUNC_11(&VAR_20->irq_alloc_lock);


 VAR_20->memif_size = VAR_4;
 VAR_20->memif = FUNC_5(VAR_22, VAR_20->memif_size, sizeof(*VAR_20->memif),
      VAR_1);
 if (!VAR_20->memif)
  return -VAR_0;

 for (VAR_23 = 0; VAR_23 < VAR_20->memif_size; VAR_23++) {
  VAR_20->memif[VAR_23].data = &VAR_8[VAR_23];
  VAR_20->memif[VAR_23].irq_usage = -1;
 }


 VAR_20->irqs_size = VAR_3;
 VAR_20->irqs = FUNC_5(VAR_22, VAR_20->irqs_size, sizeof(*VAR_20->irqs),
     VAR_1);
 if (!VAR_20->irqs)
  return -VAR_0;

 for (VAR_23 = 0; VAR_23 < VAR_20->irqs_size; VAR_23++)
  VAR_20->irqs[VAR_23].irq_data = &VAR_7[VAR_23];


 for (VAR_23 = 0; VAR_23 < VAR_21->soc->i2s_num; VAR_23++) {
  VAR_21->i2s_path[VAR_23].i2s_data[VAR_6] =
   &VAR_15[VAR_23][VAR_6];
  VAR_21->i2s_path[VAR_23].i2s_data[VAR_5] =
   &VAR_15[VAR_23][VAR_5];
 }

 VAR_20->mtk_afe_hardware = &VAR_10;
 VAR_20->memif_fs = VAR_17;
 VAR_20->irq_fs = VAR_16;
 VAR_20->reg_back_up_list = VAR_9;
 VAR_20->reg_back_up_list_num = FUNC_0(VAR_9);
 VAR_20->runtime_resume = FUNC_9;
 VAR_20->runtime_suspend = VAR_13;


 VAR_25 = FUNC_10(VAR_20);
 if (VAR_25) {
  FUNC_3(VAR_22, "init clock error\n");
  return VAR_25;
 }

 FUNC_14(VAR_19, VAR_20);

 FUNC_16(VAR_22);
 if (!FUNC_17(VAR_22)) {
  VAR_25 = FUNC_9(VAR_22);
  if (VAR_25)
   goto err_pm_disable;
 }
 FUNC_18(VAR_22);

 VAR_25 = FUNC_8(&VAR_19->dev, &VAR_18,
           ((void*)0), 0);
 if (VAR_25) {
  FUNC_4(VAR_22, "err_platform\n");
  goto err_platform;
 }

 VAR_25 = FUNC_8(&VAR_19->dev,
      &VAR_11,
      VAR_12,
      FUNC_0(VAR_12));
 if (VAR_25) {
  FUNC_4(VAR_22, "err_dai_component\n");
  goto err_platform;
 }

 return 0;

err_platform:
 FUNC_19(VAR_22);
err_pm_disable:
 FUNC_15(VAR_22);

 return VAR_25;
}
