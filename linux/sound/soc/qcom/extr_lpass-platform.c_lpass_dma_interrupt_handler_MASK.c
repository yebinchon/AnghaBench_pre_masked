
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_pcm_runtime {int dev; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct lpass_variant {int dummy; } ;
struct lpass_data {int lpaif_map; struct lpass_variant* variant; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lpass_variant*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct snd_pcm_substream*) ;
 int FUNC_8 (struct snd_pcm_substream*,int ) ;
 int FUNC_9 (struct snd_pcm_substream*) ;

__attribute__((used)) static irqreturn_t FUNC_10(
   struct snd_pcm_substream *VAR_4,
   struct lpass_data *VAR_5,
   int VAR_6, u32 VAR_7)
{
 struct snd_soc_pcm_runtime *VAR_8 = VAR_4->private_data;
 struct lpass_variant *VAR_9 = VAR_5->variant;
 irqreturn_t VAR_10 = VAR_1;
 int VAR_11;

 if (VAR_7 & FUNC_2(VAR_6)) {
  VAR_11 = FUNC_6(VAR_5->lpaif_map,
    FUNC_0(VAR_9, VAR_2),
    FUNC_2(VAR_6));
  if (VAR_11) {
   FUNC_4(VAR_8->dev,
    "error writing to irqclear reg: %d\n", VAR_11);
   return VAR_1;
  }
  FUNC_7(VAR_4);
  VAR_10 = VAR_0;
 }

 if (VAR_7 & FUNC_3(VAR_6)) {
  VAR_11 = FUNC_6(VAR_5->lpaif_map,
    FUNC_0(VAR_9, VAR_2),
    FUNC_3(VAR_6));
  if (VAR_11) {
   FUNC_4(VAR_8->dev,
    "error writing to irqclear reg: %d\n", VAR_11);
   return VAR_1;
  }
  FUNC_5(VAR_8->dev, "xrun warning\n");
  FUNC_9(VAR_4);
  VAR_10 = VAR_0;
 }

 if (VAR_7 & FUNC_1(VAR_6)) {
  VAR_11 = FUNC_6(VAR_5->lpaif_map,
    FUNC_0(VAR_9, VAR_2),
    FUNC_1(VAR_6));
  if (VAR_11) {
   FUNC_4(VAR_8->dev,
    "error writing to irqclear reg: %d\n", VAR_11);
   return VAR_1;
  }
  FUNC_4(VAR_8->dev, "bus access error\n");
  FUNC_8(VAR_4, VAR_3);
  VAR_10 = VAR_0;
 }

 return VAR_10;
}
