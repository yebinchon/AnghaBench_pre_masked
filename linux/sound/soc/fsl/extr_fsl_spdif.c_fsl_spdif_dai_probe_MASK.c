
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct fsl_spdif_priv {int dma_params_rx; int dma_params_tx; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct snd_soc_dai*,int ,int ) ;
 struct fsl_spdif_priv* FUNC_2 (struct snd_soc_dai*) ;
 int FUNC_3 (struct snd_soc_dai*,int *,int *) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_1)
{
 struct fsl_spdif_priv *VAR_2 = FUNC_2(VAR_1);

 FUNC_3(VAR_1, &VAR_2->dma_params_tx,
      &VAR_2->dma_params_rx);

 FUNC_1(VAR_1, VAR_0, FUNC_0(VAR_0));

 return 0;
}
