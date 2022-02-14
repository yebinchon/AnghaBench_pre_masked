
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_i2s_info {int dai_wclk; scalar_t__ master; scalar_t__ reg_base; } ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_dmaengine_dai_dma_data {unsigned int addr_width; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;



 unsigned long FUNC_0 (unsigned int) ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long FUNC_1 (unsigned int) ;
 unsigned long VAR_4 ;
 unsigned long FUNC_2 (unsigned int) ;
 unsigned long VAR_5 ;
 unsigned long FUNC_3 (unsigned long) ;
 unsigned long VAR_6 ;
 unsigned long FUNC_4 (unsigned int) ;
 unsigned long VAR_7 ;
 unsigned int FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (int ,char*,...) ;
 unsigned int FUNC_7 (struct snd_pcm_hw_params*) ;
 int FUNC_8 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_9 (struct snd_pcm_hw_params*) ;
 unsigned long FUNC_10 (scalar_t__) ;
 struct snd_dmaengine_dai_dma_data* FUNC_11 (struct snd_soc_dai*,struct snd_pcm_substream*) ;
 struct zx_i2s_info* FUNC_12 (struct snd_soc_dai*) ;
 int FUNC_13 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_14(struct snd_pcm_substream *VAR_8,
       struct snd_pcm_hw_params *VAR_9,
       struct snd_soc_dai *VAR_10)
{
 struct zx_i2s_info *VAR_11 = FUNC_12(VAR_10);
 struct snd_dmaengine_dai_dma_data *VAR_12;
 unsigned int VAR_13, VAR_14, VAR_15, VAR_16 = 0;
 unsigned int VAR_17 = 32;
 unsigned long VAR_18;
 unsigned long VAR_19;

 VAR_12 = FUNC_11(VAR_10, VAR_8);
 VAR_12->addr_width = VAR_17 >> 3;

 VAR_18 = FUNC_10(VAR_11->reg_base + VAR_3);
 VAR_18 &= ~(VAR_7 | VAR_4 |
  VAR_5 | VAR_2 |
  VAR_6);

 switch (FUNC_8(VAR_9)) {
 case 130:
  VAR_15 = 16;
  break;
 case 129:
  VAR_15 = 24;
  break;
 case 128:
  VAR_15 = 32;
  break;
 default:
  FUNC_6(VAR_10->dev, "Unknown data format\n");
  return -VAR_1;
 }
 VAR_18 |= FUNC_4(VAR_17) | FUNC_1(VAR_15);

 VAR_14 = FUNC_7(VAR_9);
 switch (VAR_14) {
 case 1:
  VAR_13 = 1;
  VAR_19 = 2;
  break;
 case 2:
 case 4:
 case 6:
 case 8:
  VAR_13 = VAR_14 / 2;
  VAR_19 = 3;
  break;
 default:
  FUNC_6(VAR_10->dev, "Not support channel num %d\n", VAR_14);
  return -VAR_1;
 }
 VAR_18 |= FUNC_2(VAR_13);
 VAR_18 |= FUNC_3(VAR_19);
 VAR_18 |= FUNC_0(VAR_14);
 FUNC_13(VAR_18, VAR_11->reg_base + VAR_3);

 if (VAR_11->master)
  VAR_16 = FUNC_5(VAR_11->dai_wclk,
    FUNC_9(VAR_9) * VAR_14 * VAR_0);

 return VAR_16;
}
