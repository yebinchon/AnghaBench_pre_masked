
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct fsl_asrc_pair* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct fsl_asrc_pair {int index; struct asrc_config* config; } ;
struct fsl_asrc {int asrc_width; unsigned int asrc_rate; } ;
struct asrc_config {unsigned int channel_num; int input_word_width; int output_word_width; unsigned int input_sample_rate; unsigned int output_sample_rate; int outclk; int inclk; int pair; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct fsl_asrc_pair*) ;
 int FUNC_2 (unsigned int,struct fsl_asrc_pair*) ;
 unsigned int FUNC_3 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 struct fsl_asrc* FUNC_6 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_5,
      struct snd_pcm_hw_params *VAR_6,
      struct snd_soc_dai *VAR_7)
{
 struct fsl_asrc *VAR_8 = FUNC_6(VAR_7);
 int VAR_9 = FUNC_5(VAR_6);
 struct snd_pcm_runtime *VAR_10 = VAR_5->runtime;
 struct fsl_asrc_pair *VAR_11 = VAR_10->private_data;
 unsigned int VAR_12 = FUNC_3(VAR_6);
 unsigned int VAR_13 = FUNC_4(VAR_6);
 struct asrc_config VAR_14;
 int VAR_15, VAR_16;

 VAR_16 = FUNC_2(VAR_12, VAR_11);
 if (VAR_16) {
  FUNC_0(VAR_7->dev, "fail to request asrc pair\n");
  return VAR_16;
 }

 VAR_11->config = &VAR_14;

 if (VAR_9 == 16)
  VAR_9 = VAR_0;
 else
  VAR_9 = VAR_1;

 if (VAR_8->asrc_width == 16)
  VAR_15 = VAR_0;
 else
  VAR_15 = VAR_1;

 VAR_14.pair = VAR_11->index;
 VAR_14.channel_num = VAR_12;
 VAR_14.inclk = VAR_2;
 VAR_14.outclk = VAR_3;

 if (VAR_5->stream == VAR_4) {
  VAR_14.input_word_width = VAR_9;
  VAR_14.output_word_width = VAR_15;
  VAR_14.input_sample_rate = VAR_13;
  VAR_14.output_sample_rate = VAR_8->asrc_rate;
 } else {
  VAR_14.input_word_width = VAR_15;
  VAR_14.output_word_width = VAR_9;
  VAR_14.input_sample_rate = VAR_8->asrc_rate;
  VAR_14.output_sample_rate = VAR_13;
 }

 VAR_16 = FUNC_1(VAR_11);
 if (VAR_16) {
  FUNC_0(VAR_7->dev, "fail to config asrc pair\n");
  return VAR_16;
 }

 return 0;
}
