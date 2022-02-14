
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emux_voice {int ch; int hw; struct snd_emux* emu; scalar_t__ time; int * port; int * chan; int state; } ;
struct snd_emux {int max_voices; int voice_lock; int hw; struct snd_emux_voice* voices; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void
FUNC_2(struct snd_emux *VAR_1)
{
 struct snd_emux_voice *VAR_2;
 int VAR_3;
 unsigned long VAR_4;

 FUNC_0(&VAR_1->voice_lock, VAR_4);
 for (VAR_3 = 0; VAR_3 < VAR_1->max_voices; VAR_3++) {
  VAR_2 = &VAR_1->voices[VAR_3];
  VAR_2->ch = -1;
  VAR_2->state = VAR_0;
  VAR_2->chan = ((void*)0);
  VAR_2->port = ((void*)0);
  VAR_2->time = 0;
  VAR_2->emu = VAR_1;
  VAR_2->hw = VAR_1->hw;
 }
 FUNC_1(&VAR_1->voice_lock, VAR_4);
}
