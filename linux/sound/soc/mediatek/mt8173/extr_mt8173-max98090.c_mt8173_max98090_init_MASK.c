
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* codec_dai; struct snd_soc_card* card; } ;
struct snd_soc_component {int dummy; } ;
struct snd_soc_card {int dev; } ;
struct TYPE_2__ {struct snd_soc_component* component; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_soc_component*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct snd_soc_card*,char*,int ,int *,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_pcm_runtime *VAR_3)
{
 int VAR_4;
 struct snd_soc_card *VAR_5 = VAR_3->card;
 struct snd_soc_component *VAR_6 = VAR_3->codec_dai->component;


 VAR_4 = FUNC_3(VAR_5, "Headphone", VAR_0,
        &VAR_1,
        VAR_2,
        FUNC_0(VAR_2));
 if (VAR_4) {
  FUNC_1(VAR_5->dev, "Can't create a new Jack %d\n", VAR_4);
  return VAR_4;
 }

 return FUNC_2(VAR_6, &VAR_1);
}
