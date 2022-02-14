
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sspa_priv {struct snd_dmaengine_dai_dma_data* dma_params; struct ssp_device* sspa; } ;
struct ssp_device {scalar_t__ phys_base; } ;
struct snd_soc_pcm_runtime {struct snd_soc_dai* cpu_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {size_t stream; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_dmaengine_dai_dma_data {scalar_t__ addr; } ;


 int VAR_0 ;





 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct ssp_device*,int ) ;
 int FUNC_4 (struct ssp_device*,int ,int) ;
 scalar_t__ FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (struct snd_pcm_hw_params*) ;
 struct sspa_priv* FUNC_7 (struct snd_soc_dai*) ;
 int FUNC_8 (struct snd_soc_dai*,struct snd_pcm_substream*,struct snd_dmaengine_dai_dma_data*) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_16,
          struct snd_pcm_hw_params *VAR_17,
          struct snd_soc_dai *VAR_18)
{
 struct snd_soc_pcm_runtime *VAR_19 = VAR_16->private_data;
 struct snd_soc_dai *VAR_20 = VAR_19->cpu_dai;
 struct sspa_priv *VAR_21 = FUNC_7(VAR_18);
 struct ssp_device *VAR_22 = VAR_21->sspa;
 struct snd_dmaengine_dai_dma_data *VAR_23;
 u32 VAR_24;

 if (VAR_16->stream == VAR_1)
  VAR_24 = FUNC_3(VAR_22, VAR_13);
 else
  VAR_24 = FUNC_3(VAR_22, VAR_10);

 VAR_24 &= ~VAR_7;
 VAR_24 |= FUNC_0(FUNC_5(VAR_17) - 1);
 VAR_24 &= ~VAR_9;
 VAR_24 |= FUNC_2(VAR_5);
 VAR_24 &= ~VAR_8;

 switch (FUNC_6(VAR_17)) {
 case 128:
  VAR_24 |= FUNC_1(VAR_6);
  break;
 case 132:
  VAR_24 |= FUNC_1(VAR_2);
  break;
 case 131:
  VAR_24 |= FUNC_1(VAR_3);
  break;
 case 130:
  VAR_24 |= FUNC_1(VAR_4);
  break;
 case 129:
  VAR_24 |= FUNC_1(VAR_5);
  break;
 default:
  return -VAR_0;
 }

 if (VAR_16->stream == VAR_1) {
  FUNC_4(VAR_22, VAR_13, VAR_24);
  FUNC_4(VAR_22, VAR_15, 0x1);
 } else {
  FUNC_4(VAR_22, VAR_10, VAR_24);
  FUNC_4(VAR_22, VAR_12, 0x0);
 }

 VAR_23 = &VAR_21->dma_params[VAR_16->stream];
 VAR_23->addr = VAR_16->stream == VAR_1 ?
    (VAR_22->phys_base + VAR_14) :
    (VAR_22->phys_base + VAR_11);
 FUNC_8(VAR_20, VAR_16, VAR_23);
 return 0;
}
