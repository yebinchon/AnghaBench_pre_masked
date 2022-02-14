
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_substream* next; } ;
struct snd_pcm {TYPE_1__* streams; } ;
struct TYPE_2__ {struct snd_pcm_substream* substream; } ;


 int FUNC_0 (struct snd_pcm_substream*) ;

void FUNC_1(struct snd_pcm *VAR_0)
{
 struct snd_pcm_substream *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 2; VAR_2++)
  for (VAR_1 = VAR_0->streams[VAR_2].substream; VAR_1; VAR_1 = VAR_1->next)
   FUNC_0(VAR_1);
}
