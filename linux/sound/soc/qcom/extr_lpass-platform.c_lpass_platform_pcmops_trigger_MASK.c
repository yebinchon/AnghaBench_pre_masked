
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
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lpass_variant*,int,int) ;
 int FUNC_1 (struct lpass_variant*,int ) ;
 int FUNC_2 (struct lpass_variant*,int ) ;
 int FUNC_3 (int) ;
 int VAR_4 ;






 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 struct lpass_data* FUNC_7 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_8 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_5,
  int VAR_6)
{
 struct snd_soc_pcm_runtime *VAR_7 = VAR_5->private_data;
 struct snd_soc_component *VAR_8 = FUNC_8(VAR_7, VAR_0);
 struct lpass_data *VAR_9 = FUNC_7(VAR_8);
 struct snd_pcm_runtime *VAR_10 = VAR_5->runtime;
 struct lpass_pcm_data *VAR_11 = VAR_10->private_data;
 struct lpass_variant *VAR_12 = VAR_9->variant;
 int VAR_13, VAR_14, VAR_15 = VAR_5->stream;

 VAR_14 = VAR_11->dma_ch;

 switch (VAR_6) {
 case 130:
 case 131:
 case 132:

  VAR_13 = FUNC_6(VAR_9->lpaif_map,
    FUNC_1(VAR_12, VAR_4),
    FUNC_3(VAR_14));
  if (VAR_13) {
   FUNC_4(VAR_7->dev,
    "error writing to irqclear reg: %d\n", VAR_13);
   return VAR_13;
  }

  VAR_13 = FUNC_5(VAR_9->lpaif_map,
    FUNC_2(VAR_12, VAR_4),
    FUNC_3(VAR_14),
    FUNC_3(VAR_14));
  if (VAR_13) {
   FUNC_4(VAR_7->dev,
    "error writing to irqen reg: %d\n", VAR_13);
   return VAR_13;
  }

  VAR_13 = FUNC_5(VAR_9->lpaif_map,
    FUNC_0(VAR_12, VAR_14, VAR_15),
    VAR_1,
    VAR_3);
  if (VAR_13) {
   FUNC_4(VAR_7->dev,
    "error writing to rdmactl reg: %d\n", VAR_13);
   return VAR_13;
  }
  break;
 case 129:
 case 128:
 case 133:
  VAR_13 = FUNC_5(VAR_9->lpaif_map,
    FUNC_0(VAR_12, VAR_14, VAR_15),
    VAR_1,
    VAR_2);
  if (VAR_13) {
   FUNC_4(VAR_7->dev,
    "error writing to rdmactl reg: %d\n", VAR_13);
   return VAR_13;
  }

  VAR_13 = FUNC_5(VAR_9->lpaif_map,
    FUNC_2(VAR_12, VAR_4),
    FUNC_3(VAR_14), 0);
  if (VAR_13) {
   FUNC_4(VAR_7->dev,
    "error writing to irqen reg: %d\n", VAR_13);
   return VAR_13;
  }
  break;
 }

 return 0;
}
