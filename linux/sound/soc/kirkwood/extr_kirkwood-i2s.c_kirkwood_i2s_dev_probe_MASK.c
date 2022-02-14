
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct snd_soc_dai_driver {int dummy; } ;
struct TYPE_8__ {struct device_node* of_node; struct kirkwood_asoc_platform_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct kirkwood_dma_data {scalar_t__ irq; int burst; void* clk; void* extclk; int ctl_rec; int ctl_play; void* io; } ;
struct kirkwood_asoc_platform_data {int burst; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (void*,void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*,struct kirkwood_dma_data*) ;
 void* FUNC_9 (TYPE_1__*,char*) ;
 int FUNC_10 (TYPE_1__*,void*) ;
 struct kirkwood_dma_data* FUNC_11 (TYPE_1__*,int,int ) ;
 void* FUNC_12 (struct platform_device*,int ) ;
 struct snd_soc_dai_driver* VAR_10 ;
 struct snd_soc_dai_driver* VAR_11 ;
 int FUNC_13 (struct kirkwood_dma_data*) ;
 int VAR_12 ;
 scalar_t__ FUNC_14 (struct platform_device*,int ) ;
 int FUNC_15 (TYPE_1__*,int *,struct snd_soc_dai_driver*,int) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_13)
{
 struct kirkwood_asoc_platform_data *VAR_14 = VAR_13->dev.platform_data;
 struct snd_soc_dai_driver *VAR_15 = VAR_10;
 struct kirkwood_dma_data *VAR_16;
 struct device_node *VAR_17 = VAR_13->dev.of_node;
 int VAR_18;

 VAR_16 = FUNC_11(&VAR_13->dev, sizeof(*VAR_16), VAR_3);
 if (!VAR_16)
  return -VAR_1;

 FUNC_8(&VAR_13->dev, VAR_16);

 VAR_16->io = FUNC_12(VAR_13, 0);
 if (FUNC_1(VAR_16->io))
  return FUNC_2(VAR_16->io);

 VAR_16->irq = FUNC_14(VAR_13, 0);
 if (VAR_16->irq < 0)
  return VAR_16->irq;

 if (VAR_17) {
  VAR_16->burst = 128;
 } else if (VAR_14) {
  VAR_16->burst = VAR_14->burst;
 } else {
  FUNC_6(&VAR_13->dev, "no DT nor platform data ?!\n");
  return -VAR_0;
 }

 VAR_16->clk = FUNC_9(&VAR_13->dev, VAR_17 ? "internal" : ((void*)0));
 if (FUNC_1(VAR_16->clk)) {
  FUNC_6(&VAR_13->dev, "no clock\n");
  return FUNC_2(VAR_16->clk);
 }

 VAR_16->extclk = FUNC_9(&VAR_13->dev, "extclk");
 if (FUNC_1(VAR_16->extclk)) {
  if (FUNC_2(VAR_16->extclk) == -VAR_2)
   return -VAR_2;
 } else {
  if (FUNC_4(VAR_16->extclk, VAR_16->clk)) {
   FUNC_10(&VAR_13->dev, VAR_16->extclk);
   VAR_16->extclk = FUNC_0(-VAR_0);
  } else {
   FUNC_7(&VAR_13->dev, "found external clock\n");
   FUNC_5(VAR_16->extclk);
   VAR_15 = VAR_11;
  }
 }

 VAR_18 = FUNC_5(VAR_16->clk);
 if (VAR_18 < 0)
  return VAR_18;


 VAR_16->ctl_play = VAR_6;
 VAR_16->ctl_rec = VAR_9;


 if (VAR_16->burst == 32) {
  VAR_16->ctl_play |= VAR_5;
  VAR_16->ctl_rec |= VAR_8;
 } else {
  VAR_16->ctl_play |= VAR_4;
  VAR_16->ctl_rec |= VAR_7;
 }

 VAR_18 = FUNC_15(&VAR_13->dev, &VAR_12,
      VAR_15, 2);
 if (VAR_18) {
  FUNC_6(&VAR_13->dev, "snd_soc_register_component failed\n");
  goto err_component;
 }

 FUNC_13(VAR_16);

 return 0;

 err_component:
 if (!FUNC_1(VAR_16->extclk))
  FUNC_3(VAR_16->extclk);
 FUNC_3(VAR_16->clk);

 return VAR_18;
}
