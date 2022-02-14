
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct snd_emux_voice {scalar_t__ state; scalar_t__ ontime; } ;
struct TYPE_2__ {int (* release ) (struct snd_emux_voice*) ;} ;
struct snd_emux {int max_voices; int timer_active; int voice_lock; int tlist; TYPE_1__ ops; struct snd_emux_voice* voices; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct snd_emux* VAR_2 ;
 struct snd_emux* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct snd_emux_voice*) ;
 int VAR_4 ;

void FUNC_5(struct timer_list *VAR_5)
{
 struct snd_emux *VAR_6 = FUNC_0(VAR_6, VAR_5, VAR_4);
 struct snd_emux_voice *VAR_7;
 unsigned long VAR_8;
 int VAR_9, VAR_10 = 0;

 FUNC_2(&VAR_6->voice_lock, VAR_8);
 for (VAR_9 = 0; VAR_9 < VAR_6->max_voices; VAR_9++) {
  VAR_7 = &VAR_6->voices[VAR_9];
  if (VAR_7->state == VAR_0) {
   if (VAR_7->ontime == VAR_3)
    VAR_10++;
   else {
    VAR_6->ops.release(VAR_7);
    VAR_7->state = VAR_1;
   }
  }
 }
 if (VAR_10) {
  FUNC_1(&VAR_6->tlist, VAR_3 + 1);
  VAR_6->timer_active = 1;
 } else
  VAR_6->timer_active = 0;
 FUNC_3(&VAR_6->voice_lock, VAR_8);
}
