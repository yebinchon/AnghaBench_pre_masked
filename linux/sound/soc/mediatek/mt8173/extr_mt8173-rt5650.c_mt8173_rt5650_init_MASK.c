
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__** codec_dais; struct snd_soc_card* card; } ;
struct snd_soc_component {int dummy; } ;
struct snd_soc_card {int dev; } ;
struct TYPE_2__ {char* name; struct snd_soc_component* component; } ;


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
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_10 ;
 int FUNC_2 (struct snd_soc_component*,int ,int ) ;
 int FUNC_3 (struct snd_soc_component*,int *,int *,int *) ;
 int FUNC_4 (struct snd_soc_card*,char*,int,int *,int *,int ) ;
 int FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_pcm_runtime *VAR_11)
{
 struct snd_soc_card *VAR_12 = VAR_11->card;
 struct snd_soc_component *VAR_13 = VAR_11->codec_dais[0]->component;
 const char *VAR_14 = VAR_11->codec_dais[1]->name;
 int VAR_15;

 FUNC_2(VAR_13,
    VAR_3,
    VAR_1);

 if (!FUNC_5(VAR_14, "rt5645-aif1")) {
  FUNC_2(VAR_13,
     VAR_0,
     VAR_1);
 } else if (!FUNC_5(VAR_14, "rt5645-aif2")) {
  FUNC_2(VAR_13,
     VAR_0,
     VAR_2);
 } else {
  FUNC_1(VAR_12->dev,
    "Only one dai codec found in DTS, enabled rt5645 AD filter\n");
  FUNC_2(VAR_13,
     VAR_0,
     VAR_1);
 }


 VAR_15 = FUNC_4(VAR_12, "Headset Jack",
        VAR_8 | VAR_9 |
        VAR_4 | VAR_5 |
        VAR_6 | VAR_7,
        &VAR_10, ((void*)0), 0);
 if (VAR_15) {
  FUNC_0(VAR_12->dev, "Can't new Headset Jack %d\n", VAR_15);
  return VAR_15;
 }

 return FUNC_3(VAR_13,
          &VAR_10,
          &VAR_10,
          &VAR_10);
}
