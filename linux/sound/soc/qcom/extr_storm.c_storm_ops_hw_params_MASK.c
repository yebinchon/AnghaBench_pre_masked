
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int cpu_dai; struct snd_soc_card* card; } ;
struct snd_soc_card {int dev; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
typedef int snd_pcm_format_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,...) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_1,
  struct snd_pcm_hw_params *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_1->private_data;
 struct snd_soc_card *VAR_4 = VAR_3->card;
 snd_pcm_format_t VAR_5 = FUNC_1(VAR_2);
 unsigned int VAR_6 = FUNC_2(VAR_2);
 unsigned int VAR_7;
 int VAR_8, VAR_9;

 VAR_8 = FUNC_3(VAR_5);
 if (VAR_8 < 0) {
  FUNC_0(VAR_4->dev, "invalid bit width given: %d\n", VAR_8);
  return VAR_8;
 }






 VAR_7 = VAR_6 * VAR_8 * 2 * VAR_0;

 VAR_9 = FUNC_4(VAR_3->cpu_dai, 0, VAR_7, 0);
 if (VAR_9) {
  FUNC_0(VAR_4->dev, "error setting sysclk to %u: %d\n",
   VAR_7, VAR_9);
  return VAR_9;
 }

 return 0;
}
