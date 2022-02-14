
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tfa9879_priv {scalar_t__ lsb_justified; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


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
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 struct tfa9879_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_20,
        struct snd_pcm_hw_params *VAR_21,
        struct snd_soc_dai *VAR_22)
{
 struct snd_soc_component *VAR_23 = VAR_22->component;
 struct tfa9879_priv *VAR_24 = FUNC_2(VAR_23);
 int VAR_25;
 int VAR_26 = 0;

 switch (FUNC_0(VAR_21)) {
 case 8000:
  VAR_25 = VAR_10;
  break;
 case 11025:
  VAR_25 = VAR_1;
  break;
 case 12000:
  VAR_25 = VAR_2;
  break;
 case 16000:
  VAR_25 = VAR_3;
  break;
 case 22050:
  VAR_25 = VAR_4;
  break;
 case 24000:
  VAR_25 = VAR_5;
  break;
 case 32000:
  VAR_25 = VAR_6;
  break;
 case 44100:
  VAR_25 = VAR_7;
  break;
 case 48000:
  VAR_25 = VAR_8;
  break;
 case 64000:
  VAR_25 = VAR_9;
  break;
 case 88200:
  VAR_25 = VAR_11;
  break;
 case 96000:
  VAR_25 = VAR_12;
  break;
 default:
  return -VAR_0;
 }

 switch (FUNC_1(VAR_21)) {
 case 16:
  VAR_26 = VAR_15;
  break;
 case 24:
  VAR_26 = VAR_16;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_24->lsb_justified)
  FUNC_3(VAR_23,
           VAR_19,
           VAR_17,
           VAR_26 << VAR_18);

 FUNC_3(VAR_23, VAR_19,
          VAR_13,
          VAR_25 << VAR_14);
 return 0;
}
