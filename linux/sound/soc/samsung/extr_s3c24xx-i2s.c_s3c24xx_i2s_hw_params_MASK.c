
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_dmaengine_dai_dma_data {int addr_width; } ;
struct TYPE_2__ {scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_1__ VAR_3 ;
 struct snd_dmaengine_dai_dma_data* FUNC_3 (struct snd_soc_dai*,struct snd_pcm_substream*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_4,
     struct snd_pcm_hw_params *VAR_5,
     struct snd_soc_dai *VAR_6)
{
 struct snd_dmaengine_dai_dma_data *VAR_7;
 u32 VAR_8;

 VAR_7 = FUNC_3(VAR_6, VAR_4);


 VAR_8 = FUNC_2(VAR_3.regs + VAR_1);
 FUNC_1("hw_params r: IISMOD: %x\n", VAR_8);

 switch (FUNC_0(VAR_5)) {
 case 8:
  VAR_8 &= ~VAR_2;
  VAR_7->addr_width = 1;
  break;
 case 16:
  VAR_8 |= VAR_2;
  VAR_7->addr_width = 2;
  break;
 default:
  return -VAR_0;
 }

 FUNC_4(VAR_8, VAR_3.regs + VAR_1);
 FUNC_1("hw_params w: IISMOD: %x\n", VAR_8);

 return 0;
}
