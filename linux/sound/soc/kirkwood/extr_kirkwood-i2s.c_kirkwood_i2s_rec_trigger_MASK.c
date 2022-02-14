
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snd_soc_dai {int id; } ;
struct snd_pcm_substream {int dummy; } ;
struct kirkwood_dma_data {int ctl_rec; scalar_t__ io; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;






 int FUNC_0 (scalar_t__) ;
 struct kirkwood_dma_data* FUNC_1 (struct snd_soc_dai*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_9,
    int VAR_10, struct snd_soc_dai *VAR_11)
{
 struct kirkwood_dma_data *VAR_12 = FUNC_1(VAR_11);
 uint32_t VAR_13, VAR_14;

 VAR_14 = FUNC_0(VAR_12->io + VAR_3);

 switch (VAR_10) {
 case 130:

  VAR_13 = VAR_12->ctl_rec;
  if (VAR_11->id == 0)
   VAR_13 &= ~VAR_8;
  else
   VAR_13 &= ~VAR_5;

  VAR_14 = VAR_13 & ~VAR_4;
  FUNC_2(VAR_14, VAR_12->io + VAR_3);


  VAR_14 = FUNC_0(VAR_12->io + VAR_2);
  VAR_14 |= VAR_1;
  FUNC_2(VAR_14, VAR_12->io + VAR_2);


  FUNC_2(VAR_13, VAR_12->io + VAR_3);
  break;

 case 129:

  VAR_14 = FUNC_0(VAR_12->io + VAR_3);
  VAR_14 |= VAR_7 | VAR_6;
  FUNC_2(VAR_14, VAR_12->io + VAR_3);

  VAR_14 = FUNC_0(VAR_12->io + VAR_2);
  VAR_14 &= ~VAR_1;
  FUNC_2(VAR_14, VAR_12->io + VAR_2);


  VAR_14 = FUNC_0(VAR_12->io + VAR_3);
  VAR_14 &= ~VAR_4;
  FUNC_2(VAR_14, VAR_12->io + VAR_3);
  break;

 case 133:
 case 128:
  VAR_14 = FUNC_0(VAR_12->io + VAR_3);
  VAR_14 |= VAR_7 | VAR_6;
  FUNC_2(VAR_14, VAR_12->io + VAR_3);
  break;

 case 131:
 case 132:
  VAR_14 = FUNC_0(VAR_12->io + VAR_3);
  VAR_14 &= ~(VAR_7 | VAR_6);
  FUNC_2(VAR_14, VAR_12->io + VAR_3);
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
