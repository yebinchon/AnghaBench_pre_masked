
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_emux_voice {scalar_t__ state; scalar_t__ time; } ;
struct TYPE_2__ {int (* reset ) (struct snd_emux*,int) ;int (* free_voice ) (struct snd_emux_voice*) ;} ;
struct snd_emux {int max_voices; int voice_lock; scalar_t__ use_time; TYPE_1__ ops; struct snd_emux_voice* voices; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct snd_emux_voice*) ;
 int FUNC_4 (struct snd_emux*,int) ;
 int FUNC_5 (struct snd_emux*,struct snd_emux_voice*,int ) ;

void
FUNC_6(struct snd_emux *VAR_1)
{
 int VAR_2;
 struct snd_emux_voice *VAR_3;
 unsigned long VAR_4;

 FUNC_1(&VAR_1->voice_lock, VAR_4);
 for (VAR_2 = 0; VAR_2 < VAR_1->max_voices; VAR_2++) {
  VAR_3 = &VAR_1->voices[VAR_2];
  if (FUNC_0(VAR_3->state))
   FUNC_5(VAR_1, VAR_3, 0);
  if (VAR_3->state == VAR_0) {
   if (VAR_1->ops.free_voice)
    VAR_1->ops.free_voice(VAR_3);
   if (VAR_1->ops.reset)
    VAR_1->ops.reset(VAR_1, VAR_2);
  }
  VAR_3->time = 0;
 }

 VAR_1->use_time = 0;
 FUNC_2(&VAR_1->voice_lock, VAR_4);
}
