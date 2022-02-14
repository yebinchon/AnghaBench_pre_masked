
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniperif {int irq_lock; int irq; int * hw; int * dai_ops; int state; int * dev; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct uniperif*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int ,int ,struct uniperif*) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_5(struct platform_device *VAR_7,
      struct uniperif *VAR_8)
{
 int VAR_9 = 0;

 VAR_8->dev = &VAR_7->dev;
 VAR_8->state = VAR_2;
 VAR_8->dai_ops = &VAR_3;

 if (FUNC_0(VAR_8))
  VAR_8->hw = &VAR_6;
 else
  VAR_8->hw = &VAR_5;

 VAR_9 = FUNC_3(&VAR_7->dev, VAR_8->irq,
          VAR_4, VAR_1,
          FUNC_2(&VAR_7->dev), VAR_8);
 if (VAR_9 < 0) {
  FUNC_1(&VAR_7->dev, "Failed to request IRQ\n");
  return -VAR_0;
 }

 FUNC_4(&VAR_8->irq_lock);

 return 0;
}
