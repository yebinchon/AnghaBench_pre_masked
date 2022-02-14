
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dummy; } ;
struct snd_korg1212 {int channels; } ;


 int FUNC_0 (struct snd_pcm_runtime*,unsigned long) ;
 int FUNC_1 (struct snd_korg1212*,int ,int ,int ,int) ;
 struct snd_korg1212* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0,
                           int VAR_1,
                           unsigned long VAR_2,
                           unsigned long VAR_3)
{
 struct snd_pcm_runtime *VAR_4 = VAR_0->runtime;
        struct snd_korg1212 *VAR_5 = FUNC_2(VAR_0);

 return FUNC_1(VAR_5, FUNC_0(VAR_4, VAR_2),
        FUNC_0(VAR_4, VAR_3),
        0, VAR_5->channels * 2);
}
