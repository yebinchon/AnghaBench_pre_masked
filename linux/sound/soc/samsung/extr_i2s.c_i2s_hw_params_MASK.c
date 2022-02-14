
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct samsung_i2s_priv {int rclk_srcrate; struct clk** clk_table; int lock; scalar_t__ addr; } ;
struct TYPE_6__ {int addr_width; } ;
struct TYPE_5__ {int addr_width; } ;
struct i2s_dai {int frmclk; TYPE_3__ dma_capture; TYPE_2__ dma_playback; TYPE_1__* pdev; } ;
struct clk {int dummy; } ;
struct TYPE_4__ {int dev; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct clk*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (int *,char*,int) ;
 scalar_t__ FUNC_4 (struct i2s_dai*) ;
 scalar_t__ FUNC_5 (struct i2s_dai*) ;
 int FUNC_6 (struct snd_pcm_hw_params*) ;
 int FUNC_7 (struct snd_pcm_hw_params*) ;
 int FUNC_8 (struct snd_pcm_hw_params*) ;
 int FUNC_9 (struct snd_pcm_hw_params*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__) ;
 struct samsung_i2s_priv* FUNC_12 (struct snd_soc_dai*) ;
 int FUNC_13 (struct snd_soc_dai*,TYPE_2__*,TYPE_3__*) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 struct i2s_dai* FUNC_16 (struct snd_soc_dai*) ;
 int FUNC_17 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_18(struct snd_pcm_substream *VAR_18,
 struct snd_pcm_hw_params *VAR_19, struct snd_soc_dai *VAR_20)
{
 struct samsung_i2s_priv *VAR_21 = FUNC_12(VAR_20);
 struct i2s_dai *VAR_22 = FUNC_16(VAR_20);
 u32 VAR_23, VAR_24 = 0, VAR_25 = 0;
 struct clk *VAR_26;
 unsigned long VAR_27;

 FUNC_1(!FUNC_10(VAR_20->dev));

 if (!FUNC_5(VAR_22))
  VAR_24 |= (VAR_16 | VAR_15);

 switch (FUNC_6(VAR_19)) {
 case 6:
  VAR_25 |= VAR_16;

 case 4:
  VAR_25 |= VAR_15;
  break;
 case 2:
  if (VAR_18->stream == VAR_17)
   VAR_22->dma_playback.addr_width = 4;
  else
   VAR_22->dma_capture.addr_width = 4;
  break;
 case 1:
  if (VAR_18->stream == VAR_17)
   VAR_22->dma_playback.addr_width = 2;
  else
   VAR_22->dma_capture.addr_width = 2;

  break;
 default:
  FUNC_3(&VAR_22->pdev->dev, "%d channels not supported\n",
    FUNC_6(VAR_19));
  return -VAR_1;
 }

 if (FUNC_5(VAR_22))
  VAR_24 |= VAR_10;
 else
  VAR_24 |= VAR_6;

 if (FUNC_4(VAR_22))
  VAR_24 |= VAR_14;

 switch (FUNC_9(VAR_19)) {
 case 8:
  if (FUNC_5(VAR_22))
   VAR_25 |= VAR_9;
  else
   VAR_25 |= VAR_5;
  if (FUNC_4(VAR_22))
   VAR_25 |= VAR_13;
  break;
 case 16:
  if (FUNC_5(VAR_22))
   VAR_25 |= VAR_7;
  else
   VAR_25 |= VAR_3;
  if (FUNC_4(VAR_22))
   VAR_25 |= VAR_11;
  break;
 case 24:
  if (FUNC_5(VAR_22))
   VAR_25 |= VAR_8;
  else
   VAR_25 |= VAR_4;
  if (FUNC_4(VAR_22))
   VAR_25 |= VAR_12;
  break;
 default:
  FUNC_3(&VAR_22->pdev->dev, "Format(%d) not supported\n",
    FUNC_7(VAR_19));
  return -VAR_1;
 }

 FUNC_14(&VAR_21->lock, VAR_27);
 VAR_23 = FUNC_11(VAR_21->addr + VAR_2);
 VAR_23 = (VAR_23 & ~VAR_24) | VAR_25;
 FUNC_17(VAR_23, VAR_21->addr + VAR_2);
 FUNC_15(&VAR_21->lock, VAR_27);

 FUNC_13(VAR_20, &VAR_22->dma_playback, &VAR_22->dma_capture);

 VAR_22->frmclk = FUNC_8(VAR_19);

 VAR_26 = VAR_21->clk_table[VAR_0];
 if (VAR_26 && !FUNC_0(VAR_26))
  VAR_21->rclk_srcrate = FUNC_2(VAR_26);

 return 0;
}
