
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_dsp {int dev; struct sst_dma* dma; } ;
struct sst_dma {int * ch; } ;
struct dma_slave_config {int dst_maxburst; int src_maxburst; int dst_addr_width; int src_addr_width; int direction; } ;
typedef int slave ;
typedef int dma_cap_mask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ,struct sst_dsp*) ;
 int FUNC_5 (int *,struct dma_slave_config*) ;
 int FUNC_6 (struct dma_slave_config*,int ,int) ;

int FUNC_7(struct sst_dsp *VAR_7, int VAR_8)
{
 struct sst_dma *VAR_9 = VAR_7->dma;
 struct dma_slave_config VAR_10;
 dma_cap_mask_t VAR_11;
 int VAR_12;

 FUNC_2(VAR_11);
 FUNC_1(VAR_2, VAR_11);
 FUNC_1(VAR_0, VAR_11);

 VAR_9->ch = FUNC_4(VAR_11, VAR_6, VAR_7);
 if (VAR_9->ch == ((void*)0)) {
  FUNC_0(VAR_7->dev, "error: DMA request channel failed\n");
  return -VAR_4;
 }

 FUNC_6(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.direction = VAR_1;
 VAR_10.src_addr_width =
  VAR_10.dst_addr_width = VAR_3;
 VAR_10.src_maxburst = VAR_10.dst_maxburst = VAR_5;

 VAR_12 = FUNC_5(VAR_9->ch, &VAR_10);
 if (VAR_12) {
  FUNC_0(VAR_7->dev, "error: unable to set DMA slave config %d\n",
   VAR_12);
  FUNC_3(VAR_9->ch);
  VAR_9->ch = ((void*)0);
 }

 return VAR_12;
}
