
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_soc_dai* cpu_dai; struct snd_soc_dai* codec_dai; struct snd_soc_card* card; } ;
struct snd_soc_dai {int id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_soc_card {int dev; } ;
struct snd_jack {int private_free; struct snd_soc_component* private_data; } ;
struct TYPE_3__ {struct snd_jack* jack; } ;
struct sdm845_snd_data {int jack_setup; TYPE_1__ jack; } ;


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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_11 ;
 int FUNC_2 (struct snd_jack*,int,int ) ;
 struct sdm845_snd_data* FUNC_3 (struct snd_soc_card*) ;
 int FUNC_4 (struct snd_soc_card*,char*,int,TYPE_1__*,int *,int ) ;
 int FUNC_5 (struct snd_soc_component*,TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_pcm_runtime *VAR_12)
{
 struct snd_soc_component *VAR_13;
 struct snd_soc_card *VAR_14 = VAR_12->card;
 struct snd_soc_dai *VAR_15 = VAR_12->codec_dai;
 struct snd_soc_dai *VAR_16 = VAR_12->cpu_dai;
 struct sdm845_snd_data *VAR_17 = FUNC_3(VAR_14);
 struct snd_jack *VAR_18;
 int VAR_19;

 if (!VAR_17->jack_setup) {
  VAR_19 = FUNC_4(VAR_14, "Headset Jack",
    VAR_10 |
    VAR_9 |
    VAR_5 | VAR_6 |
    VAR_7 | VAR_8,
    &VAR_17->jack, ((void*)0), 0);

  if (VAR_19 < 0) {
   FUNC_0(VAR_14->dev, "Unable to add Headphone Jack\n");
   return VAR_19;
  }

  VAR_18 = VAR_17->jack.jack;

  FUNC_2(VAR_18, VAR_5, VAR_1);
  FUNC_2(VAR_18, VAR_6, VAR_2);
  FUNC_2(VAR_18, VAR_7, VAR_4);
  FUNC_2(VAR_18, VAR_8, VAR_3);
  VAR_17->jack_setup = 1;
 }

 switch (VAR_16->id) {
 case 128:
  VAR_18 = VAR_17->jack.jack;
  VAR_13 = VAR_15->component;

  VAR_18->private_data = VAR_13;
  VAR_18->private_free = VAR_11;
  VAR_19 = FUNC_5(VAR_13,
        &VAR_17->jack, ((void*)0));
  if (VAR_19 != 0 && VAR_19 != -VAR_0) {
   FUNC_1(VAR_14->dev, "Failed to set jack: %d\n", VAR_19);
   return VAR_19;
  }
  break;
 default:
  break;
 }

 return 0;
}
