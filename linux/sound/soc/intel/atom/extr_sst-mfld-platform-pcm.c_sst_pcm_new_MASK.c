
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_pcm* pcm; struct snd_soc_dai* cpu_dai; } ;
struct snd_soc_dai {TYPE_3__* driver; } ;
struct snd_pcm {int dummy; } ;
struct TYPE_5__ {scalar_t__ channels_min; } ;
struct TYPE_4__ {scalar_t__ channels_min; } ;
struct TYPE_6__ {TYPE_2__ capture; TYPE_1__ playback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_pcm_runtime *VAR_4)
{
 struct snd_soc_dai *VAR_5 = VAR_4->cpu_dai;
 struct snd_pcm *VAR_6 = VAR_4->pcm;

 if (VAR_5->driver->playback.channels_min ||
   VAR_5->driver->capture.channels_min) {
  FUNC_1(VAR_6,
   VAR_1,
   FUNC_0(VAR_0),
   VAR_3, VAR_2);
 }
 return 0;
}
