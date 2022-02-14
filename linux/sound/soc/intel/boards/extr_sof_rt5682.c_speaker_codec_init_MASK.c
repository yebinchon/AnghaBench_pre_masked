
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int dev; struct snd_soc_card* card; } ;
struct snd_soc_card {int dapm; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct snd_soc_pcm_runtime *VAR_1)
{
 struct snd_soc_card *VAR_2 = VAR_1->card;
 int VAR_3;

 VAR_3 = FUNC_2(&VAR_2->dapm, VAR_0,
          FUNC_0(VAR_0));

 if (VAR_3)
  FUNC_1(VAR_1->dev, "Speaker map addition failed: %d\n", VAR_3);
 return VAR_3;
}
