
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int cpu_dai; int codec_dai; int num; int card; } ;
struct simple_dai_props {int cpu_dai; int codec_dai; } ;
struct asoc_simple_priv {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 struct simple_dai_props* FUNC_1 (struct asoc_simple_priv*,int ) ;
 struct asoc_simple_priv* FUNC_2 (int ) ;

int FUNC_3(struct snd_soc_pcm_runtime *VAR_0)
{
 struct asoc_simple_priv *VAR_1 = FUNC_2(VAR_0->card);
 struct simple_dai_props *VAR_2 = FUNC_1(VAR_1, VAR_0->num);
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0->codec_dai,
       VAR_2->codec_dai);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_0->cpu_dai,
       VAR_2->cpu_dai);
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
