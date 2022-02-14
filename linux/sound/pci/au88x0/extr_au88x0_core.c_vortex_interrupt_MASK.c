
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__* card; TYPE_3__* rmidi; int irq; int mmio; int lock; TYPE_2__* dma_wt; TYPE_1__* dma_adb; } ;
typedef TYPE_5__ vortex_t ;
typedef int u32 ;
typedef int irqreturn_t ;
struct TYPE_11__ {int dev; } ;
struct TYPE_10__ {int private_data; } ;
struct TYPE_9__ {scalar_t__ fifo_status; int substream; } ;
struct TYPE_8__ {scalar_t__ fifo_status; int substream; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (TYPE_5__*,int) ;
 int FUNC_10 (TYPE_5__*,int) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_18, void *VAR_19)
{
 vortex_t *VAR_20 = VAR_19;
 int VAR_21, VAR_22;
 u32 VAR_23;


 if (!(FUNC_2(VAR_20->mmio, VAR_17) & 0x1))
  return VAR_7;


 if (!(FUNC_2(VAR_20->mmio, VAR_14) & VAR_0))
  return VAR_7;

 VAR_23 = FUNC_2(VAR_20->mmio, VAR_15);

 FUNC_3(VAR_20->mmio, VAR_15, VAR_23);
 FUNC_2(VAR_20->mmio, VAR_15);

 if (VAR_23 == 0) {
  FUNC_1(VAR_20->card->dev, "missing irq source\n");
  return VAR_7;
 }

 VAR_22 = 0;

 if (FUNC_8(VAR_23 & VAR_3)) {
  if (VAR_23 & VAR_4) {
   FUNC_1(VAR_20->card->dev, "IRQ fatal error\n");
  }
  if (VAR_23 & VAR_8) {
   FUNC_1(VAR_20->card->dev, "IRQ parity error\n");
  }
  if (VAR_23 & VAR_10) {
   FUNC_1(VAR_20->card->dev, "IRQ reg error\n");
  }
  if (VAR_23 & VAR_5) {
   FUNC_1(VAR_20->card->dev, "IRQ fifo error\n");
  }
  if (VAR_23 & VAR_2) {
   FUNC_1(VAR_20->card->dev, "IRQ dma error\n");
  }
  VAR_22 = 1;
 }
 if (VAR_23 & VAR_9) {

  FUNC_6(&VAR_20->lock);
  for (VAR_21 = 0; VAR_21 < VAR_12; VAR_21++) {
   if (VAR_20->dma_adb[VAR_21].fifo_status == VAR_1) {
    if (!FUNC_9(VAR_20, VAR_21))
     continue;
    FUNC_7(&VAR_20->lock);
    FUNC_5(VAR_20->dma_adb[VAR_21].
             substream);
    FUNC_6(&VAR_20->lock);
   }
  }

  for (VAR_21 = 0; VAR_21 < VAR_13; VAR_21++) {
   if (VAR_20->dma_wt[VAR_21].fifo_status == VAR_1) {





    FUNC_10(VAR_20, VAR_21);
    FUNC_7(&VAR_20->lock);
    FUNC_5(VAR_20->dma_wt[VAR_21].
             substream);
    FUNC_6(&VAR_20->lock);
   }
  }

  FUNC_7(&VAR_20->lock);
  VAR_22 = 1;
 }

 if (VAR_23 & VAR_11) {
  FUNC_2(VAR_20->mmio, VAR_16);
  VAR_22 = 1;
 }
 if ((VAR_23 & VAR_6) && VAR_20->rmidi) {
  FUNC_4(VAR_20->irq,
       VAR_20->rmidi->private_data);
  VAR_22 = 1;
 }

 if (!VAR_22) {
  FUNC_1(VAR_20->card->dev, "unknown irq source %x\n", VAR_23);
 }
 return FUNC_0(VAR_22);
}
