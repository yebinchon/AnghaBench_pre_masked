
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; } ;
struct pcm_substream {int dummy; } ;
struct pcm_runtime {TYPE_2__* chip; struct pcm_substream capture; struct pcm_substream playback; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct pcm_runtime* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static struct pcm_substream *FUNC_2(
  struct snd_pcm_substream *VAR_2)
{
 struct pcm_runtime *VAR_3 = FUNC_1(VAR_2);

 if (VAR_2->stream == VAR_1)
  return &VAR_3->playback;
 else if (VAR_2->stream == VAR_0)
  return &VAR_3->capture;
 FUNC_0(&VAR_3->chip->dev->dev, "error getting pcm substream slot.\n");
 return ((void*)0);
}
