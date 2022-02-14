
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int FUNC_0 (struct snd_pcm_substream*,struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_substream*,struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0,
     struct snd_pcm_hw_params *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 >= 0)
  VAR_2 = FUNC_0(VAR_0, VAR_1);
 return VAR_2;
}
