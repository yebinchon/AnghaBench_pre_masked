
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_dai {TYPE_1__* driver; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {int base; } ;


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
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_19,
       struct snd_pcm_hw_params *VAR_20,
       struct snd_soc_dai *VAR_21)
{
 struct snd_soc_component *VAR_22 = VAR_21->component;
 u32 VAR_23 = 0;
 u32 VAR_24;
 u32 VAR_25;

 VAR_24 = VAR_21->driver->base;

 switch (FUNC_1(VAR_20)) {
 case 16:
  VAR_23 |= VAR_0;
  break;
 case 20:
  VAR_23 |= VAR_1;
  break;
 case 24:
  VAR_23 |= VAR_2;
  break;
 case 32:
  VAR_23 |= VAR_3;
  break;
 default:
  return -VAR_18;
 }

 switch (FUNC_0(VAR_20)) {
 case 8000:
  VAR_25 = VAR_16;
  break;
 case 11025:
  VAR_25 = VAR_7;
  break;
 case 12000:
  VAR_25 = VAR_8;
  break;
 case 16000:
  VAR_25 = VAR_9;
  break;
 case 22050:
  VAR_25 = VAR_10;
  break;
 case 24000:
  VAR_25 = VAR_11;
  break;
 case 32000:
  VAR_25 = VAR_12;
  break;
 case 44100:
  VAR_25 = VAR_13;
  break;
 case 48000:
  VAR_25 = VAR_14;
  break;
 case 88100:
  VAR_25 = VAR_15;
  break;
 case 96000:
  VAR_25 = VAR_17;
  break;
 default:
  return -VAR_18;
 }

 FUNC_2(VAR_22, VAR_24, VAR_4, VAR_23);
 FUNC_2(VAR_22, VAR_5, VAR_6, VAR_25);

 return 0;
}
