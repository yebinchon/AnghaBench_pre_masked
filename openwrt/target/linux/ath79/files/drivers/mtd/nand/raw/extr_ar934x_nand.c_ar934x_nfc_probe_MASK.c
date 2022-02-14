
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_12__ {int of_node; int coherent_dma_mask; int * dma_mask; } ;
struct platform_device {TYPE_4__ dev; } ;
struct TYPE_11__ {int * ops; } ;
struct TYPE_10__ {int mode; } ;
struct nand_chip {int chip_delay; TYPE_3__ dummy_controller; TYPE_2__ ecc; int read_buf; int write_buf; int read_byte; int cmd_ctrl; int cmdfunc; int dev_ready; } ;
struct TYPE_9__ {TYPE_4__* parent; } ;
struct mtd_info {int name; TYPE_1__ dev; int owner; } ;
struct ar934x_nfc {scalar_t__ irq; struct nand_chip nand_chip; int swap_dma; TYPE_4__* parent; int rst; int irq_waitq; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int FUNC_3 (struct ar934x_nfc*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct ar934x_nfc*) ;
 int FUNC_5 (struct ar934x_nfc*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (TYPE_4__*,char*,...) ;
 int FUNC_7 (TYPE_4__*,struct resource*) ;
 struct ar934x_nfc* FUNC_8 (TYPE_4__*,int,int ) ;
 int FUNC_9 (TYPE_4__*,scalar_t__,int ,int ,int ,struct ar934x_nfc*) ;
 int FUNC_10 (TYPE_4__*,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct mtd_info*,int *,int ) ;
 int FUNC_13 (struct mtd_info*,int) ;
 int FUNC_14 (struct nand_chip*,struct ar934x_nfc*) ;
 int FUNC_15 (struct nand_chip*,int ) ;
 struct mtd_info* FUNC_16 (struct nand_chip*) ;
 int FUNC_17 (int ,char*) ;
 scalar_t__ FUNC_18 (struct platform_device*,int ) ;
 struct resource* FUNC_19 (struct platform_device*,int ,int ) ;
 int FUNC_20 (struct platform_device*,struct ar934x_nfc*) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_17)
{
 struct ar934x_nfc *VAR_18;
 struct resource *VAR_19;
 struct mtd_info *VAR_20;
 struct nand_chip *VAR_21;
 int VAR_22;

 VAR_17->dev.dma_mask = &VAR_12;
 VAR_17->dev.coherent_dma_mask = FUNC_0(32);

 VAR_19 = FUNC_19(VAR_17, VAR_5, 0);
 if (!VAR_19) {
  FUNC_6(&VAR_17->dev, "failed to get I/O memory\n");
  return -VAR_2;
 }

 VAR_18 = FUNC_8(&VAR_17->dev, sizeof(struct ar934x_nfc), VAR_4);
 if (!VAR_18) {
  FUNC_6(&VAR_17->dev, "failed to allocate driver data\n");
  return -VAR_3;
 }

 VAR_18->base = FUNC_7(&VAR_17->dev, VAR_19);
 if (FUNC_1(VAR_18->base)) {
  FUNC_6(&VAR_17->dev, "failed to remap I/O memory\n");
  return FUNC_2(VAR_18->base);
 }

 VAR_18->irq = FUNC_18(VAR_17, 0);
 if (VAR_18->irq < 0) {
  FUNC_6(&VAR_17->dev, "no IRQ resource specified\n");
  return -VAR_2;
 }

 FUNC_11(&VAR_18->irq_waitq);
 VAR_22 = FUNC_9(&VAR_17->dev, VAR_18->irq, VAR_13,
          0, VAR_0, VAR_18);
 if (VAR_22) {
  FUNC_6(&VAR_17->dev, "devm_request_irq failed, err:%d\n", VAR_22);
  return VAR_22;
 }

 VAR_18->rst = FUNC_10(&VAR_17->dev, "nand");
 if (FUNC_1(VAR_18->rst)) {
  FUNC_6(&VAR_17->dev, "Failed to get reset\n");
  return FUNC_2(VAR_18->rst);
 }

 VAR_18->parent = &VAR_17->dev;
 VAR_18->swap_dma = FUNC_17(VAR_17->dev.of_node,
           "qca,nand-swap-dma");

 VAR_21 = &VAR_18->nand_chip;
 VAR_20 = FUNC_16(VAR_21);

 VAR_20->owner = VAR_7;
 VAR_20->dev.parent = &VAR_17->dev;
 VAR_20->name = VAR_0;

 FUNC_14(VAR_21, VAR_18);
 FUNC_15(VAR_21, VAR_17->dev.of_node);
 VAR_21->chip_delay = 25;
 VAR_21->dev_ready = VAR_11;
 VAR_21->cmdfunc = VAR_9;
 VAR_21->cmd_ctrl = VAR_8;
 VAR_21->read_byte = VAR_15;
 VAR_21->write_buf = VAR_16;
 VAR_21->read_buf = VAR_14;
 VAR_21->ecc.mode = VAR_6;
 FUNC_20(VAR_17, VAR_18);

 VAR_22 = FUNC_3(VAR_18, VAR_1);
 if (VAR_22)
  return VAR_22;

 VAR_22 = FUNC_5(VAR_18);
 if (VAR_22) {
  FUNC_6(&VAR_17->dev, "hardware init failed, err:%d\n", VAR_22);
  goto err_free_buf;
 }

 VAR_21->dummy_controller.ops = &VAR_10;
 VAR_22 = FUNC_13(VAR_20, 1);
 if (VAR_22) {
  FUNC_6(&VAR_17->dev, "nand_scan failed, err:%d\n", VAR_22);
  goto err_free_buf;
 }

 VAR_22 = FUNC_12(VAR_20, ((void*)0), 0);
 if (VAR_22) {
  FUNC_6(&VAR_17->dev, "unable to register mtd, err:%d\n", VAR_22);
  goto err_free_buf;
 }

 return 0;

err_free_buf:
 FUNC_4(VAR_18);
 return VAR_22;
}
