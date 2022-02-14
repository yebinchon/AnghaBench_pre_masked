
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct TYPE_6__ {int rate_max; int rates; } ;
struct snd_pcm_runtime {TYPE_3__ hw; } ;
struct pcm_substream {int active; struct snd_pcm_substream* instance; } ;
struct pcm_runtime {int stream_mutex; scalar_t__ extra_freq; TYPE_2__* chip; struct pcm_substream playback; scalar_t__ panic; } ;
struct device {int dummy; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_3__ VAR_6 ;
 int FUNC_3 (struct snd_pcm_runtime*,int ,int ,int *) ;
 struct pcm_runtime* FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_7)
{
 struct pcm_runtime *VAR_8 = FUNC_4(VAR_7);
 struct pcm_substream *VAR_9 = ((void*)0);
 struct snd_pcm_runtime *VAR_10 = VAR_7->runtime;
 int VAR_11;

 if (VAR_8->panic)
  return -VAR_1;

 FUNC_1(&VAR_8->stream_mutex);
 VAR_10->hw = VAR_6;

 if (VAR_7->stream == VAR_4)
  VAR_9 = &VAR_8->playback;

 if (!VAR_9) {
  struct device *VAR_12 = &VAR_8->chip->dev->dev;
  FUNC_2(&VAR_8->stream_mutex);
  FUNC_0(VAR_12, "Invalid stream type\n");
  return -VAR_0;
 }

 if (VAR_8->extra_freq) {
  VAR_10->hw.rates |= VAR_3;
  VAR_10->hw.rate_max = 384000;


  VAR_11 = FUNC_3(VAR_7->runtime, 0,
       VAR_2,
       &VAR_5);
  if (VAR_11 < 0) {
   FUNC_2(&VAR_8->stream_mutex);
   return VAR_11;
  }
 }

 VAR_9->instance = VAR_7;
 VAR_9->active = 0;
 FUNC_2(&VAR_8->stream_mutex);
 return 0;
}
