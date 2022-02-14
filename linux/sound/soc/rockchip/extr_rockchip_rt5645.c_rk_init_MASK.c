
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* codec_dai; struct snd_soc_card* card; } ;
struct snd_soc_card {int dev; } ;
struct TYPE_2__ {int component; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_6 ;
 int FUNC_1 (int ,int *,int *,int *) ;
 int FUNC_2 (struct snd_soc_card*,char*,int,int *,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_pcm_runtime *VAR_7)
{
 struct snd_soc_card *VAR_8 = VAR_7->card;
 int VAR_9;


 VAR_9 = FUNC_2(VAR_8, "Headset Jack",
        VAR_4 | VAR_5 |
        VAR_0 | VAR_1 |
        VAR_2 | VAR_3,
        &VAR_6, ((void*)0), 0);
 if (VAR_9) {
  FUNC_0(VAR_8->dev, "New Headset Jack failed! (%d)\n", VAR_9);
  return VAR_9;
 }

 return FUNC_1(VAR_7->codec_dai->component,
         &VAR_6,
         &VAR_6,
         &VAR_6);
}
