
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_seq_queue {int check_blocked; int check_again; int check_lock; TYPE_2__* timer; int timeq; int tickq; } ;
struct snd_seq_event_cell {int dummy; } ;
struct TYPE_3__ {int cur_tick; } ;
struct TYPE_4__ {int cur_time; TYPE_1__ tick; } ;


 int FUNC_0 (struct snd_seq_event_cell*,int,int) ;
 struct snd_seq_event_cell* FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct snd_seq_queue *VAR_0, int VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 struct snd_seq_event_cell *VAR_4;

 if (VAR_0 == ((void*)0))
  return;


 FUNC_2(&VAR_0->check_lock, VAR_3);
 if (VAR_0->check_blocked) {
  VAR_0->check_again = 1;
  FUNC_3(&VAR_0->check_lock, VAR_3);
  return;
 }
 VAR_0->check_blocked = 1;
 FUNC_3(&VAR_0->check_lock, VAR_3);

      __again:

 for (;;) {
  VAR_4 = FUNC_1(VAR_0->tickq,
           &VAR_0->timer->tick.cur_tick);
  if (!VAR_4)
   break;
  FUNC_0(VAR_4, VAR_1, VAR_2);
 }


 for (;;) {
  VAR_4 = FUNC_1(VAR_0->timeq, &VAR_0->timer->cur_time);
  if (!VAR_4)
   break;
  FUNC_0(VAR_4, VAR_1, VAR_2);
 }


 FUNC_2(&VAR_0->check_lock, VAR_3);
 if (VAR_0->check_again) {
  VAR_0->check_again = 0;
  FUNC_3(&VAR_0->check_lock, VAR_3);
  goto __again;
 }
 VAR_0->check_blocked = 0;
 FUNC_3(&VAR_0->check_lock, VAR_3);
}
