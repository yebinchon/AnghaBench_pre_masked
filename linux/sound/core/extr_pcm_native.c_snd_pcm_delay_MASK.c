
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
typedef int snd_pcm_sframes_t ;


 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0,
    snd_pcm_sframes_t *VAR_1)
{
 int VAR_2;
 snd_pcm_sframes_t VAR_3 = 0;

 FUNC_2(VAR_0);
 VAR_2 = FUNC_0(VAR_0);
 if (!VAR_2)
  VAR_3 = FUNC_1(VAR_0);
 FUNC_3(VAR_0);
 if (!VAR_2)
  *VAR_1 = VAR_3;
 return VAR_2;
}
