
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int runtime; } ;
struct snd_pcm_indirect2 {int sw_io; int pointer_calls; } ;
typedef int snd_pcm_uframes_t ;


 int FUNC_0 (int ,int ) ;

snd_pcm_uframes_t
FUNC_1(struct snd_pcm_substream *VAR_0,
     struct snd_pcm_indirect2 *VAR_1)
{



 return FUNC_0(VAR_0->runtime, VAR_1->sw_io);
}
