
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* card; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct TYPE_2__ {struct snd_soc_dapm_context dapm; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,char*,int ,int *,int ,int ) ;
 int FUNC_2 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_pcm_runtime *VAR_4)
{
 struct snd_soc_dapm_context *VAR_5 = &VAR_4->card->dapm;
 int VAR_6 = 0;


 FUNC_2(VAR_5, "LINPUT1");
 FUNC_2(VAR_5, "RINPUT1");
 FUNC_2(VAR_5, "OUT3");
 FUNC_2(VAR_5, "ROUT1");


 VAR_6 = FUNC_1(VAR_4->card, "Headphone Jack",
        VAR_0, &VAR_1,
        VAR_3,
        FUNC_0(VAR_3));
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(&VAR_1,
         FUNC_0(VAR_2),
         VAR_2);

 return VAR_6;
}
