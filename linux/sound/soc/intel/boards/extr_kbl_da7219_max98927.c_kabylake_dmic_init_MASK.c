
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int dev; TYPE_1__* card; } ;
struct TYPE_2__ {int dapm; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_pcm_runtime *VAR_0)
{
 int VAR_1;
 VAR_1 = FUNC_1(&VAR_0->card->dapm, "SoC DMIC");
 if (VAR_1)
  FUNC_0(VAR_0->dev, "SoC DMIC - Ignore suspend failed %d\n", VAR_1);

 return VAR_1;
}
