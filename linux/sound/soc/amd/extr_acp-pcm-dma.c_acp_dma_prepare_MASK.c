
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct audio_substream_data* private_data; } ;
struct audio_substream_data {scalar_t__ direction; int dma_dscr_idx_2; int acp_mmio; int dma_dscr_idx_1; int ch2; int ch1; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_3)
{
 struct snd_pcm_runtime *VAR_4 = VAR_3->runtime;
 struct audio_substream_data *VAR_5 = VAR_4->private_data;
 u16 VAR_6, VAR_7;

 if (!VAR_5)
  return -VAR_0;

 if (VAR_5->direction == VAR_2) {
  VAR_6 = VAR_5->ch1;
  VAR_7 = VAR_5->ch2;
 } else {
  VAR_7 = VAR_5->ch1;
  VAR_6 = VAR_5->ch2;
 }
 FUNC_0(VAR_5->acp_mmio,
          VAR_6,
          VAR_5->dma_dscr_idx_1,
          VAR_1, 0);
 FUNC_0(VAR_5->acp_mmio,
          VAR_7,
          VAR_5->dma_dscr_idx_2,
          VAR_1, 0);
 return 0;
}
