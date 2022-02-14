
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* card; int dev; struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_6__ {int jack; } ;
struct TYPE_5__ {int dapm; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 TYPE_2__ VAR_12 ;
 int FUNC_0 (struct snd_soc_component*,TYPE_2__*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (TYPE_1__*,char*,int,TYPE_2__*,int *,int ) ;
 int FUNC_4 (struct snd_soc_dai*,int ,int,int ) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct snd_soc_pcm_runtime *VAR_13)
{
 int VAR_14;
 struct snd_soc_dai *VAR_15 = VAR_13->codec_dai;
 struct snd_soc_component *VAR_16 = VAR_13->codec_dai->component;
 int VAR_17;


 if (FUNC_6())
  VAR_17 = 24000000;
 else
  VAR_17 = 19200000;

 VAR_14 = FUNC_4(VAR_15, VAR_0, VAR_17,
         VAR_11);

 if (VAR_14) {
  FUNC_1(VAR_13->dev, "can't set codec sysclk configuration\n");
  return VAR_14;
 }





 VAR_14 = FUNC_3(VAR_13->card, "Headset Jack",
   VAR_9 | VAR_5 | VAR_6 |
   VAR_7 | VAR_8 | VAR_10,
   &VAR_12, ((void*)0), 0);
 if (VAR_14) {
  FUNC_1(VAR_13->dev, "Headset Jack creation failed: %d\n", VAR_14);
  return VAR_14;
 }

 FUNC_2(VAR_12.jack, VAR_5, VAR_1);
 FUNC_2(VAR_12.jack, VAR_6, VAR_4);
 FUNC_2(VAR_12.jack, VAR_7, VAR_3);
 FUNC_2(VAR_12.jack, VAR_8,
    VAR_2);

 FUNC_0(VAR_16, &VAR_12);

 FUNC_5(&VAR_13->card->dapm, "SoC DMIC");

 return VAR_14;
}
