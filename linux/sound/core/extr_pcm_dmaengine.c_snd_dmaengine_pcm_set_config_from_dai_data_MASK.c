
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_dmaengine_dai_dma_data {int flags; scalar_t__ addr_width; int slave_id; int maxburst; int addr; } ;
struct dma_slave_config {scalar_t__ dst_addr_width; scalar_t__ src_addr_width; int slave_id; int src_maxburst; int src_addr; int dst_maxburst; int dst_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

void FUNC_0(
 const struct snd_pcm_substream *VAR_3,
 const struct snd_dmaengine_dai_dma_data *VAR_4,
 struct dma_slave_config *VAR_5)
{
 if (VAR_3->stream == VAR_1) {
  VAR_5->dst_addr = VAR_4->addr;
  VAR_5->dst_maxburst = VAR_4->maxburst;
  if (VAR_4->flags & VAR_2)
   VAR_5->dst_addr_width =
    VAR_0;
  if (VAR_4->addr_width != VAR_0)
   VAR_5->dst_addr_width = VAR_4->addr_width;
 } else {
  VAR_5->src_addr = VAR_4->addr;
  VAR_5->src_maxburst = VAR_4->maxburst;
  if (VAR_4->flags & VAR_2)
   VAR_5->src_addr_width =
    VAR_0;
  if (VAR_4->addr_width != VAR_0)
   VAR_5->src_addr_width = VAR_4->addr_width;
 }

 VAR_5->slave_id = VAR_4->slave_id;
}
