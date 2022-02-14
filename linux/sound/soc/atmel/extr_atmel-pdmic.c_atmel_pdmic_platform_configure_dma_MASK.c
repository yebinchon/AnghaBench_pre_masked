
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int card; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct dma_slave_config {int src_maxburst; int dst_maxburst; scalar_t__ src_addr; } ;
struct atmel_pdmic {scalar_t__ phy_base; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_pcm_substream*,struct snd_pcm_hw_params*,struct dma_slave_config*) ;
 struct atmel_pdmic* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct snd_pcm_substream *VAR_1,
    struct snd_pcm_hw_params *VAR_2,
    struct dma_slave_config *VAR_3)
{
 struct snd_soc_pcm_runtime *VAR_4 = VAR_1->private_data;
 struct atmel_pdmic *VAR_5 = FUNC_2(VAR_4->card);
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_2,
            VAR_3);
 if (VAR_6) {
  FUNC_0(VAR_5->dev,
   "hw params to dma slave configure failed\n");
  return VAR_6;
 }

 VAR_3->src_addr = VAR_5->phy_base + VAR_0;
 VAR_3->src_maxburst = 1;
 VAR_3->dst_maxburst = 1;

 return 0;
}
