
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_spdifrx_data {TYPE_1__* pdev; int kclk; struct snd_pcm_substream* substream; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 struct stm32_spdifrx_data* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0,
     struct snd_soc_dai *VAR_1)
{
 struct stm32_spdifrx_data *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 VAR_2->substream = VAR_0;

 VAR_3 = FUNC_0(VAR_2->kclk);
 if (VAR_3)
  FUNC_1(&VAR_2->pdev->dev, "Enable kclk failed: %d\n", VAR_3);

 return VAR_3;
}
