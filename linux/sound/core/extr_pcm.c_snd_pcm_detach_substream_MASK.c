
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_3__* pstr; int * pid; TYPE_2__* timer; struct snd_pcm_runtime* runtime; } ;
struct TYPE_4__ {struct snd_pcm_runtime* rules; } ;
struct snd_pcm_runtime {TYPE_1__ hw_constraints; int control; int status; int (* private_free ) (struct snd_pcm_runtime*) ;} ;
struct snd_pcm_mmap_status {int dummy; } ;
struct snd_pcm_mmap_control {int dummy; } ;
struct TYPE_6__ {int substream_opened; } ;
struct TYPE_5__ {int lock; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct snd_pcm_runtime*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct snd_pcm_runtime*) ;

void FUNC_8(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1;

 if (FUNC_1(VAR_0))
  return;
 VAR_1 = VAR_0->runtime;
 if (VAR_1->private_free != ((void*)0))
  VAR_1->private_free(VAR_1);
 FUNC_2(VAR_1->status,
         FUNC_0(sizeof(struct snd_pcm_mmap_status)));
 FUNC_2(VAR_1->control,
         FUNC_0(sizeof(struct snd_pcm_mmap_control)));
 FUNC_3(VAR_1->hw_constraints.rules);

 if (VAR_0->timer)
  FUNC_5(&VAR_0->timer->lock);
 VAR_0->runtime = ((void*)0);
 if (VAR_0->timer)
  FUNC_6(&VAR_0->timer->lock);
 FUNC_3(VAR_1);
 FUNC_4(VAR_0->pid);
 VAR_0->pid = ((void*)0);
 VAR_0->pstr->substream_opened--;
}
