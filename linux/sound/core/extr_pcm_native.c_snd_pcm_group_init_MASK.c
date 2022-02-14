
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_group {int refs; int substreams; int mutex; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct snd_pcm_group *VAR_0)
{
 FUNC_3(&VAR_0->lock);
 FUNC_1(&VAR_0->mutex);
 FUNC_0(&VAR_0->substreams);
 FUNC_2(&VAR_0->refs, 1);
}
