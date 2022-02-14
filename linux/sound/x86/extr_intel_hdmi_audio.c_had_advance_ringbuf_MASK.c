
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_intelhad {int pcmbuf_head; } ;
struct TYPE_2__ {int periods; } ;


 int FUNC_0 (struct snd_pcm_substream*,struct snd_intelhad*) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_substream *VAR_0,
    struct snd_intelhad *VAR_1)
{
 int VAR_2 = VAR_0->runtime->periods;


 FUNC_0(VAR_0, VAR_1);


 VAR_1->pcmbuf_head++;
 VAR_1->pcmbuf_head %= VAR_2;
}
