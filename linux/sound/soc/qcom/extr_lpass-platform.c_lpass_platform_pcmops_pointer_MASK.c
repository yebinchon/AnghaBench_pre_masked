
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
typedef int snd_pcm_uframes_t ;


 int VAR_0 ;
 int FUNC_0 (struct lpass_variant*,int,int) ;
 int FUNC_1 (struct lpass_variant*,int,int) ;
 int FUNC_2 (struct snd_pcm_runtime*,unsigned int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 struct lpass_data* FUNC_5 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_6 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_7(
  struct snd_pcm_substream *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_1->private_data;
 struct snd_soc_component *VAR_3 = FUNC_6(VAR_2, VAR_0);
 struct lpass_data *VAR_4 = FUNC_5(VAR_3);
 struct snd_pcm_runtime *VAR_5 = VAR_1->runtime;
 struct lpass_pcm_data *VAR_6 = VAR_5->private_data;
 struct lpass_variant *VAR_7 = VAR_4->variant;
 unsigned int VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12 = VAR_1->stream;

 VAR_11 = VAR_6->dma_ch;

 VAR_10 = FUNC_4(VAR_4->lpaif_map,
   FUNC_0(VAR_7, VAR_11, VAR_12), &VAR_8);
 if (VAR_10) {
  FUNC_3(VAR_2->dev,
   "error reading from rdmabase reg: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_4(VAR_4->lpaif_map,
   FUNC_1(VAR_7, VAR_11, VAR_12), &VAR_9);
 if (VAR_10) {
  FUNC_3(VAR_2->dev,
   "error reading from rdmacurr reg: %d\n", VAR_10);
  return VAR_10;
 }

 return FUNC_2(VAR_1->runtime, VAR_9 - VAR_8);
}
