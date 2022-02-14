
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int timer; scalar_t__ timer_running; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int fasync; } ;


 scalar_t__ FUNC_0 (struct snd_pcm_substream*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_pcm_substream*,unsigned long) ;
 int FUNC_4 (struct snd_pcm_substream*,unsigned long) ;
 scalar_t__ FUNC_5 (struct snd_pcm_substream*,int) ;
 int FUNC_6 (int ,int) ;

void FUNC_7(struct snd_pcm_substream *VAR_2)
{
 struct snd_pcm_runtime *VAR_3;
 unsigned long VAR_4;

 if (FUNC_0(VAR_2))
  return;
 VAR_3 = VAR_2->runtime;

 FUNC_3(VAR_2, VAR_4);
 if (!FUNC_2(VAR_2) ||
     FUNC_5(VAR_2, 1) < 0)
  goto _end;





 _end:
 FUNC_1(&VAR_3->fasync, VAR_1, VAR_0);
 FUNC_4(VAR_2, VAR_4);
}
