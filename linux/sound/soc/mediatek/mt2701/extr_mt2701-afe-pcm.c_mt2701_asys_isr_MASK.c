
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mtk_base_afe_memif {size_t irq_usage; int substream; } ;
struct mtk_base_afe_irq {TYPE_1__* irq_data; } ;
struct mtk_base_afe {struct mtk_base_afe_irq* irqs; struct mtk_base_afe_memif* memif; int regmap; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int irq_clr_shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 int VAR_6;
 struct mtk_base_afe *VAR_7 = VAR_5;
 struct mtk_base_afe_memif *VAR_8;
 struct mtk_base_afe_irq *VAR_9;
 u32 VAR_10;

 FUNC_0(VAR_7->regmap, VAR_1, &VAR_10);
 FUNC_1(VAR_7->regmap, VAR_0, VAR_10);

 for (VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6) {
  VAR_8 = &VAR_7->memif[VAR_6];
  if (VAR_8->irq_usage < 0)
   continue;

  VAR_9 = &VAR_7->irqs[VAR_8->irq_usage];
  if (VAR_10 & 1 << VAR_9->irq_data->irq_clr_shift)
   FUNC_2(VAR_8->substream);
 }

 return VAR_2;
}
