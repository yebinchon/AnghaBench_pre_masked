
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct dummy_systimer_pcm {int frac_pos; int lock; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {struct dummy_systimer_pcm* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct dummy_systimer_pcm*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_3(struct snd_pcm_substream *VAR_1)
{
 struct dummy_systimer_pcm *VAR_2 = VAR_1->runtime->private_data;
 snd_pcm_uframes_t VAR_3;

 FUNC_1(&VAR_2->lock);
 FUNC_0(VAR_2);
 VAR_3 = VAR_2->frac_pos / VAR_0;
 FUNC_2(&VAR_2->lock);
 return VAR_3;
}
