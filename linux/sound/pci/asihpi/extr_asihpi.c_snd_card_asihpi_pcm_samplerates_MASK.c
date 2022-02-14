
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct snd_pcm_hardware {unsigned int rates; unsigned int rate_min; unsigned int rate_max; } ;
struct snd_card_asihpi {TYPE_1__* pci; int h_mixer; scalar_t__ support_mrx; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,int ,int*) ;
 scalar_t__ FUNC_2 (int,int*) ;
 scalar_t__ FUNC_3 (int,int,int*) ;
 unsigned int FUNC_4 (unsigned int,int) ;
 unsigned int FUNC_5 (unsigned int,int) ;

__attribute__((used)) static void FUNC_6(struct snd_card_asihpi *VAR_18,
      struct snd_pcm_hardware *VAR_19)
{
 u16 VAR_20;
 u32 VAR_21;
 u32 VAR_22;
 int VAR_23;
 unsigned int VAR_24 = 200000;
 unsigned int VAR_25 = 0;
 unsigned int VAR_26 = 0;

 if (VAR_18->support_mrx) {
  VAR_26 |= VAR_16;
  VAR_26 |= VAR_13;
  VAR_24 = 8000;
  VAR_25 = 100000;
 } else {


  VAR_20 = FUNC_1(VAR_18->h_mixer,
       VAR_1, 0, 0, 0,
       VAR_0, &VAR_21);
  if (VAR_20) {
   FUNC_0(&VAR_18->pci->dev,
    "No local sampleclock, err %d\n", VAR_20);
  }

  for (VAR_23 = -1; VAR_23 < 100; VAR_23++) {
   if (VAR_23 == -1) {
    if (FUNC_2(VAR_21,
        &VAR_22))
     continue;
   } else if (FUNC_3(VAR_21,
       VAR_23, &VAR_22)) {
    break;
   }

   VAR_24 = FUNC_5(VAR_24, VAR_22);
   VAR_25 = FUNC_4(VAR_25, VAR_22);

   switch (VAR_22) {
   case 5512:
    VAR_26 |= VAR_10;
    break;
   case 8000:
    VAR_26 |= VAR_12;
    break;
   case 11025:
    VAR_26 |= VAR_2;
    break;
   case 16000:
    VAR_26 |= VAR_3;
    break;
   case 22050:
    VAR_26 |= VAR_6;
    break;
   case 32000:
    VAR_26 |= VAR_7;
    break;
   case 44100:
    VAR_26 |= VAR_8;
    break;
   case 48000:
    VAR_26 |= VAR_9;
    break;
   case 64000:
    VAR_26 |= VAR_11;
    break;
   case 88200:
    VAR_26 |= VAR_14;
    break;
   case 96000:
    VAR_26 |= VAR_15;
    break;
   case 176400:
    VAR_26 |= VAR_4;
    break;
   case 192000:
    VAR_26 |= VAR_5;
    break;
   default:
    VAR_26 |= VAR_17;
   }
  }
 }

 VAR_19->rates = VAR_26;
 VAR_19->rate_min = VAR_24;
 VAR_19->rate_max = VAR_25;
}
