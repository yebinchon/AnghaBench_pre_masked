
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct fsl_ssi {int clk; } ;


 int FUNC_0 (int ) ;
 struct fsl_ssi* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_substream *VAR_0,
        struct snd_soc_dai *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_0->private_data;
 struct fsl_ssi *VAR_3 = FUNC_1(VAR_2->cpu_dai);

 FUNC_0(VAR_3->clk);
}
