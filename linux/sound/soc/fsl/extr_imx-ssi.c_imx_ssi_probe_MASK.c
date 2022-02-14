
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct snd_soc_dai_driver {int dummy; } ;
struct resource {scalar_t__ start; } ;
struct TYPE_13__ {struct imx_ssi_platform_data* platform_data; } ;
struct platform_device {TYPE_3__ dev; } ;
struct imx_ssi_platform_data {int flags; int ac97_warm_reset; int ac97_reset; } ;
struct TYPE_14__ {int irq; TYPE_2__* dma_params_tx; TYPE_1__* dma_params_rx; scalar_t__ base; } ;
struct TYPE_12__ {int maxburst; int * filter_data; scalar_t__ addr; } ;
struct TYPE_11__ {int maxburst; int * filter_data; scalar_t__ addr; } ;
struct imx_ssi {int flags; scalar_t__ irq; int fiq_init; scalar_t__ clk; scalar_t__ dma_init; TYPE_5__ fiq_params; TYPE_2__ dma_params_tx; TYPE_1__ dma_params_rx; scalar_t__ base; int filter_data_rx; int filter_data_tx; int ac97_warm_reset; int ac97_reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 struct imx_ssi* VAR_11 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_3__*,char*,...) ;
 int FUNC_5 (TYPE_3__*,struct imx_ssi*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_7 (TYPE_3__*,struct resource*) ;
 struct imx_ssi* FUNC_8 (TYPE_3__*,int,int ) ;
 struct snd_soc_dai_driver VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (int *,scalar_t__,int ) ;
 int FUNC_11 (struct platform_device*,TYPE_5__*) ;
 int VAR_14 ;
 struct snd_soc_dai_driver VAR_15 ;
 scalar_t__ FUNC_12 (struct platform_device*,int ) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 struct resource* FUNC_14 (struct platform_device*,int ,char*) ;
 int FUNC_15 (struct platform_device*,struct imx_ssi*) ;
 int FUNC_16 (struct imx_ssi*) ;
 int FUNC_17 (TYPE_3__*,int *,struct snd_soc_dai_driver*,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_16)
{
 struct resource *VAR_17;
 struct imx_ssi *VAR_18;
 struct imx_ssi_platform_data *VAR_19 = VAR_16->dev.platform_data;
 int VAR_20 = 0;
 struct snd_soc_dai_driver *VAR_21;

 VAR_18 = FUNC_8(&VAR_16->dev, sizeof(*VAR_18), VAR_2);
 if (!VAR_18)
  return -VAR_1;
 FUNC_5(&VAR_16->dev, VAR_18);

 if (VAR_19) {
  VAR_18->ac97_reset = VAR_19->ac97_reset;
  VAR_18->ac97_warm_reset = VAR_19->ac97_warm_reset;
  VAR_18->flags = VAR_19->flags;
 }

 VAR_18->irq = FUNC_12(VAR_16, 0);
 if (VAR_18->irq < 0)
  return VAR_18->irq;

 VAR_18->clk = FUNC_6(&VAR_16->dev, ((void*)0));
 if (FUNC_0(VAR_18->clk)) {
  VAR_20 = FUNC_1(VAR_18->clk);
  FUNC_4(&VAR_16->dev, "Cannot get the clock: %d\n",
   VAR_20);
  goto failed_clk;
 }
 VAR_20 = FUNC_3(VAR_18->clk);
 if (VAR_20)
  goto failed_clk;

 VAR_17 = FUNC_13(VAR_16, VAR_7, 0);
 VAR_18->base = FUNC_7(&VAR_16->dev, VAR_17);
 if (FUNC_0(VAR_18->base)) {
  VAR_20 = FUNC_1(VAR_18->base);
  goto failed_register;
 }

 if (VAR_18->flags & VAR_5) {
  if (VAR_11) {
   FUNC_4(&VAR_16->dev, "AC'97 SSI already registered\n");
   VAR_20 = -VAR_0;
   goto failed_register;
  }
  VAR_11 = VAR_18;
  FUNC_16(VAR_18);
  VAR_21 = &VAR_12;
 } else
  VAR_21 = &VAR_15;

 FUNC_20(0x0, VAR_18->base + VAR_8);

 VAR_18->dma_params_rx.addr = VAR_17->start + VAR_9;
 VAR_18->dma_params_tx.addr = VAR_17->start + VAR_10;

 VAR_18->dma_params_tx.maxburst = 6;
 VAR_18->dma_params_rx.maxburst = 4;

 VAR_18->dma_params_tx.filter_data = &VAR_18->filter_data_tx;
 VAR_18->dma_params_rx.filter_data = &VAR_18->filter_data_rx;

 VAR_17 = FUNC_14(VAR_16, VAR_6, "tx0");
 if (VAR_17) {
  FUNC_10(&VAR_18->filter_data_tx, VAR_17->start,
   VAR_3);
 }

 VAR_17 = FUNC_14(VAR_16, VAR_6, "rx0");
 if (VAR_17) {
  FUNC_10(&VAR_18->filter_data_rx, VAR_17->start,
   VAR_3);
 }

 FUNC_15(VAR_16, VAR_18);

 VAR_20 = FUNC_18(&VAR_14);
 if (VAR_20 != 0) {
  FUNC_4(&VAR_16->dev, "Failed to set AC'97 ops: %d\n", VAR_20);
  goto failed_register;
 }

 VAR_20 = FUNC_17(&VAR_16->dev, &VAR_13,
      VAR_21, 1);
 if (VAR_20) {
  FUNC_4(&VAR_16->dev, "register DAI failed\n");
  goto failed_register;
 }

 VAR_18->fiq_params.irq = VAR_18->irq;
 VAR_18->fiq_params.base = VAR_18->base;
 VAR_18->fiq_params.dma_params_rx = &VAR_18->dma_params_rx;
 VAR_18->fiq_params.dma_params_tx = &VAR_18->dma_params_tx;

 VAR_18->fiq_init = FUNC_11(VAR_16, &VAR_18->fiq_params);
 VAR_18->dma_init = FUNC_9(VAR_16, VAR_4);

 if (VAR_18->fiq_init && VAR_18->dma_init) {
  VAR_20 = VAR_18->fiq_init;
  goto failed_pcm;
 }

 return 0;

failed_pcm:
 FUNC_19(&VAR_16->dev);
failed_register:
 FUNC_2(VAR_18->clk);
failed_clk:
 FUNC_18(((void*)0));

 return VAR_20;
}
