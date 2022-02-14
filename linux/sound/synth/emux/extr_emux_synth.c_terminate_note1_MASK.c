
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_midi_channel {int dummy; } ;
struct snd_emux_voice {int key; struct snd_midi_channel* chan; int state; } ;
struct snd_emux {int max_voices; int voice_lock; struct snd_emux_voice* voices; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct snd_emux*,struct snd_emux_voice*,int) ;

__attribute__((used)) static void
FUNC_4(struct snd_emux *VAR_0, int VAR_1, struct snd_midi_channel *VAR_2, int VAR_3)
{
 int VAR_4;
 struct snd_emux_voice *VAR_5;
 unsigned long VAR_6;

 FUNC_1(&VAR_0->voice_lock, VAR_6);
 for (VAR_4 = 0; VAR_4 < VAR_0->max_voices; VAR_4++) {
  VAR_5 = &VAR_0->voices[VAR_4];
  if (FUNC_0(VAR_5->state) && VAR_5->chan == VAR_2 &&
      VAR_5->key == VAR_1)
   FUNC_3(VAR_0, VAR_5, VAR_3);
 }
 FUNC_2(&VAR_0->voice_lock, VAR_6);
}
