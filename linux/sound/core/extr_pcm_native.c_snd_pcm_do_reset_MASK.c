
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* ops; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw_ptr_interrupt; int period_size; int silence_start; scalar_t__ silence_filled; TYPE_1__* status; scalar_t__ hw_ptr_base; } ;
struct TYPE_4__ {int (* ioctl ) (struct snd_pcm_substream*,int ,int *) ;} ;
struct TYPE_3__ {int hw_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 int VAR_4 = VAR_1->ops->ioctl(VAR_1, VAR_0, ((void*)0));
 if (VAR_4 < 0)
  return VAR_4;
 VAR_3->hw_ptr_base = 0;
 VAR_3->hw_ptr_interrupt = VAR_3->status->hw_ptr -
  VAR_3->status->hw_ptr % VAR_3->period_size;
 VAR_3->silence_start = VAR_3->status->hw_ptr;
 VAR_3->silence_filled = 0;
 return 0;
}
