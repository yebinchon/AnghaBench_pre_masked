
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int dev; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int stream; struct snd_pcm_runtime* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_runtime {int dma_addr; struct lpass_pcm_data* private_data; } ;
struct lpass_variant {int dummy; } ;
struct lpass_pcm_data {int dma_ch; } ;
struct lpass_data {int lpaif_map; struct lpass_variant* variant; } ;


 int VAR_0 ;
 int FUNC_0 (struct lpass_variant*,int,int) ;
 int FUNC_1 (struct lpass_variant*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct lpass_variant*,int,int) ;
 int FUNC_3 (struct lpass_variant*,int,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct snd_pcm_substream*) ;
 int FUNC_8 (struct snd_pcm_substream*) ;
 struct lpass_data* FUNC_9 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_10 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static int FUNC_11(struct snd_pcm_substream *VAR_3)
{
 struct snd_pcm_runtime *VAR_4 = VAR_3->runtime;
 struct snd_soc_pcm_runtime *VAR_5 = VAR_3->private_data;
 struct snd_soc_component *VAR_6 = FUNC_10(VAR_5, VAR_0);
 struct lpass_data *VAR_7 = FUNC_9(VAR_6);
 struct snd_pcm_runtime *VAR_8 = VAR_3->runtime;
 struct lpass_pcm_data *VAR_9 = VAR_8->private_data;
 struct lpass_variant *VAR_10 = VAR_7->variant;
 int VAR_11, VAR_12, VAR_13 = VAR_3->stream;

 VAR_12 = VAR_9->dma_ch;

 VAR_11 = FUNC_6(VAR_7->lpaif_map,
   FUNC_0(VAR_10, VAR_12, VAR_13),
   VAR_4->dma_addr);
 if (VAR_11) {
  FUNC_4(VAR_5->dev, "error writing to rdmabase reg: %d\n",
   VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_6(VAR_7->lpaif_map,
   FUNC_1(VAR_10, VAR_12, VAR_13),
   (FUNC_7(VAR_3) >> 2) - 1);
 if (VAR_11) {
  FUNC_4(VAR_5->dev, "error writing to rdmabuff reg: %d\n",
   VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_6(VAR_7->lpaif_map,
   FUNC_3(VAR_10, VAR_12, VAR_13),
   (FUNC_8(VAR_3) >> 2) - 1);
 if (VAR_11) {
  FUNC_4(VAR_5->dev, "error writing to rdmaper reg: %d\n",
   VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_5(VAR_7->lpaif_map,
   FUNC_2(VAR_10, VAR_12, VAR_13),
   VAR_1, VAR_2);
 if (VAR_11) {
  FUNC_4(VAR_5->dev, "error writing to rdmactl reg: %d\n",
   VAR_11);
  return VAR_11;
 }

 return 0;
}
