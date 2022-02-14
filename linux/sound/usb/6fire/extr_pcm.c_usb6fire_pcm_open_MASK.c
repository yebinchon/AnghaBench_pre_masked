
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct TYPE_6__ {int channels_max; void* rates; } ;
struct snd_pcm_runtime {TYPE_3__ hw; } ;
struct pcm_substream {int active; struct snd_pcm_substream* instance; } ;
struct pcm_runtime {size_t rate; int stream_mutex; TYPE_2__* chip; struct pcm_substream capture; struct pcm_substream playback; scalar_t__ panic; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_4__ {int dev; } ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_3__ VAR_6 ;
 int VAR_7 ;
 void** VAR_8 ;
 struct pcm_runtime* FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_9)
{
 struct pcm_runtime *VAR_10 = FUNC_4(VAR_9);
 struct pcm_substream *VAR_11 = ((void*)0);
 struct snd_pcm_runtime *VAR_12 = VAR_9->runtime;

 if (VAR_10->panic)
  return -VAR_1;

 FUNC_2(&VAR_10->stream_mutex);
 VAR_12->hw = VAR_6;

 if (VAR_9->stream == VAR_5) {
  if (VAR_10->rate < FUNC_0(VAR_7))
   VAR_12->hw.rates = VAR_8[VAR_10->rate];
  VAR_12->hw.channels_max = VAR_3;
  VAR_11 = &VAR_10->playback;
 } else if (VAR_9->stream == VAR_4) {
  if (VAR_10->rate < FUNC_0(VAR_7))
   VAR_12->hw.rates = VAR_8[VAR_10->rate];
  VAR_12->hw.channels_max = VAR_2;
  VAR_11 = &VAR_10->capture;
 }

 if (!VAR_11) {
  FUNC_3(&VAR_10->stream_mutex);
  FUNC_1(&VAR_10->chip->dev->dev, "invalid stream type.\n");
  return -VAR_0;
 }

 VAR_11->instance = VAR_9;
 VAR_11->active = 0;
 FUNC_3(&VAR_10->stream_mutex);
 return 0;
}
