
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
 int FUNC_1 (struct snd_soc_dapm_context*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_pcm_runtime *VAR_1)
{
 struct snd_soc_dapm_context *VAR_2 = &VAR_1->card->dapm;

 return FUNC_1(VAR_2, VAR_0,
    FUNC_0(VAR_0));
}
