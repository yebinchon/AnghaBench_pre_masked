
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int stream; } ;
struct ep93xx_ac97_info {int dev; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (int) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_2 (int) ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;






 int FUNC_3 (int ,char*,...) ;
 unsigned int FUNC_4 (struct ep93xx_ac97_info*,int ) ;
 int FUNC_5 (struct ep93xx_ac97_info*,int ,unsigned int) ;
 unsigned long VAR_13 ;
 struct ep93xx_ac97_info* FUNC_6 (struct snd_soc_dai*) ;
 int FUNC_7 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_14,
          int VAR_15, struct snd_soc_dai *VAR_16)
{
 struct ep93xx_ac97_info *VAR_17 = FUNC_6(VAR_16);
 unsigned VAR_18 = 0;

 switch (VAR_15) {
 case 130:
 case 131:
 case 132:
  if (VAR_14->stream == VAR_12) {




   VAR_18 |= VAR_6;
   VAR_18 |= VAR_8 | VAR_9;
   VAR_18 |= VAR_7;
   FUNC_5(VAR_17, FUNC_2(1), VAR_18);
  } else {




   VAR_18 |= VAR_0;
   VAR_18 |= VAR_2 | VAR_3;
   VAR_18 |= VAR_1;
   FUNC_5(VAR_17, FUNC_0(1), VAR_18);
  }
  break;

 case 129:
 case 128:
 case 133:
  if (VAR_14->stream == VAR_12) {
   unsigned long VAR_19 = VAR_13 + VAR_10;

   do {
    VAR_18 = FUNC_4(VAR_17, FUNC_1(1));
    if (FUNC_7(VAR_13, VAR_19)) {
     FUNC_3(VAR_17->dev, "TX timeout\n");
     break;
    }
   } while (!(VAR_18 & (VAR_4 | VAR_5)));


   FUNC_5(VAR_17, FUNC_2(1), 0);
  } else {

   FUNC_5(VAR_17, FUNC_0(1), 0);
  }
  break;

 default:
  FUNC_3(VAR_17->dev, "unknown command %d\n", VAR_15);
  return -VAR_11;
 }

 return 0;
}
