
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ dma_addr; struct snd_card_asihpi_pcm* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_card_asihpi_pcm {unsigned int bytes_per_sec; int period_bytes; int buffer_bytes; scalar_t__ hpi_buffer_attached; int h_stream; int format; } ;
struct snd_card_asihpi {scalar_t__ can_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,unsigned int,int ,unsigned int,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *,scalar_t__*,int *,int *,int *) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_7 (struct snd_pcm_hw_params*) ;
 int FUNC_8 (struct snd_pcm_hw_params*) ;
 int FUNC_9 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_10 (struct snd_pcm_hw_params*) ;
 int FUNC_11 (struct snd_pcm_substream*,struct snd_pcm_hw_params*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct snd_pcm_substream*,int ) ;
 struct snd_card_asihpi* FUNC_15 (struct snd_pcm_substream*) ;
 int FUNC_16 (char*,int) ;
 int FUNC_17 (char*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_18(struct snd_pcm_substream *VAR_3,
      struct snd_pcm_hw_params *VAR_4)
{
 struct snd_pcm_runtime *VAR_5 = VAR_3->runtime;
 struct snd_card_asihpi_pcm *VAR_6 = VAR_5->private_data;
 struct snd_card_asihpi *VAR_7 = FUNC_15(VAR_3);
 int VAR_8;
 u16 VAR_9;
 int VAR_10;
 unsigned int VAR_11;

 FUNC_11(VAR_3, VAR_4);
 VAR_8 = FUNC_14(VAR_3, FUNC_6(VAR_4));
 if (VAR_8 < 0)
  return VAR_8;
 VAR_8 = FUNC_12(FUNC_8(VAR_4), &VAR_9);
 if (VAR_8)
  return VAR_8;

 FUNC_1(FUNC_0(&VAR_6->format,
   FUNC_7(VAR_4),
   VAR_9, FUNC_10(VAR_4), 0, 0));

 if (VAR_3->stream == VAR_2) {
  if (FUNC_2(VAR_6->h_stream) != 0)
   return -VAR_0;

  if (FUNC_3(
   VAR_6->h_stream, &VAR_6->format) != 0)
   return -VAR_0;
 }

 VAR_6->hpi_buffer_attached = 0;
 if (VAR_7->can_dma) {
  VAR_8 = FUNC_5(VAR_6->h_stream,
   FUNC_6(VAR_4), VAR_5->dma_addr);
  if (VAR_8 == 0) {
   FUNC_17(
    "stream_host_buffer_attach success %u %lu\n",
    FUNC_6(VAR_4),
    (unsigned long)VAR_5->dma_addr);
  } else {
   FUNC_16("stream_host_buffer_attach error %d\n",
     VAR_8);
   return -VAR_1;
  }

  VAR_8 = FUNC_4(VAR_6->h_stream, ((void*)0),
    &VAR_6->hpi_buffer_attached, ((void*)0), ((void*)0), ((void*)0));
 }
 VAR_11 = FUNC_10(VAR_4) * FUNC_7(VAR_4);
 VAR_10 = FUNC_13(FUNC_8(VAR_4));
 VAR_11 *= VAR_10;
 VAR_11 /= 8;
 if (VAR_10 < 0 || VAR_11 == 0)
  return -VAR_0;

 VAR_6->bytes_per_sec = VAR_11;
 VAR_6->buffer_bytes = FUNC_6(VAR_4);
 VAR_6->period_bytes = FUNC_9(VAR_4);

 return 0;
}
