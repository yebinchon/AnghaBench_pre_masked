
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct lpass_variant {int dummy; } ;
struct lpass_data {scalar_t__ lpaif_irq; int lpaif_map; struct lpass_variant* variant; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lpass_variant*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,scalar_t__,int ,int ,char*,struct lpass_data*) ;
 int FUNC_3 (int *,int *,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct lpass_data* FUNC_4 (struct platform_device*) ;
 scalar_t__ FUNC_5 (struct platform_device*,char*) ;
 int FUNC_6 (int ,int ,int ) ;

int FUNC_7(struct platform_device *VAR_5)
{
 struct lpass_data *VAR_6 = FUNC_4(VAR_5);
 struct lpass_variant *VAR_7 = VAR_6->variant;
 int VAR_8;

 VAR_6->lpaif_irq = FUNC_5(VAR_5, "lpass-irq-lpaif");
 if (VAR_6->lpaif_irq < 0)
  return -VAR_0;


 VAR_8 = FUNC_6(VAR_6->lpaif_map,
   FUNC_0(VAR_7, VAR_2), 0);
 if (VAR_8) {
  FUNC_1(&VAR_5->dev, "error writing to irqen reg: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_2(&VAR_5->dev, VAR_6->lpaif_irq,
   VAR_4, VAR_1,
   "lpass-irq-lpaif", VAR_6);
 if (VAR_8) {
  FUNC_1(&VAR_5->dev, "irq request failed: %d\n", VAR_8);
  return VAR_8;
 }


 return FUNC_3(&VAR_5->dev,
   &VAR_3, ((void*)0), 0);
}
