
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sst_dsp {int dev; struct sst_dma* dma; } ;
struct sst_dma {TYPE_2__* ch; } ;
struct dma_async_tx_descriptor {int (* tx_submit ) (struct dma_async_tx_descriptor*) ;struct sst_dsp* callback_param; int callback; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {struct dma_async_tx_descriptor* (* device_prep_dma_memcpy ) (TYPE_2__*,scalar_t__,scalar_t__,size_t,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned long,unsigned long,size_t) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct dma_async_tx_descriptor*) ;
 int VAR_3 ;
 struct dma_async_tx_descriptor* FUNC_3 (TYPE_2__*,scalar_t__,scalar_t__,size_t,int ) ;
 int FUNC_4 (struct dma_async_tx_descriptor*) ;

__attribute__((used)) static int FUNC_5(struct sst_dsp *VAR_4, dma_addr_t VAR_5,
 dma_addr_t VAR_6, size_t VAR_7)
{
 struct dma_async_tx_descriptor *VAR_8;
 struct sst_dma *VAR_9 = VAR_4->dma;

 if (VAR_9->ch == ((void*)0)) {
  FUNC_1(VAR_4->dev, "error: no DMA channel\n");
  return -VAR_2;
 }

 FUNC_0(VAR_4->dev, "DMA: src: 0x%lx dest 0x%lx size %zu\n",
  (unsigned long)VAR_6, (unsigned long)VAR_5, VAR_7);

 VAR_8 = VAR_9->ch->device->device_prep_dma_memcpy(VAR_9->ch, VAR_5,
  VAR_6, VAR_7, VAR_0);
 if (!VAR_8){
  FUNC_1(VAR_4->dev, "error: dma prep memcpy failed\n");
  return -VAR_1;
 }

 VAR_8->callback = VAR_3;
 VAR_8->callback_param = VAR_4;

 VAR_8->tx_submit(VAR_8);
 FUNC_2(VAR_8);

 return 0;
}
