
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_i2s_info {int dai_wclk; int dai_pclk; } ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct zx_i2s_info* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0,
     struct snd_soc_dai *VAR_1)
{
 struct zx_i2s_info *VAR_2 = FUNC_2(VAR_1->dev);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->dai_wclk);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_2->dai_pclk);
 if (VAR_3) {
  FUNC_0(VAR_2->dai_wclk);
  return VAR_3;
 }

 return VAR_3;
}
