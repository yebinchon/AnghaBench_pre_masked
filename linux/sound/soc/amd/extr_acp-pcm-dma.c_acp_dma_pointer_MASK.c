
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int buffer_size; int delay; int period_size; struct audio_substream_data* private_data; } ;
struct audio_substream_data {scalar_t__ bytescount; scalar_t__ dma_dscr_idx_1; int dma_curr_dscr; int acp_mmio; } ;
typedef int snd_pcm_uframes_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct audio_substream_data*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct snd_pcm_runtime*,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (struct snd_pcm_runtime*,int ) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_5(struct snd_pcm_substream *VAR_2)
{
 u32 VAR_3;
 u32 VAR_4 = 0;
 u64 VAR_5 = 0;
 u16 VAR_6;
 u32 VAR_7, VAR_8;

 struct snd_pcm_runtime *VAR_9 = VAR_2->runtime;
 struct audio_substream_data *VAR_10 = VAR_9->private_data;

 if (!VAR_10)
  return -VAR_0;

 if (VAR_2->stream == VAR_1) {
  VAR_7 = FUNC_4(VAR_9, VAR_9->period_size);
  VAR_5 = FUNC_0(VAR_10);
  if (VAR_5 >= VAR_10->bytescount)
   VAR_5 -= VAR_10->bytescount;
  if (VAR_5 < VAR_7) {
   VAR_4 = 0;
  } else {
   VAR_6 = FUNC_1(VAR_10->acp_mmio, VAR_10->dma_curr_dscr);
   if (VAR_6 == VAR_10->dma_dscr_idx_1)
    VAR_4 = VAR_7;
   else
    VAR_4 = 0;
  }
  if (VAR_5 > 0) {
   VAR_8 = FUNC_3(VAR_5, VAR_7);
   VAR_9->delay = FUNC_2(VAR_9, VAR_8);
  }
 } else {
  VAR_3 = FUNC_4(VAR_9, VAR_9->buffer_size);
  VAR_5 = FUNC_0(VAR_10);
  if (VAR_5 > VAR_10->bytescount)
   VAR_5 -= VAR_10->bytescount;
  VAR_4 = FUNC_3(VAR_5, VAR_3);
 }
 return FUNC_2(VAR_9, VAR_4);
}
