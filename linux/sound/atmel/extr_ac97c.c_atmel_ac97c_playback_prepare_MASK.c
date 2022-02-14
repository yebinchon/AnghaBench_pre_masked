
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; int format; int rate; int dma_addr; int period_size; } ;
struct atmel_ac97c {int opened; scalar_t__ regs; TYPE_1__* pdev; int ac97; scalar_t__ playback_period; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ,int ) ;
 unsigned long FUNC_1 (int ) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;


 unsigned long FUNC_2 (struct atmel_ac97c*,int ) ;
 int FUNC_3 (struct atmel_ac97c*,int ,unsigned long) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (struct snd_pcm_runtime*,int ) ;
 int FUNC_6 (int ,int ,int) ;
 struct atmel_ac97c* FUNC_7 (struct snd_pcm_substream*) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_20)
{
 struct atmel_ac97c *VAR_21 = FUNC_7(VAR_20);
 struct snd_pcm_runtime *VAR_22 = VAR_20->runtime;
 int VAR_23 = FUNC_5(VAR_22, VAR_22->period_size);
 unsigned long VAR_24 = FUNC_2(VAR_21, VAR_17);
 int VAR_25;

 VAR_21->playback_period = 0;
 VAR_24 &= ~(FUNC_1(VAR_18) | FUNC_1(VAR_19));


 switch (VAR_22->channels) {
 case 1:
  VAR_24 |= FUNC_0(VAR_18, VAR_0);
  break;
 case 2:
  VAR_24 |= FUNC_0(VAR_18, VAR_0)
   | FUNC_0(VAR_19, VAR_0);
  break;
 default:

  return -VAR_13;
 }
 FUNC_3(VAR_21, VAR_17, VAR_24);


 VAR_24 = FUNC_2(VAR_21, VAR_12);
 if (VAR_21->opened <= 1)
  VAR_24 = VAR_2 | VAR_3;
 else
  VAR_24 |= VAR_2 | VAR_3;

 switch (VAR_22->format) {
 case 128:
  break;
 case 129:
  VAR_24 &= ~(VAR_1);
  break;
 default:
  VAR_24 = FUNC_2(VAR_21, VAR_17);
  VAR_24 &= ~(FUNC_1(VAR_18) | FUNC_1(VAR_19));
  FUNC_3(VAR_21, VAR_17, VAR_24);
  return -VAR_13;
 }


 VAR_24 |= VAR_4;

 FUNC_3(VAR_21, VAR_12, VAR_24);


 VAR_24 = FUNC_2(VAR_21, VAR_15);
 VAR_24 |= VAR_6;
 FUNC_3(VAR_21, VAR_14, VAR_24);


 if (VAR_22->rate != 48000) {
  VAR_24 = FUNC_2(VAR_21, VAR_16);
  VAR_24 |= VAR_5;
  FUNC_3(VAR_21, VAR_16, VAR_24);
 } else {
  VAR_24 = FUNC_2(VAR_21, VAR_16);
  VAR_24 &= ~(VAR_5);
  FUNC_3(VAR_21, VAR_16, VAR_24);
 }

 VAR_25 = FUNC_6(VAR_21->ac97, VAR_7,
   VAR_22->rate);
 if (VAR_25)
  FUNC_4(&VAR_21->pdev->dev, "could not set rate %d Hz\n",
    VAR_22->rate);


 FUNC_8(VAR_22->dma_addr, VAR_21->regs + VAR_11);
 FUNC_8(VAR_23 / 2, VAR_21->regs + VAR_8);
 FUNC_8(VAR_22->dma_addr + VAR_23, VAR_21->regs + VAR_10);
 FUNC_8(VAR_23 / 2, VAR_21->regs + VAR_9);

 return VAR_25;
}
