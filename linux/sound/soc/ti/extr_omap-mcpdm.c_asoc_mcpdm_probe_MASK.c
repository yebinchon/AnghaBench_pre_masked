
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {scalar_t__ start; } ;
struct platform_device {int dev; } ;
struct omap_mcpdm {scalar_t__ irq; int * dev; int io_base; TYPE_1__* dma_data; int mutex; } ;
struct TYPE_2__ {char* filter_data; scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct resource*) ;
 struct omap_mcpdm* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int *,int *,int) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (struct platform_device*,int ) ;
 struct resource* FUNC_7 (struct platform_device*,int ,char*) ;
 int FUNC_8 (struct platform_device*,struct omap_mcpdm*) ;
 int FUNC_9 (int *,char*,char*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_7)
{
 struct omap_mcpdm *VAR_8;
 struct resource *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_3(&VAR_7->dev, sizeof(struct omap_mcpdm), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_8(VAR_7, VAR_8);

 FUNC_5(&VAR_8->mutex);

 VAR_9 = FUNC_7(VAR_7, VAR_2, "dma");
 if (VAR_9 == ((void*)0))
  return -VAR_0;

 VAR_8->dma_data[0].addr = VAR_9->start + VAR_3;
 VAR_8->dma_data[1].addr = VAR_9->start + VAR_4;

 VAR_8->dma_data[0].filter_data = "dn_link";
 VAR_8->dma_data[1].filter_data = "up_link";

 VAR_9 = FUNC_7(VAR_7, VAR_2, "mpu");
 VAR_8->io_base = FUNC_2(&VAR_7->dev, VAR_9);
 if (FUNC_0(VAR_8->io_base))
  return FUNC_1(VAR_8->io_base);

 VAR_8->irq = FUNC_6(VAR_7, 0);
 if (VAR_8->irq < 0)
  return VAR_8->irq;

 VAR_8->dev = &VAR_7->dev;

 VAR_10 = FUNC_4(&VAR_7->dev,
            &VAR_5,
            &VAR_6, 1);
 if (VAR_10)
  return VAR_10;

 return FUNC_9(&VAR_7->dev, "dn_link", "up_link");
}
