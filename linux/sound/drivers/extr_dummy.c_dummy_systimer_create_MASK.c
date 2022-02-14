
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct dummy_systimer_pcm {struct snd_pcm_substream* substream; int lock; int timer; } ;
struct TYPE_2__ {struct dummy_systimer_pcm* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dummy_systimer_pcm* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_3)
{
 struct dummy_systimer_pcm *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;
 VAR_3->runtime->private_data = VAR_4;
 FUNC_2(&VAR_4->timer, VAR_2, 0);
 FUNC_1(&VAR_4->lock);
 VAR_4->substream = VAR_3;
 return 0;
}
