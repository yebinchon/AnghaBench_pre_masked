
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tm2_machine_priv {unsigned int sysclk_rate; } ;
struct snd_soc_pcm_runtime {int card; TYPE_1__* codec_dai; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {struct snd_soc_component* component; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 struct tm2_machine_priv* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1,
    struct snd_pcm_hw_params *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_1->private_data;
 struct snd_soc_component *VAR_4 = VAR_3->codec_dai->component;
 struct tm2_machine_priv *VAR_5 = FUNC_2(VAR_3->card);

 switch (FUNC_1(VAR_2)) {
 case 4000:
 case 8000:
 case 12000:
 case 16000:
 case 24000:
 case 32000:
 case 48000:
 case 96000:
 case 192000:

  VAR_5->sysclk_rate = 147456000U;
  break;
 case 11025:
 case 22050:
 case 44100:
 case 88200:
 case 176400:

  VAR_5->sysclk_rate = 135475200U;
  break;
 default:
  FUNC_0(VAR_4->dev, "Not supported sample rate: %d\n",
   FUNC_1(VAR_2));
  return -VAR_0;
 }

 return FUNC_3(VAR_3->card);
}
