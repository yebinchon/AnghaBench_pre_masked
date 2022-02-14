
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int core_freq; int rate; } ;
struct spdif_out_dev {TYPE_1__ saved_params; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 struct spdif_out_dev* FUNC_1 (struct snd_soc_dai*) ;
 int FUNC_2 (struct spdif_out_dev*,int,int) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2,
  struct snd_pcm_hw_params *VAR_3,
  struct snd_soc_dai *VAR_4)
{
 struct spdif_out_dev *VAR_5 = FUNC_1(VAR_4);
 u32 VAR_6, VAR_7;

 if (VAR_2->stream != VAR_1)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_3);

 switch (VAR_6) {
 case 8000:
 case 16000:
 case 32000:
 case 64000:




  VAR_7 = 64000 * 128 * 10;
  break;
 case 5512:
 case 11025:
 case 22050:
 case 44100:
 case 88200:
 case 176400:
  VAR_7 = 176400 * 128;
  break;
 case 48000:
 case 96000:
 case 192000:
 default:
  VAR_7 = 192000 * 128;
  break;
 }

 FUNC_2(VAR_5, VAR_7, VAR_6);
 VAR_5->saved_params.core_freq = VAR_7;
 VAR_5->saved_params.rate = VAR_6;

 return 0;
}
