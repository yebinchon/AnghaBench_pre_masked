
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_pcm_runtime {int periods; int dma_addr; int period_size; } ;
struct atmel_ac97c {int playback_period; int capture_period; TYPE_1__* pdev; TYPE_2__* capture_substream; scalar_t__ regs; TYPE_2__* playback_substream; } ;
typedef scalar_t__ irqreturn_t ;
struct TYPE_4__ {struct snd_pcm_runtime* runtime; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct atmel_ac97c*,int ) ;
 int FUNC_1 (int *,char*,char*,char*,char*,char*,char*,char*) ;
 int FUNC_2 (int *,char*,int,int,int) ;
 int FUNC_3 (int *,char*,char*,char*,char*,char*,char*) ;
 int FUNC_4 (struct snd_pcm_runtime*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_19, void *VAR_20)
{
 struct atmel_ac97c *VAR_21 = (struct atmel_ac97c *)VAR_20;
 irqreturn_t VAR_22 = VAR_17;
 u32 VAR_23 = FUNC_0(VAR_21, VAR_18);
 u32 VAR_24 = FUNC_0(VAR_21, VAR_14);
 u32 VAR_25 = FUNC_0(VAR_21, VAR_15);
 u32 VAR_26 = FUNC_0(VAR_21, VAR_13);

 if (VAR_23 & VAR_7) {
  struct snd_pcm_runtime *VAR_27;
  int VAR_28, VAR_29, VAR_30;
  FUNC_1(&VAR_21->pdev->dev, "channel A event%s%s%s%s%s%s\n",
    VAR_24 & VAR_2 ? " OVRUN" : "",
    VAR_24 & VAR_3 ? " RXRDY" : "",
    VAR_24 & VAR_6 ? " UNRUN" : "",
    VAR_24 & VAR_4 ? " TXEMPTY" : "",
    VAR_24 & VAR_5 ? " TXRDY" : "",
    !VAR_24 ? " NONE" : "");
  if ((VAR_24 & VAR_26) & VAR_1) {
   VAR_27 = VAR_21->playback_substream->runtime;
   VAR_30 = FUNC_4(VAR_27, VAR_27->period_size);
   VAR_21->playback_period++;

   if (VAR_21->playback_period == VAR_27->periods)
    VAR_21->playback_period = 0;
   VAR_29 = VAR_21->playback_period + 1;
   if (VAR_29 == VAR_27->periods)
    VAR_29 = 0;

   VAR_28 = VAR_30 * VAR_29;

   FUNC_6(VAR_27->dma_addr + VAR_28, VAR_21->regs + VAR_12);
   FUNC_6(VAR_30 / 2, VAR_21->regs + VAR_11);

   FUNC_5(VAR_21->playback_substream);
  }
  if ((VAR_24 & VAR_26) & VAR_0) {
   VAR_27 = VAR_21->capture_substream->runtime;
   VAR_30 = FUNC_4(VAR_27, VAR_27->period_size);
   VAR_21->capture_period++;

   if (VAR_21->capture_period == VAR_27->periods)
    VAR_21->capture_period = 0;
   VAR_29 = VAR_21->capture_period + 1;
   if (VAR_29 == VAR_27->periods)
    VAR_29 = 0;

   VAR_28 = VAR_30 * VAR_29;

   FUNC_6(VAR_27->dma_addr + VAR_28, VAR_21->regs + VAR_10);
   FUNC_6(VAR_30 / 2, VAR_21->regs + VAR_9);
   FUNC_5(VAR_21->capture_substream);
  }
  VAR_22 = VAR_16;
 }

 if (VAR_23 & VAR_8) {
  FUNC_3(&VAR_21->pdev->dev, "codec channel event%s%s%s%s%s\n",
    VAR_25 & VAR_2 ? " OVRUN" : "",
    VAR_25 & VAR_3 ? " RXRDY" : "",
    VAR_25 & VAR_4 ? " TXEMPTY" : "",
    VAR_25 & VAR_5 ? " TXRDY" : "",
    !VAR_25 ? " NONE" : "");
  VAR_22 = VAR_16;
 }

 if (VAR_22 == VAR_17) {
  FUNC_2(&VAR_21->pdev->dev, "spurious interrupt sr 0x%08x "
    "casr 0x%08x cosr 0x%08x\n", VAR_23, VAR_24, VAR_25);
 }

 return VAR_22;
}
