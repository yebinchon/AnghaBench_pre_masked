
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (int ,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1,
           struct snd_pcm_hw_params *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_1->private_data;
 unsigned int VAR_4 = FUNC_0(VAR_2);
 unsigned int VAR_5 = 128;
 unsigned int VAR_6 = VAR_4 * VAR_5;

 return FUNC_1(VAR_3->cpu_dai,
          0, VAR_6, VAR_0);
}
