
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int cpu_dai; TYPE_1__* card; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_4,
       struct snd_pcm_hw_params *VAR_5)
{
 struct snd_soc_pcm_runtime *VAR_6 = VAR_4->private_data;
 struct device *VAR_7 = VAR_6->card->dev;
 bool VAR_8 = VAR_4->stream == VAR_0;
 unsigned int VAR_9 = VAR_2 | VAR_3;
 int VAR_10;

 if (!VAR_8)
  return 0;


 VAR_9 |= VAR_1;


 VAR_10 = FUNC_1(VAR_6->cpu_dai, VAR_9);
 if (VAR_10)
  FUNC_0(VAR_7, "failed to set AUDMIX DAI fmt: %d\n", VAR_10);

 return VAR_10;
}
