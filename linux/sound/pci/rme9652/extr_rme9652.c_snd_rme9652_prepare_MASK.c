
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rme9652 {int lock; int running; } ;
struct snd_pcm_substream {int dummy; } ;


 int FUNC_0 (struct snd_rme9652*) ;
 struct snd_rme9652* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct snd_rme9652 *VAR_1 = FUNC_1(VAR_0);
 unsigned long VAR_2;

 FUNC_2(&VAR_1->lock, VAR_2);
 if (!VAR_1->running)
  FUNC_0(VAR_1);
 FUNC_3(&VAR_1->lock, VAR_2);
 return 0;
}
