
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int rmask; scalar_t__ rate_den; scalar_t__ rate_num; scalar_t__ msbits; scalar_t__ fifo_size; scalar_t__ info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_pcm_substream*,struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_substream*,struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_substream*,struct snd_pcm_hw_params*) ;

int FUNC_3(struct snd_pcm_substream *VAR_2,
        struct snd_pcm_hw_params *VAR_3)
{
 int VAR_4;

 VAR_3->info = 0;
 VAR_3->fifo_size = 0;
 if (VAR_3->rmask & (1 << VAR_1))
  VAR_3->msbits = 0;
 if (VAR_3->rmask & (1 << VAR_0)) {
  VAR_3->rate_num = 0;
  VAR_3->rate_den = 0;
 }

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3->rmask = 0;

 return 0;
}
