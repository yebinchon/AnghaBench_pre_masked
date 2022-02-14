
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer_user {int qused; int qtail; int queue_size; int qchange_sleep; int fasync; int qlock; struct snd_timer_read* queue; int overrun; } ;
struct snd_timer_read {unsigned long resolution; unsigned long ticks; } ;
struct snd_timer_instance {struct snd_timer_user* callback_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct snd_timer_instance *VAR_2,
         unsigned long VAR_3,
         unsigned long VAR_4)
{
 struct snd_timer_user *VAR_5 = VAR_2->callback_data;
 struct snd_timer_read *VAR_6;
 int VAR_7;

 FUNC_1(&VAR_5->qlock);
 if (VAR_5->qused > 0) {
  VAR_7 = VAR_5->qtail == 0 ? VAR_5->queue_size - 1 : VAR_5->qtail - 1;
  VAR_6 = &VAR_5->queue[VAR_7];
  if (VAR_6->resolution == VAR_3) {
   VAR_6->ticks += VAR_4;
   goto __wake;
  }
 }
 if (VAR_5->qused >= VAR_5->queue_size) {
  VAR_5->overrun++;
 } else {
  VAR_6 = &VAR_5->queue[VAR_5->qtail++];
  VAR_5->qtail %= VAR_5->queue_size;
  VAR_6->resolution = VAR_3;
  VAR_6->ticks = VAR_4;
  VAR_5->qused++;
 }
      __wake:
 FUNC_2(&VAR_5->qlock);
 FUNC_0(&VAR_5->fasync, VAR_1, VAR_0);
 FUNC_3(&VAR_5->qchange_sleep);
}
