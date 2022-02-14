
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int num; int card; struct snd_soc_dai* cpu_dai; struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct simple_dai_props {int mclk_fs; int cpu_dai; int codec_dai; } ;
struct asoc_simple_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (struct snd_pcm_hw_params*) ;
 struct simple_dai_props* FUNC_2 (struct asoc_simple_priv*,int ) ;
 struct asoc_simple_priv* FUNC_3 (int ) ;
 int FUNC_4 (struct snd_soc_dai*,int ,unsigned int,int ) ;

int FUNC_5(struct snd_pcm_substream *VAR_3,
     struct snd_pcm_hw_params *VAR_4)
{
 struct snd_soc_pcm_runtime *VAR_5 = VAR_3->private_data;
 struct snd_soc_dai *VAR_6 = VAR_5->codec_dai;
 struct snd_soc_dai *VAR_7 = VAR_5->cpu_dai;
 struct asoc_simple_priv *VAR_8 = FUNC_3(VAR_5->card);
 struct simple_dai_props *VAR_9 =
  FUNC_2(VAR_8, VAR_5->num);
 unsigned int VAR_10, VAR_11 = 0;
 int VAR_12 = 0;

 if (VAR_9->mclk_fs)
  VAR_11 = VAR_9->mclk_fs;

 if (VAR_11) {
  VAR_10 = FUNC_1(VAR_4) * VAR_11;

  VAR_12 = FUNC_0(VAR_9->codec_dai, VAR_10);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_12 = FUNC_0(VAR_9->cpu_dai, VAR_10);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_12 = FUNC_4(VAR_6, 0, VAR_10,
          VAR_1);
  if (VAR_12 && VAR_12 != -VAR_0)
   goto err;

  VAR_12 = FUNC_4(VAR_7, 0, VAR_10,
          VAR_2);
  if (VAR_12 && VAR_12 != -VAR_0)
   goto err;
 }
 return 0;
err:
 return VAR_12;
}
