
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1_voice {int use; int pcm; int synth; int midi; int efx; } ;
struct snd_emu10k1 {int next_free_voice; struct snd_emu10k1_voice* voices; } ;






 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct snd_emu10k1 *VAR_2, int VAR_3, int VAR_4,
         struct snd_emu10k1_voice **VAR_5)
{
 struct snd_emu10k1_voice *VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

 *VAR_5 = ((void*)0);
 VAR_10 = VAR_11 = 0;
 for (VAR_7 = VAR_2->next_free_voice, VAR_8 = 0; VAR_8 < VAR_1 ; VAR_7 += VAR_4, VAR_8 += VAR_4) {




  VAR_7 %= VAR_1;


  if ((VAR_4 == 2) && (VAR_7 % 2)) {
   VAR_7++;
   continue;
  }

  VAR_12 = 0;
  for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
   VAR_6 = &VAR_2->voices[(VAR_7+VAR_9) % VAR_1];
   if (VAR_6->use) {
    VAR_12 = 1;
    break;
   }
  }
  if (!VAR_12) {

   VAR_10 = VAR_7;
   VAR_11 = (VAR_7 + VAR_4) % VAR_1;
   VAR_2->next_free_voice = VAR_11;
   break;
  }
 }

 if (VAR_10 == VAR_11)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_6 = &VAR_2->voices[(VAR_10 + VAR_7) % VAR_1];




  VAR_6->use = 1;
  switch (VAR_3) {
  case 129:
   VAR_6->pcm = 1;
   break;
  case 128:
   VAR_6->synth = 1;
   break;
  case 130:
   VAR_6->midi = 1;
   break;
  case 131:
   VAR_6->efx = 1;
   break;
  }
 }
 *VAR_5 = &VAR_2->voices[VAR_10];
 return 0;
}
