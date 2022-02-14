
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
typedef int snd_pcm_uframes_t ;
typedef scalar_t__ snd_pcm_sframes_t ;


 scalar_t__ FUNC_0 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_1 (struct snd_pcm_substream*,int ,int ) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_sframes_t FUNC_5(struct snd_pcm_substream *VAR_0,
      snd_pcm_uframes_t VAR_1)
{
 snd_pcm_sframes_t VAR_2;

 if (VAR_1 == 0)
  return 0;

 FUNC_3(VAR_0);
 VAR_2 = FUNC_0(VAR_0);
 if (!VAR_2)
  VAR_2 = FUNC_1(VAR_0, VAR_1,
           FUNC_2(VAR_0));
 FUNC_4(VAR_0);
 return VAR_2;
}
