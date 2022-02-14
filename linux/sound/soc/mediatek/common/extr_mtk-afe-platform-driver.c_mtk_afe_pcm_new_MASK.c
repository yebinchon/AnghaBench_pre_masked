
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_pcm* pcm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm {int dummy; } ;
struct mtk_base_afe {int dev; TYPE_1__* mtk_afe_hardware; } ;
struct TYPE_2__ {size_t buffer_bytes_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_pcm*,int ,int ,size_t,size_t) ;
 struct mtk_base_afe* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (struct snd_soc_pcm_runtime*,int ) ;

int FUNC_3(struct snd_soc_pcm_runtime *VAR_2)
{
 size_t VAR_3;
 struct snd_pcm *VAR_4 = VAR_2->pcm;
 struct snd_soc_component *VAR_5 = FUNC_2(VAR_2, VAR_0);
 struct mtk_base_afe *VAR_6 = FUNC_1(VAR_5);

 VAR_3 = VAR_6->mtk_afe_hardware->buffer_bytes_max;
 FUNC_0(VAR_4, VAR_1,
           VAR_6->dev, VAR_3, VAR_3);
 return 0;
}
