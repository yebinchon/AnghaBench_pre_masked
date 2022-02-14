
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct dma_slave_config {int dst_addr_width; int src_addr_width; int device_fc; int direction; } ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct snd_pcm_hw_params const*) ;

int FUNC_1(const struct snd_pcm_substream *VAR_9,
 const struct snd_pcm_hw_params *VAR_10,
 struct dma_slave_config *VAR_11)
{
 enum dma_slave_buswidth VAR_12;
 int VAR_13;

 VAR_13 = FUNC_0(VAR_10);
 if (VAR_13 < 8 || VAR_13 > 64)
  return -VAR_7;
 else if (VAR_13 == 8)
  VAR_12 = VAR_2;
 else if (VAR_13 == 16)
  VAR_12 = VAR_3;
 else if (VAR_13 == 24)
  VAR_12 = VAR_4;
 else if (VAR_13 <= 32)
  VAR_12 = VAR_5;
 else
  VAR_12 = VAR_6;

 if (VAR_9->stream == VAR_8) {
  VAR_11->direction = VAR_1;
  VAR_11->dst_addr_width = VAR_12;
 } else {
  VAR_11->direction = VAR_0;
  VAR_11->src_addr_width = VAR_12;
 }

 VAR_11->device_fc = 0;

 return 0;
}
