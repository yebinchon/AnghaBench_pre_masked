
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniperif {scalar_t__ state; int irq_lock; int substream; int dev; } ;
typedef int irqreturn_t ;


 unsigned int FUNC_0 (struct uniperif*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct uniperif*,unsigned int) ;
 unsigned int FUNC_2 (struct uniperif*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_3, void *VAR_4)
{
 irqreturn_t VAR_5 = VAR_1;
 struct uniperif *VAR_6 = VAR_4;
 unsigned int VAR_7;

 FUNC_8(&VAR_6->irq_lock);
 if (!VAR_6->substream)
  goto irq_spin_unlock;

 FUNC_6(VAR_6->substream);
 if (VAR_6->state == VAR_2) {

  FUNC_4(VAR_6->dev, "unexpected IRQ\n");
  goto stream_unlock;
 }


 VAR_7 = FUNC_0(VAR_6);
 FUNC_1(VAR_6, VAR_7);


 if (FUNC_10(VAR_7 & FUNC_2(VAR_6))) {
  FUNC_3(VAR_6->dev, "FIFO error detected\n");

  FUNC_5(VAR_6->substream);

  VAR_5 = VAR_0;
 }

stream_unlock:
 FUNC_7(VAR_6->substream);
irq_spin_unlock:
 FUNC_9(&VAR_6->irq_lock);

 return VAR_5;
}
