
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {struct davinci_vc* platform_data; } ;
struct platform_device {TYPE_3__ dev; } ;
struct davinci_vcif_dev {TYPE_1__* dma_data; struct davinci_vc* davinci_vc; } ;
struct TYPE_9__ {int dma_rx_addr; int dma_rx_channel; int dma_tx_addr; int dma_tx_channel; } ;
struct davinci_vc {TYPE_2__ davinci_vcif; } ;
struct TYPE_8__ {int addr; int * filter_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,char*,...) ;
 int FUNC_1 (TYPE_3__*,struct davinci_vcif_dev*) ;
 struct davinci_vcif_dev* FUNC_2 (TYPE_3__*,int,int ) ;
 int FUNC_3 (TYPE_3__*,int *,int *,int) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_6)
{
 struct davinci_vc *VAR_7 = VAR_6->dev.platform_data;
 struct davinci_vcif_dev *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(&VAR_6->dev,
     sizeof(struct davinci_vcif_dev),
     VAR_1);
 if (!VAR_8)
  return -VAR_0;


 VAR_8->davinci_vc = VAR_7;
 VAR_8->dma_data[VAR_3].filter_data =
    &VAR_7->davinci_vcif.dma_tx_channel;
 VAR_8->dma_data[VAR_3].addr =
    VAR_7->davinci_vcif.dma_tx_addr;


 VAR_8->dma_data[VAR_2].filter_data =
    &VAR_7->davinci_vcif.dma_rx_channel;
 VAR_8->dma_data[VAR_2].addr =
    VAR_7->davinci_vcif.dma_rx_addr;

 FUNC_1(&VAR_6->dev, VAR_8);

 VAR_9 = FUNC_3(&VAR_6->dev,
           &VAR_4,
           &VAR_5, 1);
 if (VAR_9 != 0) {
  FUNC_0(&VAR_6->dev, "could not register dai\n");
  return VAR_9;
 }

 VAR_9 = FUNC_4(&VAR_6->dev);
 if (VAR_9) {
  FUNC_0(&VAR_6->dev, "register PCM failed: %d\n", VAR_9);
  return VAR_9;
 }

 return 0;
}
