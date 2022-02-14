
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_seq_queue {int timeq; int tickq; TYPE_3__* timer; } ;
struct TYPE_6__ {int time; int tick; } ;
struct TYPE_8__ {int queue; int flags; TYPE_2__ time; } ;
struct snd_seq_event_cell {TYPE_4__ event; } ;
struct TYPE_5__ {int cur_tick; } ;
struct TYPE_7__ {int cur_time; TYPE_1__ tick; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (struct snd_seq_queue*) ;
 struct snd_seq_queue* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct snd_seq_queue*,int,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,struct snd_seq_event_cell*) ;

int FUNC_6(struct snd_seq_event_cell *VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;
 struct snd_seq_queue *VAR_10;

 if (FUNC_2(!VAR_5))
  return -VAR_0;
 VAR_8 = VAR_5->event.queue;
 VAR_10 = FUNC_1(VAR_8);
 if (VAR_10 == ((void*)0))
  return -VAR_0;

 if ((VAR_5->event.flags & VAR_2) == VAR_3) {
  switch (VAR_5->event.flags & VAR_4) {
  case 128:
   VAR_5->event.time.tick += VAR_10->timer->tick.cur_tick;
   break;

  case 129:
   FUNC_4(&VAR_5->event.time.time,
           &VAR_10->timer->cur_time);
   break;
  }
  VAR_5->event.flags &= ~VAR_2;
  VAR_5->event.flags |= VAR_1;
 }

 switch (VAR_5->event.flags & VAR_4) {
 case 128:
  VAR_9 = FUNC_5(VAR_10->tickq, VAR_5);
  break;

 case 129:
 default:
  VAR_9 = FUNC_5(VAR_10->timeq, VAR_5);
  break;
 }

 if (VAR_9 < 0) {
  FUNC_0(VAR_10);
  return VAR_9;
 }


 FUNC_3(VAR_10, VAR_6, VAR_7);

 FUNC_0(VAR_10);

 return 0;
}
