
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int rate; } ;
struct pcm_substream {scalar_t__ period_off; scalar_t__ dma_off; } ;
struct pcm_runtime {scalar_t__ stream_state; int stream_mutex; scalar_t__ panic; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct pcm_substream* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct pcm_runtime*,int ) ;
 int FUNC_2 (struct pcm_runtime*) ;
 int FUNC_3 (struct pcm_runtime*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct pcm_runtime* FUNC_6 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_3)
{
 struct pcm_runtime *VAR_4 = FUNC_6(VAR_3);
 struct pcm_substream *VAR_5 = FUNC_0(VAR_3);
 struct snd_pcm_runtime *VAR_6 = VAR_3->runtime;
 int VAR_7;

 if (VAR_4->panic)
  return -VAR_1;
 if (!VAR_5)
  return -VAR_0;

 FUNC_4(&VAR_4->stream_mutex);

 FUNC_3(VAR_4);

 VAR_5->dma_off = 0;
 VAR_5->period_off = 0;

 if (VAR_4->stream_state == VAR_2) {

  VAR_7 = FUNC_1(VAR_4, VAR_6->rate);
  if (VAR_7) {
   FUNC_5(&VAR_4->stream_mutex);
   return VAR_7;
  }
  VAR_7 = FUNC_2(VAR_4);
  if (VAR_7) {
   FUNC_5(&VAR_4->stream_mutex);
   return VAR_7;
  }
 }
 FUNC_5(&VAR_4->stream_mutex);
 return 0;
}
