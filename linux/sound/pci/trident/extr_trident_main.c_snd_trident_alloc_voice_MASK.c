
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_trident_voice {int use; int pcm; int synth; int client; int port; int * memblk; int * substream; scalar_t__ spdif; scalar_t__ capture; } ;
struct TYPE_2__ {struct snd_trident_voice* voices; } ;
struct snd_trident {int voice_alloc; TYPE_1__ synth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_trident*) ;
 int FUNC_1 (struct snd_trident*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

struct snd_trident_voice *FUNC_4(struct snd_trident * VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 struct snd_trident_voice *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 FUNC_2(&VAR_3->voice_alloc, VAR_8);
 if (VAR_4 == VAR_1) {
  VAR_9 = FUNC_0(VAR_3);
  if(VAR_9 < 0) {
   FUNC_3(&VAR_3->voice_alloc, VAR_8);
   return ((void*)0);
  }
  VAR_7 = &VAR_3->synth.voices[VAR_9];
  VAR_7->use = 1;
  VAR_7->pcm = 1;
  VAR_7->capture = 0;
  VAR_7->spdif = 0;
  VAR_7->memblk = ((void*)0);
  VAR_7->substream = ((void*)0);
  FUNC_3(&VAR_3->voice_alloc, VAR_8);
  return VAR_7;
 }
 if (VAR_4 == VAR_2) {
  VAR_9 = FUNC_1(VAR_3);
  if(VAR_9 < 0) {
   FUNC_3(&VAR_3->voice_alloc, VAR_8);
   return ((void*)0);
  }
  VAR_7 = &VAR_3->synth.voices[VAR_9];
  VAR_7->use = 1;
  VAR_7->synth = 1;
  VAR_7->client = VAR_5;
  VAR_7->port = VAR_6;
  VAR_7->memblk = ((void*)0);
  FUNC_3(&VAR_3->voice_alloc, VAR_8);
  return VAR_7;
 }
 if (VAR_4 == VAR_0) {
 }
 FUNC_3(&VAR_3->voice_alloc, VAR_8);
 return ((void*)0);
}
