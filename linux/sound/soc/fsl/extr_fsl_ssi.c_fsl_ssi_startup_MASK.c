
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct fsl_ssi {scalar_t__ use_dual_fifo; int clk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 struct fsl_ssi* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1,
      struct snd_soc_dai *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_1->private_data;
 struct fsl_ssi *VAR_4 = FUNC_2(VAR_3->cpu_dai);
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4->clk);
 if (VAR_5)
  return VAR_5;







 if (VAR_4->use_dual_fifo)
  FUNC_1(VAR_1->runtime, 0,
        VAR_0, 2);

 return 0;
}
