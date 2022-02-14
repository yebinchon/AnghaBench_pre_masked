
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct da9055_priv {scalar_t__ mclk_rate; int master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 struct da9055_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_4 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_21,
       struct snd_pcm_hw_params *VAR_22,
       struct snd_soc_dai *VAR_23)
{
 struct snd_soc_component *VAR_24 = VAR_23->component;
 struct da9055_priv *VAR_25 = FUNC_2(VAR_24);
 u8 VAR_26, VAR_27;
 u32 VAR_28;

 switch (FUNC_1(VAR_22)) {
 case 16:
  VAR_26 = VAR_2;
  break;
 case 20:
  VAR_26 = VAR_3;
  break;
 case 24:
  VAR_26 = VAR_4;
  break;
 case 32:
  VAR_26 = VAR_5;
  break;
 default:
  return -VAR_20;
 }


 FUNC_3(VAR_24, VAR_0, VAR_1,
       VAR_26);

 switch (FUNC_0(VAR_22)) {
 case 8000:
  VAR_27 = VAR_17;
  VAR_28 = 3072000;
  break;
 case 11025:
  VAR_27 = VAR_10;
  VAR_28 = 2822400;
  break;
 case 12000:
  VAR_27 = VAR_11;
  VAR_28 = 3072000;
  break;
 case 16000:
  VAR_27 = VAR_12;
  VAR_28 = 3072000;
  break;
 case 22050:
  VAR_27 = VAR_13;
  VAR_28 = 2822400;
  break;
 case 32000:
  VAR_27 = VAR_14;
  VAR_28 = 3072000;
  break;
 case 44100:
  VAR_27 = VAR_15;
  VAR_28 = 2822400;
  break;
 case 48000:
  VAR_27 = VAR_16;
  VAR_28 = 3072000;
  break;
 case 88200:
  VAR_27 = VAR_18;
  VAR_28 = 2822400;
  break;
 case 96000:
  VAR_27 = VAR_19;
  VAR_28 = 3072000;
  break;
 default:
  return -VAR_20;
 }

 if (VAR_25->mclk_rate) {

  FUNC_4(VAR_24, VAR_9, VAR_27);
 } else {







  FUNC_4(VAR_24, VAR_9, VAR_16);
 }

 if (VAR_25->mclk_rate && (VAR_25->mclk_rate != VAR_28)) {

  if (!VAR_25->master) {

   FUNC_3(VAR_24, VAR_6,
         VAR_7 | VAR_8,
         VAR_7 | VAR_8);
  } else {

   FUNC_3(VAR_24, VAR_6,
         VAR_7, VAR_7);
  }
 } else {

  FUNC_3(VAR_24, VAR_6, VAR_7, 0);
 }

 return 0;
}
