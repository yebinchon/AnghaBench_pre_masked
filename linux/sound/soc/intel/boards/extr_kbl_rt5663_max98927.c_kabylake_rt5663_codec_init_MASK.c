
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int dev; TYPE_1__* codec_dai; int card; } ;
struct snd_soc_jack {int jack; } ;
struct snd_soc_component {int dummy; } ;
struct kbl_rt5663_private {struct snd_soc_jack kabylake_headset; } ;
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
 int FUNC_0 (int ,char*,int) ;
 int VAR_9 ;
 int FUNC_1 (int ,int,int ) ;
 struct kbl_rt5663_private* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,struct snd_soc_jack*,int *,int ) ;
 int FUNC_4 (struct snd_soc_component*,struct snd_soc_jack*,int *) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_pcm_runtime *VAR_10)
{
 int VAR_11;
 struct kbl_rt5663_private *VAR_12 = FUNC_2(VAR_10->card);
 struct snd_soc_component *VAR_13 = VAR_10->codec_dai->component;
 struct snd_soc_jack *VAR_14;





 VAR_11 = FUNC_3(VAR_9, "Headset Jack",
   VAR_8 | VAR_4 | VAR_5 |
   VAR_6 | VAR_7, &VAR_12->kabylake_headset,
   ((void*)0), 0);
 if (VAR_11) {
  FUNC_0(VAR_10->dev, "Headset Jack creation failed %d\n", VAR_11);
  return VAR_11;
 }

 VAR_14 = &VAR_12->kabylake_headset;
 FUNC_1(VAR_14->jack, VAR_4, VAR_0);
 FUNC_1(VAR_14->jack, VAR_5, VAR_1);
 FUNC_1(VAR_14->jack, VAR_6, VAR_3);
 FUNC_1(VAR_14->jack, VAR_7, VAR_2);

 FUNC_4(VAR_13, &VAR_12->kabylake_headset, ((void*)0));

 return VAR_11;
}
