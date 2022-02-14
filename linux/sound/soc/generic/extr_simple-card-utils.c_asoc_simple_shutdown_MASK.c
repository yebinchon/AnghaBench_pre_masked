
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int num; int card; struct snd_soc_dai* cpu_dai; struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct simple_dai_props {int codec_dai; int cpu_dai; scalar_t__ mclk_fs; } ;
struct asoc_simple_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct simple_dai_props* FUNC_1 (struct asoc_simple_priv*,int ) ;
 struct asoc_simple_priv* FUNC_2 (int ) ;
 int FUNC_3 (struct snd_soc_dai*,int ,int ,int ) ;

void FUNC_4(struct snd_pcm_substream *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_2->private_data;
 struct snd_soc_dai *VAR_4 = VAR_3->codec_dai;
 struct snd_soc_dai *VAR_5 = VAR_3->cpu_dai;
 struct asoc_simple_priv *VAR_6 = FUNC_2(VAR_3->card);
 struct simple_dai_props *VAR_7 =
  FUNC_1(VAR_6, VAR_3->num);

 if (VAR_7->mclk_fs) {
  FUNC_3(VAR_4, 0, 0, VAR_0);
  FUNC_3(VAR_5, 0, 0, VAR_1);
 }

 FUNC_0(VAR_7->cpu_dai);

 FUNC_0(VAR_7->codec_dai);
}
