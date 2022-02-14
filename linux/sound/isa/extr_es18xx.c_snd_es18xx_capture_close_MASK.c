
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_es18xx {int * capture_a_substream; } ;


 int FUNC_0 (struct snd_pcm_substream*) ;
 struct snd_es18xx* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
        struct snd_es18xx *VAR_1 = FUNC_1(VAR_0);

        VAR_1->capture_a_substream = ((void*)0);
 FUNC_0(VAR_0);
        return 0;
}
