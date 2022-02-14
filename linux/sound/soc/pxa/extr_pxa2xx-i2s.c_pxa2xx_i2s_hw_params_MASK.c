
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_dmaengine_dai_dma_data {int dummy; } ;
struct TYPE_2__ {int fmt; scalar_t__ master; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 struct snd_dmaengine_dai_dma_data VAR_12 ;
 struct snd_dmaengine_dai_dma_data VAR_13 ;
 TYPE_1__ VAR_14 ;
 int FUNC_6 () ;
 int FUNC_7 (struct snd_soc_dai*,struct snd_pcm_substream*,struct snd_dmaengine_dai_dma_data*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_15,
    struct snd_pcm_hw_params *VAR_16,
    struct snd_soc_dai *VAR_17)
{
 struct snd_dmaengine_dai_dma_data *VAR_18;

 if (FUNC_3(FUNC_0(VAR_11)))
  return -VAR_0;
 FUNC_4(VAR_11);
 VAR_10 = 1;
 FUNC_6();

 if (VAR_15->stream == VAR_9)
  VAR_18 = &VAR_13;
 else
  VAR_18 = &VAR_12;

 FUNC_7(VAR_17, VAR_15, VAR_18);


 if (!(VAR_1 & VAR_3)) {
  VAR_1 = 0;
  if (VAR_14.master)
   VAR_1 |= VAR_2;

  VAR_1 |= FUNC_1(14) | FUNC_2(1);
  VAR_4 |= VAR_14.fmt;
 }
 if (VAR_15->stream == VAR_9)
  VAR_6 |= VAR_8;
 else
  VAR_6 |= VAR_7;

 switch (FUNC_5(VAR_16)) {
 case 8000:
  VAR_5 = 0x48;
  break;
 case 11025:
  VAR_5 = 0x34;
  break;
 case 16000:
  VAR_5 = 0x24;
  break;
 case 22050:
  VAR_5 = 0x1a;
  break;
 case 44100:
  VAR_5 = 0xd;
  break;
 case 48000:
  VAR_5 = 0xc;
  break;
 case 96000:
  VAR_5 = 0x6;
  break;
 }

 return 0;
}
