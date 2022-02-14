
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* cpu_dai; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct mtk_base_afe {int dev; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int,int) ;
 struct mtk_base_afe* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1,
      unsigned int VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_1->private_data;
 struct snd_soc_component *VAR_4 =
  FUNC_2(VAR_3, VAR_0);
 struct mtk_base_afe *VAR_5 = FUNC_1(VAR_4);
 int VAR_6 = VAR_3->cpu_dai->id;

 return FUNC_0(VAR_5->dev, VAR_2, VAR_6);
}
