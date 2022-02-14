
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_trident_voice {int * memblk; } ;
struct TYPE_2__ {scalar_t__ entries; } ;
struct snd_trident {TYPE_1__ tlb; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_trident_voice* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_substream*,int ) ;
 struct snd_trident* FUNC_2 (struct snd_pcm_substream*) ;
 int * FUNC_3 (struct snd_trident*,struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_trident*,int *) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_1,
     struct snd_pcm_hw_params *VAR_2)
{
 struct snd_trident *VAR_3 = FUNC_2(VAR_1);
 struct snd_pcm_runtime *VAR_4 = VAR_1->runtime;
 struct snd_trident_voice *VAR_5 = VAR_4->private_data;
 int VAR_6;

 if ((VAR_6 = FUNC_1(VAR_1, FUNC_0(VAR_2))) < 0)
  return VAR_6;
 if (VAR_3->tlb.entries) {
  if (VAR_6 > 0) {
   if (VAR_5->memblk)
    FUNC_4(VAR_3, VAR_5->memblk);
   VAR_5->memblk = FUNC_3(VAR_3, VAR_1);
   if (VAR_5->memblk == ((void*)0))
    return -VAR_0;
  }
 }
 return 0;
}
