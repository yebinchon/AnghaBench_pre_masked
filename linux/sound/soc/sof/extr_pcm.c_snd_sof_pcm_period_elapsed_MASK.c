
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sof_pcm {TYPE_1__* stream; } ;
struct snd_sof_dev {int dev; } ;
struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {size_t stream; struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_2__ {int period_elapsed_work; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 struct snd_sof_dev* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (struct snd_soc_pcm_runtime*,int ) ;
 struct snd_sof_pcm* FUNC_4 (struct snd_sof_dev*,struct snd_soc_pcm_runtime*) ;

void FUNC_5(struct snd_pcm_substream *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_1->private_data;
 struct snd_soc_component *VAR_3 =
  FUNC_3(VAR_2, VAR_0);
 struct snd_sof_dev *VAR_4 = FUNC_2(VAR_3);
 struct snd_sof_pcm *VAR_5;

 VAR_5 = FUNC_4(VAR_4, VAR_2);
 if (!VAR_5) {
  FUNC_0(VAR_4->dev,
   "error: period elapsed for unknown stream!\n");
  return;
 }
 FUNC_1(&VAR_5->stream[VAR_1->stream].period_elapsed_work);
}
