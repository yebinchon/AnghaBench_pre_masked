
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {struct snd_soc_dai* cpu_dai; } ;
struct snd_soc_dai {int active; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_2,
         struct snd_soc_dai *VAR_3)
{
 struct snd_soc_pcm_runtime *VAR_4 = VAR_2->private_data;
 struct snd_soc_dai *VAR_5 = VAR_4->cpu_dai;

 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);

 if (!VAR_5->active)
  VAR_0 = 0;

 return 0;
}
