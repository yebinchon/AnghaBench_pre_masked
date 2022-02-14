
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct nau8822 {scalar_t__ div_id; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
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




 int FUNC_0 (struct snd_soc_dai*,int ,int) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 struct nau8822* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,unsigned int*) ;
 int FUNC_5 (struct snd_soc_component*,int ,int ,int) ;
 int FUNC_6 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_20,
       struct snd_pcm_hw_params *VAR_21,
       struct snd_soc_dai *VAR_22)
{
 struct snd_soc_component *VAR_23 = VAR_22->component;
 struct nau8822 *VAR_24 = FUNC_3(VAR_23);
 int VAR_25 = 0, VAR_26 = 0;
 unsigned int VAR_27, VAR_28, VAR_29;


 FUNC_4(VAR_23, VAR_9, &VAR_27);
 if (VAR_27 & VAR_5) {

  VAR_28 = FUNC_6(VAR_21) / FUNC_2(VAR_21);
  if (VAR_28 <= 32)
   VAR_29 = VAR_3;
  else if (VAR_28 <= 64)
   VAR_29 = VAR_2;
  else if (VAR_28 <= 128)
   VAR_29 = VAR_1;
  else
   return -VAR_0;
  FUNC_5(VAR_23, VAR_9,
    VAR_4, VAR_29);
 }

 switch (FUNC_1(VAR_21)) {
 case 131:
  break;
 case 130:
  VAR_25 |= VAR_16;
  break;
 case 129:
  VAR_25 |= VAR_17;
  break;
 case 128:
  VAR_25 |= VAR_18;
  break;
 default:
  return -VAR_0;
 }

 switch (FUNC_2(VAR_21)) {
 case 8000:
  VAR_26 |= VAR_14;
  break;
 case 11025:
  VAR_26 |= VAR_10;
  break;
 case 16000:
  VAR_26 |= VAR_11;
  break;
 case 22050:
  VAR_26 |= VAR_12;
  break;
 case 32000:
  VAR_26 |= VAR_13;
  break;
 case 44100:
 case 48000:
  break;
 default:
  return -VAR_0;
 }

 FUNC_5(VAR_23,
  VAR_8, VAR_19, VAR_25);
 FUNC_5(VAR_23,
  VAR_7, VAR_15, VAR_26);




 if (VAR_24->div_id == VAR_6)
  FUNC_0(VAR_22, 0, FUNC_2(VAR_21));

 return 0;
}
