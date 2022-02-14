
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct dmaengine_pcm {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dmaengine_pcm*) ;
 int FUNC_1 (struct dmaengine_pcm*) ;
 struct snd_soc_component* FUNC_2 (struct device*,int ) ;
 int FUNC_3 (struct device*) ;
 struct dmaengine_pcm* FUNC_4 (struct snd_soc_component*) ;

void FUNC_5(struct device *VAR_1)
{
 struct snd_soc_component *VAR_2;
 struct dmaengine_pcm *VAR_3;

 VAR_2 = FUNC_2(VAR_1, VAR_0);
 if (!VAR_2)
  return;

 VAR_3 = FUNC_4(VAR_2);

 FUNC_3(VAR_1);
 FUNC_0(VAR_3);
 FUNC_1(VAR_3);
}
