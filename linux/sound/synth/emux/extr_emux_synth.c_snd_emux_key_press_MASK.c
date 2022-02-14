
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_midi_channel {int dummy; } ;
struct snd_emux_voice {scalar_t__ state; int key; int velocity; struct snd_midi_channel* chan; } ;
struct snd_emux_port {struct snd_emux* emu; } ;
struct TYPE_2__ {int update; } ;
struct snd_emux {int max_voices; int voice_lock; struct snd_emux_voice* voices; TYPE_1__ ops; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct snd_emux*,struct snd_emux_voice*,int ) ;

void
FUNC_4(void *VAR_2, int VAR_3, int VAR_4, struct snd_midi_channel *VAR_5)
{
 int VAR_6;
 struct snd_emux *VAR_7;
 struct snd_emux_voice *VAR_8;
 unsigned long VAR_9;
 struct snd_emux_port *VAR_10;

 VAR_10 = VAR_2;
 if (FUNC_0(!VAR_10 || !VAR_5))
  return;

 VAR_7 = VAR_10->emu;
 if (FUNC_0(!VAR_7 || !VAR_7->ops.update))
  return;

 FUNC_1(&VAR_7->voice_lock, VAR_9);
 for (VAR_6 = 0; VAR_6 < VAR_7->max_voices; VAR_6++) {
  VAR_8 = &VAR_7->voices[VAR_6];
  if (VAR_8->state == VAR_0 &&
      VAR_8->chan == VAR_5 && VAR_8->key == VAR_3) {
   VAR_8->velocity = VAR_4;
   FUNC_3(VAR_7, VAR_8, VAR_1);
  }
 }
 FUNC_2(&VAR_7->voice_lock, VAR_9);
}
