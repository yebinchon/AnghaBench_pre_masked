
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_soc_card {TYPE_1__* dai_link; } ;
struct TYPE_2__ {int name; } ;


 struct snd_soc_pcm_runtime* FUNC_0 (struct snd_soc_card*,int ) ;
 int FUNC_1 (struct snd_soc_component*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_card *VAR_0)
{
 struct snd_soc_pcm_runtime *VAR_1 =
  FUNC_0(VAR_0, VAR_0->dai_link[0].name);
 struct snd_soc_dai *VAR_2 = VAR_1->codec_dai;
 struct snd_soc_component *VAR_3 = VAR_2->component;

 FUNC_1(VAR_3, ((void*)0), 0, 0);

 return 0;
}
