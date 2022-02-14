
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct snd_emu8k_pcm {int last_ptr; int buf_size; int period_pos; int period_size; int timer_lock; int substream; int timer; } ;


 int FUNC_0 (struct snd_emu8k_pcm*,int ) ;
 struct snd_emu8k_pcm* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,scalar_t__) ;
 struct snd_emu8k_pcm* VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_3)
{
 struct snd_emu8k_pcm *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_2);
 int VAR_5, VAR_6;

 FUNC_4(&VAR_4->timer_lock);

 VAR_5 = FUNC_0(VAR_4, 0);
 if (VAR_5 < VAR_4->last_ptr)
  VAR_6 = VAR_5 + VAR_4->buf_size - VAR_4->last_ptr;
 else
  VAR_6 = VAR_5 - VAR_4->last_ptr;
 VAR_4->period_pos += VAR_6;
 VAR_4->last_ptr = VAR_5;


 FUNC_2(&VAR_4->timer, VAR_0 + 1);


 if (VAR_4->period_pos >= (int)VAR_4->period_size) {
  VAR_4->period_pos %= VAR_4->period_size;
  FUNC_5(&VAR_4->timer_lock);
  FUNC_3(VAR_4->substream);
  return;
 }
 FUNC_5(&VAR_4->timer_lock);
}
