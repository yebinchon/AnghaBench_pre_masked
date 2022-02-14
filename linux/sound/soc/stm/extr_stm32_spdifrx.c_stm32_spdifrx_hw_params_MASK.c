
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int addr_width; } ;
struct stm32_spdifrx_data {int regmap; TYPE_2__ dma_params; TYPE_1__* pdev; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 struct stm32_spdifrx_data* FUNC_4 (struct snd_soc_dai*) ;
 int FUNC_5 (struct snd_soc_dai*,int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_6,
       struct snd_pcm_hw_params *VAR_7,
       struct snd_soc_dai *VAR_8)
{
 struct stm32_spdifrx_data *VAR_9 = FUNC_4(VAR_8);
 int VAR_10 = FUNC_2(VAR_7);
 int VAR_11;

 switch (VAR_10) {
 case 16:
  VAR_11 = VAR_4;
  break;
 case 32:
  VAR_11 = VAR_3;
  break;
 default:
  FUNC_1(&VAR_9->pdev->dev, "Unexpected data format\n");
  return -VAR_1;
 }






 VAR_9->dma_params.addr_width = VAR_0;
 FUNC_5(VAR_8, ((void*)0), &VAR_9->dma_params);

 return FUNC_3(VAR_9->regmap, VAR_5,
      VAR_2,
      FUNC_0(VAR_11));
}
