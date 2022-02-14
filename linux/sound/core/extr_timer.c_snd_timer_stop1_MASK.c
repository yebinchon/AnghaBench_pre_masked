
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_timer_instance {int flags; scalar_t__ pticks; int ticks; int cticks; int active_list; int ack_list; struct snd_timer* timer; } ;
struct TYPE_4__ {int (* start ) (struct snd_timer*) ;int (* stop ) (struct snd_timer*) ;} ;
struct snd_timer {int flags; int lock; TYPE_2__ hw; int running; TYPE_1__* card; } ;
struct TYPE_3__ {scalar_t__ shutdown; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_timer_instance*,int ) ;
 int FUNC_2 (struct snd_timer*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct snd_timer*) ;
 int FUNC_6 (struct snd_timer*) ;

__attribute__((used)) static int FUNC_7(struct snd_timer_instance *VAR_9, bool VAR_10)
{
 struct snd_timer *VAR_11;
 int VAR_12 = 0;
 unsigned long VAR_13;

 VAR_11 = VAR_9->timer;
 if (!VAR_11)
  return -VAR_1;
 FUNC_3(&VAR_11->lock, VAR_13);
 if (!(VAR_9->flags & (VAR_7 |
          VAR_8))) {
  VAR_12 = -VAR_0;
  goto unlock;
 }
 FUNC_0(&VAR_9->ack_list);
 FUNC_0(&VAR_9->active_list);
 if (VAR_11->card && VAR_11->card->shutdown)
  goto unlock;
 if (VAR_10) {
  VAR_9->cticks = VAR_9->ticks;
  VAR_9->pticks = 0;
 }
 if ((VAR_9->flags & VAR_7) &&
     !(--VAR_11->running)) {
  VAR_11->hw.stop(VAR_11);
  if (VAR_11->flags & VAR_5) {
   VAR_11->flags &= ~VAR_5;
   FUNC_2(VAR_11, 0);
   if (VAR_11->flags & VAR_4) {
    VAR_11->flags &= ~VAR_4;
    VAR_11->hw.start(VAR_11);
   }
  }
 }
 VAR_9->flags &= ~(VAR_7 | VAR_8);
 if (VAR_10)
  VAR_9->flags &= ~VAR_6;
 else
  VAR_9->flags |= VAR_6;
 FUNC_1(VAR_9, VAR_10 ? VAR_3 :
     VAR_2);
 unlock:
 FUNC_4(&VAR_11->lock, VAR_13);
 return VAR_12;
}
