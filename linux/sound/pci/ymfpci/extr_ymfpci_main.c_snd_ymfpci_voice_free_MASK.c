
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ymfpci_voice {int number; int * interrupt; TYPE_1__* ypcm; scalar_t__ midi; scalar_t__ synth; scalar_t__ pcm; scalar_t__ use; } ;
struct snd_ymfpci {int src441_used; int voice_lock; } ;
struct TYPE_2__ {scalar_t__ use_441_slot; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_ymfpci*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_ymfpci *VAR_1, struct snd_ymfpci_voice *VAR_2)
{
 unsigned long VAR_3;

 if (FUNC_0(!VAR_2))
  return -VAR_0;
 FUNC_1(VAR_1);
 FUNC_2(&VAR_1->voice_lock, VAR_3);
 if (VAR_2->number == VAR_1->src441_used) {
  VAR_1->src441_used = -1;
  VAR_2->ypcm->use_441_slot = 0;
 }
 VAR_2->use = VAR_2->pcm = VAR_2->synth = VAR_2->midi = 0;
 VAR_2->ypcm = ((void*)0);
 VAR_2->interrupt = ((void*)0);
 FUNC_3(&VAR_1->voice_lock, VAR_3);
 return 0;
}
