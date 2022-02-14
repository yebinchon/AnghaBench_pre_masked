
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_emux_voice {int ch; int state; TYPE_1__* emu; } ;
struct snd_emux {struct snd_emux_voice* voices; } ;
struct snd_emu10k1 {struct snd_emux* synth; } ;
struct best_voice {size_t voice; } ;
struct TYPE_2__ {int num_voices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_emux*,struct snd_emu10k1*,struct best_voice*,int) ;

int
FUNC_1(struct snd_emu10k1 *VAR_3)
{
 struct snd_emux *VAR_4;
 struct snd_emux_voice *VAR_5;
 struct best_voice VAR_6[VAR_2];
 int VAR_7;

 VAR_4 = VAR_3->synth;

 FUNC_0(VAR_4, VAR_3, VAR_6, 1);
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if (VAR_6[VAR_7].voice >= 0) {
   int VAR_8;
   VAR_5 = &VAR_4->voices[VAR_6[VAR_7].voice];
   if ((VAR_8 = VAR_5->ch) < 0) {




    continue;
   }
   VAR_5->emu->num_voices--;
   VAR_5->ch = -1;
   VAR_5->state = VAR_1;
   return VAR_8;
  }
 }


 return -VAR_0;
}
