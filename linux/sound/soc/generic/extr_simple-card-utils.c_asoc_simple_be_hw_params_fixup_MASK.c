
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int num; int card; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct simple_dai_props {int adata; } ;
struct asoc_simple_priv {int dummy; } ;


 int FUNC_0 (int *,struct snd_pcm_hw_params*) ;
 struct simple_dai_props* FUNC_1 (struct asoc_simple_priv*,int ) ;
 struct asoc_simple_priv* FUNC_2 (int ) ;

int FUNC_3(struct snd_soc_pcm_runtime *VAR_0,
       struct snd_pcm_hw_params *VAR_1)
{
 struct asoc_simple_priv *VAR_2 = FUNC_2(VAR_0->card);
 struct simple_dai_props *VAR_3 = FUNC_1(VAR_2, VAR_0->num);

 FUNC_0(&VAR_3->adata, VAR_1);

 return 0;
}
