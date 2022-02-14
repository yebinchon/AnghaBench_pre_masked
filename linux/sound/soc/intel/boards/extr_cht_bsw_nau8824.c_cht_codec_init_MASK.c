
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int dev; int card; struct snd_soc_dai* codec_dai; } ;
struct snd_soc_jack {int jack; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct cht_mc_private {struct snd_soc_jack jack; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_soc_component*,struct snd_soc_jack*) ;
 int FUNC_3 (int ,int,int ) ;
 struct cht_mc_private* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int,struct snd_soc_jack*,int ,int ) ;
 int FUNC_6 (struct snd_soc_dai*,int,int,int,int) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_pcm_runtime *VAR_10)
{
 struct cht_mc_private *VAR_11 = FUNC_4(VAR_10->card);
 struct snd_soc_jack *VAR_12 = &VAR_11->jack;
 struct snd_soc_dai *VAR_13 = VAR_10->codec_dai;
 struct snd_soc_component *VAR_14 = VAR_13->component;
 int VAR_15, VAR_16;


 VAR_15 = FUNC_6(VAR_13, 0xf, 0x1, 4, 24);
 if (VAR_15 < 0) {
  FUNC_1(VAR_10->dev, "can't set codec TDM slot %d\n", VAR_15);
  return VAR_15;
 }







 VAR_16 = VAR_8 | VAR_4 | VAR_5 |
  VAR_6 | VAR_7;
 VAR_15 = FUNC_5(VAR_10->card, "Headset", VAR_16, VAR_12,
  VAR_9, FUNC_0(VAR_9));
 if (VAR_15) {
  FUNC_1(VAR_10->dev,
   "Headset Jack creation failed %d\n", VAR_15);
  return VAR_15;
 }
 FUNC_3(VAR_12->jack, VAR_4, VAR_0);
 FUNC_3(VAR_12->jack, VAR_5, VAR_1);
 FUNC_3(VAR_12->jack, VAR_6, VAR_3);
 FUNC_3(VAR_12->jack, VAR_7, VAR_2);

 FUNC_2(VAR_14, VAR_12);

 return VAR_15;
}
