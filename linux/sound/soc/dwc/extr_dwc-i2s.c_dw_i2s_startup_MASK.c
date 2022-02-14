
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union dw_i2s_snd_dma_data {int dummy; } dw_i2s_snd_dma_data ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct dw_i2s_dev {int capability; union dw_i2s_snd_dma_data capture_dma_data; union dw_i2s_snd_dma_data play_dma_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct dw_i2s_dev* FUNC_0 (struct snd_soc_dai*) ;
 int FUNC_1 (struct snd_soc_dai*,struct snd_pcm_substream*,void*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_5,
  struct snd_soc_dai *VAR_6)
{
 struct dw_i2s_dev *VAR_7 = FUNC_0(VAR_6);
 union dw_i2s_snd_dma_data *VAR_8 = ((void*)0);

 if (!(VAR_7->capability & VAR_1) &&
   (VAR_5->stream == VAR_3))
  return -VAR_2;

 if (!(VAR_7->capability & VAR_0) &&
   (VAR_5->stream == VAR_4))
  return -VAR_2;

 if (VAR_5->stream == VAR_4)
  VAR_8 = &VAR_7->play_dma_data;
 else if (VAR_5->stream == VAR_3)
  VAR_8 = &VAR_7->capture_dma_data;

 FUNC_1(VAR_6, VAR_5, (void *)VAR_8);

 return 0;
}
