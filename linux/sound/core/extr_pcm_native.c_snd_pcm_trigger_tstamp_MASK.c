
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_pcm_substream* trigger_master; int trigger_tstamp; int trigger_tstamp_latched; } ;


 int FUNC_0 (struct snd_pcm_runtime*,int *) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 if (VAR_1->trigger_master == ((void*)0))
  return;
 if (VAR_1->trigger_master == VAR_0) {
  if (!VAR_1->trigger_tstamp_latched)
   FUNC_0(VAR_1, &VAR_1->trigger_tstamp);
 } else {
  FUNC_1(VAR_1->trigger_master);
  VAR_1->trigger_tstamp = VAR_1->trigger_master->runtime->trigger_tstamp;
 }
 VAR_1->trigger_master = ((void*)0);
}
