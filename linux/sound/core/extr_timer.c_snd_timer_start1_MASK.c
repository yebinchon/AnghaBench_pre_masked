
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_timer_instance {int flags; unsigned long ticks; unsigned long cticks; int active_list; scalar_t__ pticks; struct snd_timer* timer; } ;
struct TYPE_4__ {int flags; int (* start ) (struct snd_timer*) ;} ;
struct snd_timer {unsigned long sticks; int lock; scalar_t__ running; TYPE_2__ hw; int flags; int active_list_head; TYPE_1__* card; } ;
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
 int VAR_9 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct snd_timer_instance*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct snd_timer*) ;

__attribute__((used)) static int FUNC_5(struct snd_timer_instance *VAR_10,
       bool VAR_11, unsigned long VAR_12)
{
 struct snd_timer *VAR_13;
 int VAR_14;
 unsigned long VAR_15;

 VAR_13 = VAR_10->timer;
 if (!VAR_13)
  return -VAR_1;

 FUNC_2(&VAR_13->lock, VAR_15);
 if (VAR_10->flags & VAR_7) {
  VAR_14 = -VAR_1;
  goto unlock;
 }
 if (VAR_13->card && VAR_13->card->shutdown) {
  VAR_14 = -VAR_2;
  goto unlock;
 }
 if (VAR_10->flags & (VAR_8 |
        VAR_9)) {
  VAR_14 = -VAR_0;
  goto unlock;
 }

 if (VAR_11)
  VAR_10->ticks = VAR_10->cticks = VAR_12;
 else if (!VAR_10->cticks)
  VAR_10->cticks = 1;
 VAR_10->pticks = 0;

 FUNC_0(&VAR_10->active_list, &VAR_13->active_list_head);
 if (VAR_13->running) {
  if (VAR_13->hw.flags & VAR_6)
   goto __start_now;
  VAR_13->flags |= VAR_5;
  VAR_10->flags |= VAR_9;
  VAR_14 = 1;
 } else {
  if (VAR_11)
   VAR_13->sticks = VAR_12;
  VAR_13->hw.start(VAR_13);
       __start_now:
  VAR_13->running++;
  VAR_10->flags |= VAR_8;
  VAR_14 = 0;
 }
 FUNC_1(VAR_10, VAR_11 ? VAR_4 :
     VAR_3);
 unlock:
 FUNC_3(&VAR_13->lock, VAR_15);
 return VAR_14;
}
