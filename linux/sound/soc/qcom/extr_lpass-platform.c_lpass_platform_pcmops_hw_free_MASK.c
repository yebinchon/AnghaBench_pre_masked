
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int dev; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int stream; struct snd_pcm_runtime* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_runtime {struct lpass_pcm_data* private_data; } ;
struct lpass_variant {int dummy; } ;
struct lpass_pcm_data {int dma_ch; } ;
struct lpass_data {int lpaif_map; struct lpass_variant* variant; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct lpass_variant*,int ,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,unsigned int,int ) ;
 struct lpass_data* FUNC_3 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_4 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_1->private_data;
 struct snd_soc_component *VAR_3 = FUNC_4(VAR_2, VAR_0);
 struct lpass_data *VAR_4 = FUNC_3(VAR_3);
 struct snd_pcm_runtime *VAR_5 = VAR_1->runtime;
 struct lpass_pcm_data *VAR_6 = VAR_5->private_data;
 struct lpass_variant *VAR_7 = VAR_4->variant;
 unsigned int VAR_8;
 int VAR_9;

 VAR_8 = FUNC_0(VAR_7, VAR_6->dma_ch, VAR_1->stream);
 VAR_9 = FUNC_2(VAR_4->lpaif_map, VAR_8, 0);
 if (VAR_9)
  FUNC_1(VAR_2->dev, "error writing to rdmactl reg: %d\n",
   VAR_9);

 return VAR_9;
}
