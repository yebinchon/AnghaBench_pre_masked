
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_trident_voice {int dummy; } ;
struct snd_trident {int dummy; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_trident_voice* private_data; } ;


 struct snd_trident* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_trident*,struct snd_trident_voice*,struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_trident *VAR_1 = FUNC_0(VAR_0);
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 struct snd_trident_voice *VAR_3 = VAR_2->private_data;

 FUNC_1(VAR_1, VAR_3, VAR_0);
 return 0;
}
