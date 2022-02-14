
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl6040_data {int sysclk; int pll; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 struct twl6040_data* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_2,
   struct snd_pcm_hw_params *VAR_3,
   struct snd_soc_dai *VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_4->component;
 struct twl6040_data *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3);
 switch (VAR_7) {
 case 11250:
 case 22500:
 case 44100:
 case 88200:

  if (FUNC_3(VAR_6->pll == VAR_1)) {
   FUNC_0(VAR_5->dev, "HPPLL does not support rate %d\n",
    VAR_7);
   return -VAR_0;
  }
  VAR_6->sysclk = 17640000;
  break;
 case 8000:
 case 16000:
 case 32000:
 case 48000:
 case 96000:
  VAR_6->sysclk = 19200000;
  break;
 default:
  FUNC_0(VAR_5->dev, "unsupported rate %d\n", VAR_7);
  return -VAR_0;
 }

 return 0;
}
