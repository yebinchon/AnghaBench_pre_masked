
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__** codec_dais; struct snd_soc_card* card; } ;
struct snd_soc_component {int dummy; } ;
struct snd_soc_card {int dev; } ;
struct TYPE_2__ {struct snd_soc_component* component; } ;


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
 int FUNC_0 (int ,char*,int) ;
 int VAR_15 ;
 int FUNC_1 (struct snd_soc_component*,int,int ) ;
 int FUNC_2 (struct snd_soc_component*,int *,int *,int *) ;
 int FUNC_3 (struct snd_soc_component*,int,int ) ;
 int FUNC_4 (struct snd_soc_card*,char*,int,int *,int *,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_pcm_runtime *VAR_16)
{
 struct snd_soc_card *VAR_17 = VAR_16->card;
 struct snd_soc_component *VAR_18 = VAR_16->codec_dais[0]->component;
 struct snd_soc_component *VAR_19 = VAR_16->codec_dais[1]->component;
 int VAR_20;

 FUNC_1(VAR_18,
    VAR_2 |
    VAR_0,
    VAR_1);
 FUNC_3(VAR_19,
    VAR_7 |
    VAR_3,
    VAR_5);
 FUNC_3(VAR_19,
    VAR_4 |
    VAR_8,
    VAR_6);


 VAR_20 = FUNC_4(VAR_17, "Headset Jack",
        VAR_13 | VAR_14 |
        VAR_9 | VAR_10 |
        VAR_11 | VAR_12,
        &VAR_15, ((void*)0), 0);
 if (VAR_20) {
  FUNC_0(VAR_17->dev, "Can't new Headset Jack %d\n", VAR_20);
  return VAR_20;
 }

 return FUNC_2(VAR_18,
          &VAR_15,
          &VAR_15,
          &VAR_15);
}
