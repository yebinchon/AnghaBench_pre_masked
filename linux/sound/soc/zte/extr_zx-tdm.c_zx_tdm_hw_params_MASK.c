
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_tdm_info {int dai_wclk; scalar_t__ master; } ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_dmaengine_dai_dma_data {unsigned int addr_width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 unsigned int VAR_3 ;
 unsigned long FUNC_0 (int) ;
 unsigned long FUNC_1 (unsigned int) ;
 unsigned int VAR_4 ;
 unsigned int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_5 (struct snd_pcm_hw_params*) ;
 struct snd_dmaengine_dai_dma_data* FUNC_6 (struct snd_soc_dai*,struct snd_pcm_substream*) ;
 struct zx_tdm_info* FUNC_7 (struct snd_soc_dai*) ;
 unsigned long FUNC_8 (struct zx_tdm_info*,int ) ;
 int FUNC_9 (struct zx_tdm_info*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_5,
       struct snd_pcm_hw_params *VAR_6,
       struct snd_soc_dai *VAR_7)
{
 struct zx_tdm_info *VAR_8 = FUNC_7(VAR_7);
 struct snd_dmaengine_dai_dma_data *VAR_9;
 unsigned int VAR_10 = VAR_3;
 unsigned int VAR_11 = 32;
 unsigned int VAR_12 = 0;
 unsigned int VAR_13 = 0;
 unsigned long VAR_14;

 VAR_9 = FUNC_6(VAR_7, VAR_5);
 VAR_9->addr_width = VAR_11 >> 3;

 switch (FUNC_4(VAR_6)) {
 case 129:
 case 130:
 case 128:
  VAR_10 = 1;
  break;
 default:
  FUNC_3(VAR_7->dev, "Unknown data format\n");
  return -VAR_0;
 }

 VAR_14 = FUNC_8(VAR_8, VAR_1);
 VAR_14 |= FUNC_1(VAR_10) | FUNC_0(1);
 FUNC_9(VAR_8, VAR_1, VAR_14);
 FUNC_9(VAR_8, VAR_2, VAR_12);

 if (VAR_8->master)
  VAR_13 = FUNC_2(VAR_8->dai_wclk,
   FUNC_5(VAR_6) * VAR_4 * VAR_11);

 return VAR_13;
}
