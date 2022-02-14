
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snd_soc_dai {int id; int dev; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int no_period_wakeup; } ;
struct kirkwood_dma_data {int ctl_play; scalar_t__ io; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;






 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 struct kirkwood_dma_data* FUNC_3 (struct snd_soc_dai*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_11,
    int VAR_12, struct snd_soc_dai *VAR_13)
{
 struct snd_pcm_runtime *VAR_14 = VAR_11->runtime;
 struct kirkwood_dma_data *VAR_15 = FUNC_3(VAR_13);
 uint32_t VAR_16, VAR_17;

 VAR_16 = FUNC_2(VAR_15->io + VAR_3);
 if ((VAR_16 & VAR_4) == 0) {
  unsigned VAR_18 = 5000;





  do {
   VAR_17 = VAR_16;
   VAR_16 = FUNC_2(VAR_15->io + VAR_3);
   if (!((VAR_16 | VAR_17) & VAR_8))
    break;
   FUNC_4(1);
  } while (VAR_18--);

  if ((VAR_16 | VAR_17) & VAR_8)
   FUNC_0(VAR_13->dev, "timed out waiting for busy to deassert: %08x\n",
       VAR_16);
 }

 switch (VAR_12) {
 case 130:

  VAR_16 = VAR_15->ctl_play;
  if (VAR_13->id == 0)
   VAR_16 &= ~VAR_9;
  else
   VAR_16 &= ~VAR_5;
  VAR_16 = FUNC_1(VAR_16);
  VAR_17 = VAR_16 & ~VAR_4;
  FUNC_5(VAR_17, VAR_15->io + VAR_3);


  if (!VAR_14->no_period_wakeup) {
   VAR_17 = FUNC_2(VAR_15->io + VAR_2);
   VAR_17 |= VAR_1;
   FUNC_5(VAR_17, VAR_15->io + VAR_2);
  }


  FUNC_5(VAR_16, VAR_15->io + VAR_3);
  break;

 case 129:

  VAR_16 |= VAR_7 | VAR_6 |
    VAR_10;
  FUNC_5(VAR_16, VAR_15->io + VAR_3);

  VAR_17 = FUNC_2(VAR_15->io + VAR_2);
  VAR_17 &= ~VAR_1;
  FUNC_5(VAR_17, VAR_15->io + VAR_2);


  VAR_16 &= ~VAR_4;
  FUNC_5(VAR_16, VAR_15->io + VAR_3);
  break;

 case 133:
 case 128:
  VAR_16 |= VAR_7 | VAR_6 |
    VAR_10;
  FUNC_5(VAR_16, VAR_15->io + VAR_3);
  break;

 case 131:
 case 132:
  VAR_16 &= ~(VAR_7 | VAR_6 |
    VAR_10);
  VAR_16 = FUNC_1(VAR_16);
  FUNC_5(VAR_16, VAR_15->io + VAR_3);
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
