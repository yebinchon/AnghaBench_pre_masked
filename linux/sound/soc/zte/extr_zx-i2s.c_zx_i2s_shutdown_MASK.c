
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_i2s_info {int dai_pclk; int dai_wclk; } ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int dummy; } ;


 int FUNC_0 (int ) ;
 struct zx_i2s_info* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_substream *VAR_0,
       struct snd_soc_dai *VAR_1)
{
 struct zx_i2s_info *VAR_2 = FUNC_1(VAR_1->dev);

 FUNC_0(VAR_2->dai_wclk);
 FUNC_0(VAR_2->dai_pclk);
}
