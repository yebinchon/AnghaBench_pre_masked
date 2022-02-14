
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_midi_channel {int dummy; } ;
struct snd_emux_voice {int key; scalar_t__ ontime; int state; struct snd_midi_channel* chan; } ;
struct snd_emux_port {struct snd_emux* emu; } ;
struct TYPE_2__ {int (* release ) (struct snd_emux_voice*) ;} ;
struct snd_emux {int max_voices; int timer_active; int voice_lock; TYPE_1__ ops; int tlist; struct snd_emux_voice* voices; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct snd_emux_voice*) ;

void
FUNC_6(void *VAR_3, int VAR_4, int VAR_5, struct snd_midi_channel *VAR_6)
{
 int VAR_7;
 struct snd_emux *VAR_8;
 struct snd_emux_voice *VAR_9;
 unsigned long VAR_10;
 struct snd_emux_port *VAR_11;

 VAR_11 = VAR_3;
 if (FUNC_2(!VAR_11 || !VAR_6))
  return;

 VAR_8 = VAR_11->emu;
 if (FUNC_2(!VAR_8 || !VAR_8->ops.release))
  return;

 FUNC_3(&VAR_8->voice_lock, VAR_10);
 for (VAR_7 = 0; VAR_7 < VAR_8->max_voices; VAR_7++) {
  VAR_9 = &VAR_8->voices[VAR_7];
  if (FUNC_0(VAR_9->state) &&
      VAR_9->chan == VAR_6 && VAR_9->key == VAR_4) {
   VAR_9->state = VAR_1;
   if (VAR_9->ontime == VAR_2) {





    VAR_9->state = VAR_0;
    if (! VAR_8->timer_active) {
     FUNC_1(&VAR_8->tlist, VAR_2 + 1);
     VAR_8->timer_active = 1;
    }
   } else

    VAR_8->ops.release(VAR_9);
  }
 }
 FUNC_4(&VAR_8->voice_lock, VAR_10);
}
