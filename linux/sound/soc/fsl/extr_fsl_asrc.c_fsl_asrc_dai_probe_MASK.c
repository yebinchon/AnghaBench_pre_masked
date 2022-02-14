
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct fsl_asrc {int dma_params_rx; int dma_params_tx; } ;


 struct fsl_asrc* FUNC_0 (struct snd_soc_dai*) ;
 int FUNC_1 (struct snd_soc_dai*,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_0)
{
 struct fsl_asrc *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0, &VAR_1->dma_params_tx,
      &VAR_1->dma_params_rx);

 return 0;
}
