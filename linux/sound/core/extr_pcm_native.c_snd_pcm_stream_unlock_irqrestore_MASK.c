
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; int mutex; } ;
struct snd_pcm_substream {TYPE_2__ self_group; TYPE_1__* pcm; } ;
struct TYPE_3__ {scalar_t__ nonatomic; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;

void FUNC_2(struct snd_pcm_substream *VAR_0,
          unsigned long VAR_1)
{
 if (VAR_0->pcm->nonatomic)
  FUNC_0(&VAR_0->self_group.mutex);
 else
  FUNC_1(&VAR_0->self_group.lock, VAR_1);
}
