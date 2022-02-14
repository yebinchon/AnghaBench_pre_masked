
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct lpass_pcm_data* private_data; } ;
struct lpass_variant {int (* free_dma_channel ) (struct lpass_data*,size_t) ;} ;
struct lpass_pcm_data {size_t dma_ch; } ;
struct lpass_data {int ** substream; struct lpass_variant* variant; } ;


 int VAR_0 ;
 struct lpass_data* FUNC_0 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_1 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_2 (struct lpass_data*,size_t) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_1->runtime;
 struct snd_soc_pcm_runtime *VAR_3 = VAR_1->private_data;
 struct snd_soc_component *VAR_4 = FUNC_1(VAR_3, VAR_0);
 struct lpass_data *VAR_5 = FUNC_0(VAR_4);
 struct lpass_variant *VAR_6 = VAR_5->variant;
 struct lpass_pcm_data *VAR_7;

 VAR_7 = VAR_2->private_data;
 VAR_5->substream[VAR_7->dma_ch] = ((void*)0);
 if (VAR_6->free_dma_channel)
  VAR_6->free_dma_channel(VAR_5, VAR_7->dma_ch);

 return 0;
}
