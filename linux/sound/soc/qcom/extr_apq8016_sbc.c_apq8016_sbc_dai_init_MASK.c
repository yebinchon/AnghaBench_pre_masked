
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_soc_dai** codec_dais; struct snd_soc_card* card; struct snd_soc_dai_link* dai_link; struct snd_soc_dai* cpu_dai; } ;
struct snd_soc_dai_link {int num_codecs; } ;
struct snd_soc_dai {int id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_soc_card {int dev; } ;
struct snd_jack {int dummy; } ;
struct TYPE_3__ {struct snd_jack* jack; } ;
struct apq8016_sbc_data {int jack_setup; TYPE_1__ jack; int mic_iomux; int spkr_iomux; } ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct snd_jack*,int,int ) ;
 struct apq8016_sbc_data* FUNC_4 (struct snd_soc_card*) ;
 int FUNC_5 (struct snd_soc_card*,char*,int,TYPE_1__*,int *,int ) ;
 int FUNC_6 (struct snd_soc_component*,TYPE_1__*,int *) ;
 int FUNC_7 (struct snd_soc_component*,int ,int ,int ,int ) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_pcm_runtime *VAR_19)
{
 struct snd_soc_dai *VAR_20 = VAR_19->cpu_dai;
 struct snd_soc_component *VAR_21;
 struct snd_soc_dai_link *VAR_22 = VAR_19->dai_link;
 struct snd_soc_card *VAR_23 = VAR_19->card;
 struct apq8016_sbc_data *VAR_24 = FUNC_4(VAR_23);
 int VAR_25, VAR_26;

 switch (VAR_20->id) {
 case 130:
  FUNC_8(FUNC_2(VAR_24->spkr_iomux) | VAR_18,
   VAR_24->spkr_iomux);
  break;

 case 129:

  FUNC_8(FUNC_2(VAR_24->mic_iomux) | VAR_7 |
   VAR_9,
   VAR_24->mic_iomux);
  break;
 case 128:
  FUNC_8(FUNC_2(VAR_24->mic_iomux) | VAR_8 |
   VAR_9,
   VAR_24->mic_iomux);

  break;

 default:
  FUNC_0(VAR_23->dev, "unsupported cpu dai configuration\n");
  return -VAR_1;

 }

 if (!VAR_24->jack_setup) {
  struct snd_jack *VAR_27;

  VAR_26 = FUNC_5(VAR_23, "Headset Jack",
          VAR_16 |
          VAR_15 |
          VAR_10 | VAR_11 |
          VAR_12 | VAR_13 |
          VAR_14,
          &VAR_24->jack, ((void*)0), 0);

  if (VAR_26 < 0) {
   FUNC_0(VAR_23->dev, "Unable to add Headphone Jack\n");
   return VAR_26;
  }

  VAR_27 = VAR_24->jack.jack;

  FUNC_3(VAR_27, VAR_10, VAR_3);
  FUNC_3(VAR_27, VAR_11, VAR_4);
  FUNC_3(VAR_27, VAR_12, VAR_6);
  FUNC_3(VAR_27, VAR_13, VAR_5);
  VAR_24->jack_setup = 1;
 }

 for (VAR_25 = 0 ; VAR_25 < VAR_22->num_codecs; VAR_25++) {
  struct snd_soc_dai *VAR_28 = VAR_19->codec_dais[VAR_25];

  VAR_21 = VAR_28->component;

  VAR_26 = FUNC_7(VAR_21, 0, 0, VAR_0,
           VAR_17);
  if (VAR_26 != 0 && VAR_26 != -VAR_2) {
   FUNC_1(VAR_23->dev, "Failed to set mclk: %d\n", VAR_26);
   return VAR_26;
  }
  VAR_26 = FUNC_6(VAR_21, &VAR_24->jack, ((void*)0));
  if (VAR_26 != 0 && VAR_26 != -VAR_2) {
   FUNC_1(VAR_23->dev, "Failed to set jack: %d\n", VAR_26);
   return VAR_26;
  }
 }

 return 0;
}
