
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int trigger_tstamp_latched; struct snd_pcm_substream* trigger_master; TYPE_1__* status; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_4, int VAR_5)
{
 struct snd_pcm_runtime *VAR_6 = VAR_4->runtime;
 if (VAR_6->status->state != VAR_2)
  return -VAR_0;
 if (VAR_4->stream == VAR_3 &&
     !FUNC_0(VAR_4))
  return -VAR_1;
 VAR_6->trigger_tstamp_latched = 0;
 VAR_6->trigger_master = VAR_4;
 return 0;
}
