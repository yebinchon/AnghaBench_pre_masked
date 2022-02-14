
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* cpu_dai; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct mtk_base_afe_memif {TYPE_2__* data; } ;
struct mtk_base_afe {struct mtk_base_afe_memif* memif; } ;
struct TYPE_4__ {scalar_t__ id; } ;
struct TYPE_3__ {size_t id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (unsigned int) ;
 struct mtk_base_afe* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_4,
      unsigned int VAR_5)
{
 struct snd_soc_pcm_runtime *VAR_6 = VAR_4->private_data;
 struct snd_soc_component *VAR_7 = FUNC_2(VAR_6, VAR_0);
 struct mtk_base_afe *VAR_8 = FUNC_1(VAR_7);
 struct mtk_base_afe_memif *VAR_9 = &VAR_8->memif[VAR_6->cpu_dai->id];
 int VAR_10;

 if (VAR_9->data->id == VAR_2 ||
     VAR_9->data->id == VAR_3) {
  switch (VAR_5) {
  case 8000:
   VAR_10 = 0;
   break;
  case 16000:
   VAR_10 = 1;
   break;
  case 32000:
   VAR_10 = 2;
   break;
  default:
   return -VAR_1;
  }
 } else {
  VAR_10 = FUNC_0(VAR_5);
 }
 return VAR_10;
}
