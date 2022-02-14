
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_spdif_dev {int dummy; } ;
struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sun4i_spdif_dev* FUNC_0 (int ) ;
 int FUNC_1 (struct sun4i_spdif_dev*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_2,
          struct snd_soc_dai *VAR_3)
{
 struct snd_soc_pcm_runtime *VAR_4 = VAR_2->private_data;
 struct sun4i_spdif_dev *VAR_5 = FUNC_0(VAR_4->cpu_dai);

 if (VAR_2->stream != VAR_1)
  return -VAR_0;

 FUNC_1(VAR_5);

 return 0;
}
