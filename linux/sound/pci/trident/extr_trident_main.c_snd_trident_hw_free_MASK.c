
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_trident_voice {struct snd_trident_voice* extra; int * memblk; } ;
struct TYPE_2__ {scalar_t__ entries; } ;
struct snd_trident {TYPE_1__ tlb; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_trident_voice* private_data; } ;


 int FUNC_0 (struct snd_pcm_substream*) ;
 struct snd_trident* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_trident*,int *) ;
 int FUNC_3 (struct snd_trident*,struct snd_trident_voice*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct snd_trident *VAR_1 = FUNC_1(VAR_0);
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 struct snd_trident_voice *VAR_3 = VAR_2->private_data;
 struct snd_trident_voice *VAR_4 = VAR_3 ? VAR_3->extra : ((void*)0);

 if (VAR_1->tlb.entries) {
  if (VAR_3 && VAR_3->memblk) {
   FUNC_2(VAR_1, VAR_3->memblk);
   VAR_3->memblk = ((void*)0);
  }
 }
 FUNC_0(VAR_0);
 if (VAR_4 != ((void*)0)) {
  FUNC_3(VAR_1, VAR_4);
  VAR_3->extra = ((void*)0);
 }
 return 0;
}
