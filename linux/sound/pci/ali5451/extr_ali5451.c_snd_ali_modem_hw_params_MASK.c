
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_ali {int num_of_codecs; int * ac97; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct snd_pcm_substream*,struct snd_pcm_hw_params*) ;
 struct snd_ali* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_2,
     struct snd_pcm_hw_params *VAR_3)
{
 struct snd_ali *VAR_4 = FUNC_3(VAR_2);
 unsigned int VAR_5 = VAR_4->num_of_codecs - 1;
 FUNC_1(VAR_4->ac97[VAR_5], VAR_1,
         FUNC_0(VAR_3));
 FUNC_1(VAR_4->ac97[VAR_5], VAR_0, 0);
 return FUNC_2(VAR_2, VAR_3);
}
