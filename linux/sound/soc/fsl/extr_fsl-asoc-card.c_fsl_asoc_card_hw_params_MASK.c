
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int cpu_dai; TYPE_2__* card; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_3__ {scalar_t__ set_bias_level; } ;
struct cpu_priv {scalar_t__ slot_width; int * sysclk_dir; int * sysclk_freq; int * sysclk_id; } ;
struct fsl_asoc_card_priv {int dai_fmt; TYPE_1__ card; int sample_format; int sample_rate; struct cpu_priv cpu_priv; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device* dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (struct fsl_asoc_card_priv*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 struct fsl_asoc_card_priv* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int,int,int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_3,
       struct snd_pcm_hw_params *VAR_4)
{
 struct snd_soc_pcm_runtime *VAR_5 = VAR_3->private_data;
 struct fsl_asoc_card_priv *VAR_6 = FUNC_4(VAR_5->card);
 bool VAR_7 = VAR_3->stream == VAR_1;
 struct cpu_priv *VAR_8 = &VAR_6->cpu_priv;
 struct device *VAR_9 = VAR_5->card->dev;
 int VAR_10;

 VAR_6->sample_rate = FUNC_3(VAR_4);
 VAR_6->sample_format = FUNC_2(VAR_4);






 if ((VAR_6->card.set_bias_level &&
      VAR_6->dai_fmt & VAR_2) ||
     FUNC_1(VAR_6))
  return 0;


 VAR_10 = FUNC_5(VAR_5->cpu_dai, VAR_8->sysclk_id[VAR_7],
         VAR_8->sysclk_freq[VAR_7],
         VAR_8->sysclk_dir[VAR_7]);
 if (VAR_10 && VAR_10 != -VAR_0) {
  FUNC_0(VAR_9, "failed to set sysclk for cpu dai\n");
  return VAR_10;
 }

 if (VAR_8->slot_width) {
  VAR_10 = FUNC_6(VAR_5->cpu_dai, 0x3, 0x3, 2,
            VAR_8->slot_width);
  if (VAR_10 && VAR_10 != -VAR_0) {
   FUNC_0(VAR_9, "failed to set TDM slot for cpu dai\n");
   return VAR_10;
  }
 }

 return 0;
}
