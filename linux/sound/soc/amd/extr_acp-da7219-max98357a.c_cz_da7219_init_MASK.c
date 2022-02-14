
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int dev; struct snd_soc_dai* codec_dai; struct snd_soc_card* card; } ;
struct snd_soc_dai {int name; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_soc_card {int dev; } ;
struct TYPE_4__ {int jack; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_0 (int ,char*) ;
 TYPE_1__ VAR_15 ;
 int FUNC_1 (struct snd_soc_component*,TYPE_1__*) ;
 void* VAR_16 ;
 void* VAR_17 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct snd_soc_card*,char*,int,TYPE_1__*,int *,int ) ;
 int FUNC_6 (struct snd_soc_dai*,int ,int ,int ,int ) ;
 int FUNC_7 (struct snd_soc_dai*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_pcm_runtime *VAR_18)
{
 int VAR_19;
 struct snd_soc_card *VAR_20 = VAR_18->card;
 struct snd_soc_dai *VAR_21 = VAR_18->codec_dai;
 struct snd_soc_component *VAR_22 = VAR_21->component;

 FUNC_3(VAR_18->dev, "codec dai name = %s\n", VAR_21->name);

 VAR_19 = FUNC_7(VAR_21, VAR_1,
         VAR_0, VAR_14);
 if (VAR_19 < 0) {
  FUNC_2(VAR_18->dev, "can't set codec sysclk: %d\n", VAR_19);
  return VAR_19;
 }

 VAR_19 = FUNC_6(VAR_21, 0, VAR_3,
      VAR_0, VAR_2);
 if (VAR_19 < 0) {
  FUNC_2(VAR_18->dev, "can't set codec pll: %d\n", VAR_19);
  return VAR_19;
 }

 VAR_17 = FUNC_0(VAR_22->dev, "da7219-dai-wclk");
 VAR_16 = FUNC_0(VAR_22->dev, "da7219-dai-bclk");

 VAR_19 = FUNC_5(VAR_20, "Headset Jack",
    VAR_12 | VAR_13 |
    VAR_8 | VAR_9 |
    VAR_10 | VAR_11,
    &VAR_15, ((void*)0), 0);
 if (VAR_19) {
  FUNC_2(VAR_20->dev, "HP jack creation failed %d\n", VAR_19);
  return VAR_19;
 }

 FUNC_4(VAR_15.jack, VAR_8, VAR_4);
 FUNC_4(VAR_15.jack, VAR_9, VAR_7);
 FUNC_4(VAR_15.jack, VAR_10, VAR_6);
 FUNC_4(VAR_15.jack, VAR_11, VAR_5);

 FUNC_1(VAR_22, &VAR_15);

 return 0;
}
