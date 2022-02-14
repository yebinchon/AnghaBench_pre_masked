
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; } ;
struct pcm_substream {int dummy; } ;
struct pcm_runtime {struct pcm_substream playback; TYPE_2__* chip; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {struct device dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 struct pcm_runtime* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static struct pcm_substream *FUNC_2(struct snd_pcm_substream
            *VAR_1)
{
 struct pcm_runtime *VAR_2 = FUNC_1(VAR_1);
 struct device *VAR_3 = &VAR_2->chip->dev->dev;

 if (VAR_1->stream == VAR_0)
  return &VAR_2->playback;

 FUNC_0(VAR_3, "Error getting pcm substream slot.\n");
 return ((void*)0);
}
