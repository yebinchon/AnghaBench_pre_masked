
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniperif {scalar_t__ state; int irq_lock; int substream; int dev; scalar_t__ underflow_enabled; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct uniperif*) ;
 unsigned int FUNC_1 (struct uniperif*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct uniperif*) ;
 int FUNC_3 (struct uniperif*) ;
 int FUNC_4 (struct uniperif*) ;
 int FUNC_5 (struct uniperif*,unsigned int) ;
 unsigned int FUNC_6 (struct uniperif*) ;
 unsigned int FUNC_7 (struct uniperif*) ;
 unsigned int FUNC_8 (struct uniperif*) ;
 unsigned int FUNC_9 (struct uniperif*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (int ,char*,unsigned int) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_18(int VAR_6, void *VAR_7)
{
 irqreturn_t VAR_8 = VAR_2;
 struct uniperif *VAR_9 = VAR_7;
 unsigned int VAR_10;
 unsigned int VAR_11;

 FUNC_15(&VAR_9->irq_lock);
 if (!VAR_9->substream)
  goto irq_spin_unlock;

 FUNC_13(VAR_9->substream);
 if (VAR_9->state == VAR_4)
  goto stream_unlock;


 VAR_10 = FUNC_0(VAR_9);
 FUNC_5(VAR_9, VAR_10);


 if (FUNC_17(VAR_10 & FUNC_9(VAR_9))) {
  FUNC_11(VAR_9->dev, "FIFO underflow error detected\n");


  if (VAR_9->underflow_enabled) {

   VAR_9->state = VAR_5;

  } else {

   FUNC_4(VAR_9);


   FUNC_12(VAR_9->substream);
  }

  VAR_8 = VAR_1;
 }


 if (FUNC_17(VAR_10 & FUNC_8(VAR_9))) {
  FUNC_11(VAR_9->dev, "DMA error detected\n");


  FUNC_3(VAR_9);


  FUNC_12(VAR_9->substream);

  VAR_8 = VAR_1;
 }


 if (FUNC_17(VAR_10 & FUNC_6(VAR_9))) {
  if (!VAR_9->underflow_enabled) {
   FUNC_11(VAR_9->dev,
    "unexpected Underflow recovering\n");
   VAR_8 = -VAR_0;
   goto stream_unlock;
  }

  VAR_11 = FUNC_1(VAR_9);
  FUNC_10(VAR_9->dev, "Underflow recovered (%d LR clocks max)\n",
   VAR_11);


  FUNC_2(VAR_9);


  VAR_9->state = VAR_3;

  VAR_8 = VAR_1;
 }


 if (FUNC_17(VAR_10 &
       FUNC_7(VAR_9))) {
  FUNC_11(VAR_9->dev, "Underflow recovery failed\n");


  FUNC_12(VAR_9->substream);

  VAR_8 = VAR_1;
 }

stream_unlock:
 FUNC_14(VAR_9->substream);
irq_spin_unlock:
 FUNC_16(&VAR_9->irq_lock);

 return VAR_8;
}
