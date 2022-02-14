
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int num; int card; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct simple_dai_props {int cpu_dai; int codec_dai; } ;
struct asoc_simple_priv {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct simple_dai_props* FUNC_2 (struct asoc_simple_priv*,int ) ;
 struct asoc_simple_priv* FUNC_3 (int ) ;

int FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct snd_soc_pcm_runtime *VAR_1 = VAR_0->private_data;
 struct asoc_simple_priv *VAR_2 = FUNC_3(VAR_1->card);
 struct simple_dai_props *VAR_3 = FUNC_2(VAR_2, VAR_1->num);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3->cpu_dai);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_3->codec_dai);
 if (VAR_4)
  FUNC_0(VAR_3->cpu_dai);

 return VAR_4;
}
