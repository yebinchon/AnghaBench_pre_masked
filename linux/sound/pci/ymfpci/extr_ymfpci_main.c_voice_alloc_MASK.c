
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ymfpci_voice {int use; int pcm; int synth; int midi; } ;
struct snd_ymfpci {struct snd_ymfpci_voice* voices; } ;
typedef enum snd_ymfpci_voice_type { ____Placeholder_snd_ymfpci_voice_type } snd_ymfpci_voice_type ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct snd_ymfpci*) ;

__attribute__((used)) static int FUNC_1(struct snd_ymfpci *VAR_2,
         enum snd_ymfpci_voice_type VAR_3, int VAR_4,
         struct snd_ymfpci_voice **VAR_5)
{
 struct snd_ymfpci_voice *VAR_6, *VAR_7;
 int VAR_8;

 *VAR_5 = ((void*)0);
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8 += VAR_4 ? 2 : 1) {
  VAR_6 = &VAR_2->voices[VAR_8];
  VAR_7 = VAR_4 ? &VAR_2->voices[VAR_8+1] : ((void*)0);
  if (VAR_6->use || (VAR_7 && VAR_7->use))
   continue;
  VAR_6->use = 1;
  if (VAR_7)
   VAR_7->use = 1;
  switch (VAR_3) {
  case 129:
   VAR_6->pcm = 1;
   if (VAR_7)
    VAR_7->pcm = 1;
   break;
  case 128:
   VAR_6->synth = 1;
   break;
  case 130:
   VAR_6->midi = 1;
   break;
  }
  FUNC_0(VAR_2);
  if (VAR_7)
   FUNC_0(VAR_2);
  *VAR_5 = VAR_6;
  return 0;
 }
 return -VAR_0;
}
