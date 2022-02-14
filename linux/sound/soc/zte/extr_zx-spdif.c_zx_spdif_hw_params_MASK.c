
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zx_spdif_info {int dai_clk; scalar_t__ reg_base; } ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_dmaengine_dai_dma_data {int addr_width; } ;


 int VAR_0 ;




 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*) ;
 struct zx_spdif_info* FUNC_2 (int ) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (struct snd_pcm_hw_params*) ;
 int FUNC_7 (scalar_t__) ;
 struct snd_dmaengine_dai_dma_data* FUNC_8 (struct snd_soc_dai*,struct snd_pcm_substream*) ;
 struct zx_spdif_info* FUNC_9 (struct snd_soc_dai*) ;
 int FUNC_10 (int,scalar_t__) ;
 int FUNC_11 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_12(struct snd_pcm_substream *VAR_14,
         struct snd_pcm_hw_params *VAR_15,
         struct snd_soc_dai *VAR_16)
{
 struct zx_spdif_info *VAR_17 = FUNC_2(VAR_16->dev);
 struct zx_spdif_info *VAR_18 = FUNC_9(VAR_16);
 struct snd_dmaengine_dai_dma_data *VAR_19 =
  FUNC_8(VAR_16, VAR_14);
 u32 VAR_20, VAR_21, VAR_22;
 int VAR_23;

 VAR_19->addr_width = FUNC_6(VAR_15) >> 3;

 VAR_20 = FUNC_7(VAR_17->reg_base + VAR_1);
 VAR_20 &= ~VAR_8;
 switch (FUNC_4(VAR_15)) {
 case 131:
  VAR_20 |= VAR_4;
  break;

 case 130:
  VAR_20 |= VAR_5;
  break;

 case 129:
  VAR_20 |= VAR_6;
  break;

 case 128:
  VAR_20 |= VAR_7;
  break;
 default:
  FUNC_1(VAR_16->dev, "Format not support!\n");
  return -VAR_0;
 }

 VAR_21 = FUNC_3(VAR_15);
 if (VAR_21 == 2)
  VAR_20 |= VAR_2;
 else
  VAR_20 |= VAR_3;
 FUNC_10(VAR_20, VAR_17->reg_base + VAR_1);

 VAR_20 = FUNC_7(VAR_17->reg_base + VAR_10);
 VAR_20 &= ~VAR_13;
 if (VAR_21 == 2)
  VAR_20 |= VAR_11;
 else
  VAR_20 |= VAR_12;
 FUNC_10(VAR_20, VAR_17->reg_base + VAR_10);

 VAR_22 = FUNC_5(VAR_15);
 VAR_23 = FUNC_11(VAR_17->reg_base, VAR_22);
 if (VAR_23)
  return VAR_23;
 return FUNC_0(VAR_18->dai_clk, VAR_22 * VAR_21 * VAR_9);
}
