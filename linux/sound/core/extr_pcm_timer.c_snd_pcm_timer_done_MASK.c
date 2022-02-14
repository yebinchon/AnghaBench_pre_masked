
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int * timer; TYPE_1__* pcm; } ;
struct TYPE_2__ {int card; } ;


 int FUNC_0 (int ,int *) ;

void FUNC_1(struct snd_pcm_substream *VAR_0)
{
 if (VAR_0->timer) {
  FUNC_0(VAR_0->pcm->card, VAR_0->timer);
  VAR_0->timer = ((void*)0);
 }
}
