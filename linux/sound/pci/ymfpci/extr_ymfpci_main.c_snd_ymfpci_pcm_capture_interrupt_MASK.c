
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_ymfpci_pcm {size_t capture_bank_number; int shift; int last_pos; int buffer_size; int period_pos; int period_size; scalar_t__ running; struct snd_ymfpci* chip; } ;
struct snd_ymfpci {size_t active_bank; int reg_lock; TYPE_1__*** bank_capture; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_ymfpci_pcm* private_data; } ;
struct TYPE_2__ {int start; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct snd_ymfpci_pcm *VAR_2 = VAR_1->private_data;
 struct snd_ymfpci *VAR_3 = VAR_2->chip;
 u32 VAR_4, VAR_5;

 FUNC_2(&VAR_3->reg_lock);
 if (VAR_2->running) {
  VAR_4 = FUNC_0(VAR_3->bank_capture[VAR_2->capture_bank_number][VAR_3->active_bank]->start) >> VAR_2->shift;
  if (VAR_4 < VAR_2->last_pos)
   VAR_5 = VAR_4 + (VAR_2->buffer_size - VAR_2->last_pos);
  else
   VAR_5 = VAR_4 - VAR_2->last_pos;
  VAR_2->period_pos += VAR_5;
  VAR_2->last_pos = VAR_4;
  if (VAR_2->period_pos >= VAR_2->period_size) {
   VAR_2->period_pos %= VAR_2->period_size;






   FUNC_3(&VAR_3->reg_lock);
   FUNC_1(VAR_0);
   FUNC_2(&VAR_3->reg_lock);
  }
 }
 FUNC_3(&VAR_3->reg_lock);
}
