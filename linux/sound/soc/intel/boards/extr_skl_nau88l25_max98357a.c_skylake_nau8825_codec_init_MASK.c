
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* card; int dev; TYPE_2__* codec_dai; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_4__ {struct snd_soc_component* component; } ;
struct TYPE_3__ {int dapm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_component*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,char*,int,int *,int *,int ) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_pcm_runtime *VAR_7)
{
 int VAR_8;
 struct snd_soc_component *VAR_9 = VAR_7->codec_dai->component;





 VAR_8 = FUNC_2(&VAR_5, "Headset Jack",
   VAR_4 | VAR_0 | VAR_1 |
   VAR_2 | VAR_3, &VAR_6,
   ((void*)0), 0);
 if (VAR_8) {
  FUNC_0(VAR_7->dev, "Headset Jack creation failed %d\n", VAR_8);
  return VAR_8;
 }

 FUNC_1(VAR_9, &VAR_6);

 FUNC_3(&VAR_7->card->dapm, "SoC DMIC");

 return VAR_8;
}
