
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_midi_channel_set {int gs_reverb_mode; int gs_chorus_mode; } ;
struct snd_emux {struct snd_emu8000* hw; } ;
struct snd_emu8000 {int reverb_mode; int chorus_mode; } ;




 int FUNC_0 (struct snd_emu8000*) ;
 int FUNC_1 (struct snd_emu8000*) ;

__attribute__((used)) static void
FUNC_2(struct snd_emux *VAR_0, char *VAR_1, int VAR_2, int VAR_3, struct snd_midi_channel_set *VAR_4)
{
 struct snd_emu8000 *VAR_5;

 VAR_5 = VAR_0->hw;

 switch (VAR_3) {
 case 129:
  VAR_5->chorus_mode = VAR_4->gs_chorus_mode;
  FUNC_0(VAR_5);
  break;

 case 128:
  VAR_5->reverb_mode = VAR_4->gs_reverb_mode;
  FUNC_1(VAR_5);
  break;
 }
}
