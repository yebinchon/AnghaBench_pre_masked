
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_trident_voice {int dummy; } ;
struct snd_trident_pcm_mixer {int * voice; } ;
struct snd_trident {struct snd_trident_pcm_mixer* pcm_mixer; } ;
struct snd_pcm_substream {size_t number; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_trident*,struct snd_trident_pcm_mixer*,size_t,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_trident *VAR_1, struct snd_trident_voice *VAR_2, struct snd_pcm_substream *VAR_3)
{
 struct snd_trident_pcm_mixer *VAR_4;

 if (FUNC_0(!VAR_1 || !VAR_3))
  return -VAR_0;
 VAR_4 = &VAR_1->pcm_mixer[VAR_3->number];
 VAR_4->voice = ((void*)0);
 FUNC_1(VAR_1, VAR_4, VAR_3->number, 0);
 return 0;
}
