
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_area; } ;
struct pcm_period {struct pcm_period* next; void* relative_end; void* start; } ;
struct audio_stream {unsigned int period_size; unsigned int periods; struct pcm_period* buffer; struct snd_pcm_substream* substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct audio_stream*) ;
 void* FUNC_1 (int,int ) ;
 unsigned long FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct audio_stream *VAR_2,
     unsigned int VAR_3,
     unsigned int VAR_4)
{
 struct snd_pcm_substream *VAR_5 = VAR_2->substream;
 struct snd_pcm_runtime *VAR_6 = VAR_5->runtime;
 struct pcm_period *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_6->dma_area);

 if (VAR_2->period_size == VAR_3 &&
     VAR_2->periods == VAR_4)
  return 0;

 FUNC_0(VAR_2);

 VAR_2->period_size = VAR_3;
 VAR_2->periods = VAR_4;

 VAR_2->buffer = FUNC_1(sizeof(struct pcm_period), VAR_1);
 if (!VAR_2->buffer)
  return -VAR_0;
 VAR_7 = VAR_2->buffer;
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_7->start = (u32)(VAR_8 + (VAR_9 * VAR_3));
  VAR_7->relative_end = (u32) (((VAR_9+1) * VAR_3) - 0x1);
  if (VAR_9 < VAR_4 - 1) {
   VAR_7->next = FUNC_1(sizeof(struct pcm_period),
      VAR_1);
   if (!VAR_7->next) {
    FUNC_0(VAR_2);
    return -VAR_0;
   }
   VAR_7 = VAR_7->next;
  }
 }
 VAR_7->next = VAR_2->buffer;
 return 0;
}
