
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {scalar_t__ start; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {char* filter_data; scalar_t__ addr; } ;
struct omap_dmic {int io_base; TYPE_1__ dma_data; int * dev; int fclk; int mutex; int sysclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,struct resource*) ;
 struct omap_dmic* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int *,int *,int) ;
 int FUNC_7 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 struct resource* FUNC_8 (struct platform_device*,int ,char*) ;
 int FUNC_9 (struct platform_device*,struct omap_dmic*) ;
 int FUNC_10 (int *,int *,char*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_8)
{
 struct omap_dmic *VAR_9;
 struct resource *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_5(&VAR_8->dev, sizeof(struct omap_dmic), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_9(VAR_8, VAR_9);
 VAR_9->dev = &VAR_8->dev;
 VAR_9->sysclk = VAR_5;

 FUNC_7(&VAR_9->mutex);

 VAR_9->fclk = FUNC_3(VAR_9->dev, "fck");
 if (FUNC_0(VAR_9->fclk)) {
  FUNC_2(VAR_9->dev, "cant get fck\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_8(VAR_8, VAR_3, "dma");
 if (!VAR_10) {
  FUNC_2(VAR_9->dev, "invalid dma memory resource\n");
  return -VAR_0;
 }
 VAR_9->dma_data.addr = VAR_10->start + VAR_4;

 VAR_9->dma_data.filter_data = "up_link";

 VAR_10 = FUNC_8(VAR_8, VAR_3, "mpu");
 VAR_9->io_base = FUNC_4(&VAR_8->dev, VAR_10);
 if (FUNC_0(VAR_9->io_base))
  return FUNC_1(VAR_9->io_base);


 VAR_11 = FUNC_6(&VAR_8->dev,
           &VAR_6,
           &VAR_7, 1);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_10(&VAR_8->dev, ((void*)0), "up_link");
 if (VAR_11)
  return VAR_11;

 return 0;
}
