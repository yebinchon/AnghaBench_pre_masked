
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sst_pdata {int resindex_dma_base; int dma_engine; int irq; scalar_t__ dma_size; scalar_t__ dma_base; } ;
struct TYPE_2__ {scalar_t__ lpe_base; } ;
struct sst_dsp {int fw_use_dma; int dev; struct sst_dma* dma; int dma_dev; TYPE_1__ addr; struct sst_pdata* pdata; } ;
struct sst_dma {int chip; struct sst_dsp* sst; } ;
struct resource {int flags; scalar_t__ end; scalar_t__ start; } ;
typedef int mem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,struct sst_dma*) ;
 struct sst_dma* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ,struct resource*,int ) ;
 int FUNC_6 (struct resource*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct sst_dsp *VAR_4)
{
 struct sst_pdata *VAR_5 = VAR_4->pdata;
 struct sst_dma *VAR_6;
 struct resource VAR_7;
 int VAR_8 = 0;

 if (VAR_4->pdata->resindex_dma_base == -1)

  return 0;



 switch (VAR_4->pdata->dma_engine) {
 case 128:
  break;
 default:
  FUNC_2(VAR_4->dev, "error: invalid DMA engine %d\n",
   VAR_4->pdata->dma_engine);
  return -VAR_0;
 }

 VAR_6 = FUNC_4(VAR_4->dev, sizeof(struct sst_dma), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->sst = VAR_4;

 FUNC_6(&VAR_7, 0, sizeof(VAR_7));

 VAR_7.start = VAR_4->addr.lpe_base + VAR_5->dma_base;
 VAR_7.end = VAR_4->addr.lpe_base + VAR_5->dma_base + VAR_5->dma_size - 1;
 VAR_7.flags = VAR_3;


 VAR_6->chip = FUNC_5(VAR_4->dma_dev, &VAR_7, VAR_5->irq);
 if (FUNC_0(VAR_6->chip)) {
  FUNC_2(VAR_4->dev, "error: DMA device register failed\n");
  VAR_8 = FUNC_1(VAR_6->chip);
  goto err_dma_dev;
 }

 VAR_4->dma = VAR_6;
 VAR_4->fw_use_dma = 1;
 return 0;

err_dma_dev:
 FUNC_3(VAR_4->dev, VAR_6);
 return VAR_8;
}
