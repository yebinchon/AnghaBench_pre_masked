
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_spdifrx_data {int kclk; int * substream; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;


 int FUNC_0 (int ) ;
 struct stm32_spdifrx_data* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_substream *VAR_0,
       struct snd_soc_dai *VAR_1)
{
 struct stm32_spdifrx_data *VAR_2 = FUNC_1(VAR_1);

 VAR_2->substream = ((void*)0);
 FUNC_0(VAR_2->kclk);
}
