
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int card; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct dma_slave_config {int dst_maxburst; int src_maxburst; int device_fc; scalar_t__ dst_addr; int direction; int dst_addr_width; } ;
struct atmel_classd {scalar_t__ phy_base; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 struct atmel_classd* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct snd_pcm_substream *VAR_5,
 struct snd_pcm_hw_params *VAR_6,
 struct dma_slave_config *VAR_7)
{
 struct snd_soc_pcm_runtime *VAR_8 = VAR_5->private_data;
 struct atmel_classd *VAR_9 = FUNC_3(VAR_8->card);

 if (FUNC_2(VAR_6) != 16) {
  FUNC_0(VAR_9->dev,
   "only supports 16-bit audio data\n");
  return -VAR_4;
 }

 if (FUNC_1(VAR_6) == 1)
  VAR_7->dst_addr_width = VAR_2;
 else
  VAR_7->dst_addr_width = VAR_3;

 VAR_7->direction = VAR_1;
 VAR_7->dst_addr = VAR_9->phy_base + VAR_0;
 VAR_7->dst_maxburst = 1;
 VAR_7->src_maxburst = 1;
 VAR_7->device_fc = 0;

 return 0;
}
