
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ rate; } ;
struct pcm_substream {scalar_t__ period_off; scalar_t__ dma_off; } ;
struct pcm_runtime {scalar_t__ stream_state; size_t rate; int stream_mutex; TYPE_2__* chip; scalar_t__ panic; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int dev; } ;


 size_t FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__* VAR_4 ;
 struct pcm_runtime* FUNC_4 (struct snd_pcm_substream*) ;
 struct pcm_substream* FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (struct pcm_runtime*) ;
 int FUNC_7 (struct pcm_runtime*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_5)
{
 struct pcm_runtime *VAR_6 = FUNC_4(VAR_5);
 struct pcm_substream *VAR_7 = FUNC_5(VAR_5);
 struct snd_pcm_runtime *VAR_8 = VAR_5->runtime;
 int VAR_9;

 if (VAR_6->panic)
  return -VAR_2;
 if (!VAR_7)
  return -VAR_1;

 FUNC_2(&VAR_6->stream_mutex);
 VAR_7->dma_off = 0;
 VAR_7->period_off = 0;

 if (VAR_6->stream_state == VAR_3) {
  for (VAR_6->rate = 0; VAR_6->rate < FUNC_0(VAR_4); VAR_6->rate++)
   if (VAR_8->rate == VAR_4[VAR_6->rate])
    break;
  if (VAR_6->rate == FUNC_0(VAR_4)) {
   FUNC_3(&VAR_6->stream_mutex);
   FUNC_1(&VAR_6->chip->dev->dev,
    "invalid rate %d in prepare.\n",
    VAR_8->rate);
   return -VAR_0;
  }

  VAR_9 = FUNC_6(VAR_6);
  if (VAR_9) {
   FUNC_3(&VAR_6->stream_mutex);
   return VAR_9;
  }
  VAR_9 = FUNC_7(VAR_6);
  if (VAR_9) {
   FUNC_3(&VAR_6->stream_mutex);
   FUNC_1(&VAR_6->chip->dev->dev,
    "could not start pcm stream.\n");
   return VAR_9;
  }
 }
 FUNC_3(&VAR_6->stream_mutex);
 return 0;
}
