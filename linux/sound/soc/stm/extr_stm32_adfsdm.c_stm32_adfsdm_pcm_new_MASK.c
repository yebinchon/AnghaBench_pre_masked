
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_adfsdm_priv {int dev; } ;
struct snd_soc_pcm_runtime {int cpu_dai; struct snd_pcm* pcm; } ;
struct snd_pcm {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_pcm*,int ,int ,unsigned int,unsigned int) ;
 struct stm32_adfsdm_priv* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_pcm_runtime *VAR_3)
{
 struct snd_pcm *VAR_4 = VAR_3->pcm;
 struct stm32_adfsdm_priv *VAR_5 =
  FUNC_1(VAR_3->cpu_dai);
 unsigned int VAR_6 = VAR_0 * VAR_1;

 FUNC_0(VAR_4, VAR_2,
           VAR_5->dev, VAR_6, VAR_6);
 return 0;
}
