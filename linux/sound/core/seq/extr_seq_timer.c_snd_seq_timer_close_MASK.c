
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer_instance {int dummy; } ;
struct snd_seq_timer {int lock; struct snd_timer_instance* timeri; } ;
struct snd_seq_queue {struct snd_seq_timer* timer; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_timer_instance*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct snd_seq_queue *VAR_1)
{
 struct snd_seq_timer *VAR_2;
 struct snd_timer_instance *VAR_3;

 VAR_2 = VAR_1->timer;
 if (FUNC_0(!VAR_2))
  return -VAR_0;
 FUNC_2(&VAR_2->lock);
 VAR_3 = VAR_2->timeri;
 VAR_2->timeri = ((void*)0);
 FUNC_3(&VAR_2->lock);
 if (VAR_3)
  FUNC_1(VAR_3);
 return 0;
}
