
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spear_spdif_platform_data {int filter; int dma_params; } ;
struct TYPE_2__ {int max_burst; int addr_width; scalar_t__ addr; int data; } ;
struct spdif_out_dev {int config; TYPE_1__ dma_params; int clk; int io_base; } ;
struct resource {scalar_t__ start; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 struct spear_spdif_platform_data* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct spdif_out_dev*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,struct resource*) ;
 struct spdif_out_dev* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,int *,int *,int) ;
 int FUNC_8 (int *,int *,int ) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_7)
{
 struct spdif_out_dev *VAR_8;
 struct spear_spdif_platform_data *VAR_9;
 struct resource *VAR_10;
 int VAR_11;

 VAR_8 = FUNC_6(&VAR_7->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_10 = FUNC_9(VAR_7, VAR_3, 0);
 VAR_8->io_base = FUNC_5(&VAR_7->dev, VAR_10);
 if (FUNC_0(VAR_8->io_base))
  return FUNC_1(VAR_8->io_base);

 VAR_8->clk = FUNC_4(&VAR_7->dev, ((void*)0));
 if (FUNC_0(VAR_8->clk))
  return FUNC_1(VAR_8->clk);

 VAR_9 = FUNC_2(&VAR_7->dev);

 VAR_8->dma_params.data = VAR_9->dma_params;
 VAR_8->dma_params.addr = VAR_10->start + VAR_4;
 VAR_8->dma_params.max_burst = 16;
 VAR_8->dma_params.addr_width = VAR_0;

 FUNC_3(&VAR_7->dev, VAR_8);

 VAR_11 = FUNC_7(&VAR_7->dev, &VAR_5,
           &VAR_6, 1);
 if (VAR_11)
  return VAR_11;

 return FUNC_8(&VAR_7->dev, &VAR_8->config,
      VAR_9->filter);
}
