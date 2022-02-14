
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {struct snd_soc_card* card; } ;
struct snd_soc_card {int dev; int dapm; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_pcm_runtime *VAR_2)
{
 struct snd_soc_card *VAR_3 = VAR_2->card;
 int VAR_4;

 VAR_4 = FUNC_3(&VAR_3->dapm, VAR_1,
     FUNC_0(VAR_1));
 if (VAR_4) {
  FUNC_1(VAR_3->dev, "DMic widget addition failed: %d\n", VAR_4);

  return VAR_4;
 }

 VAR_4 = FUNC_2(&VAR_3->dapm, VAR_0,
          FUNC_0(VAR_0));

 if (VAR_4)
  FUNC_1(VAR_3->dev, "DMic map addition failed: %d\n", VAR_4);

 return VAR_4;
}
