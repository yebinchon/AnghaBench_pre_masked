
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {struct snd_soc_dai* cpu_dai; struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 unsigned long FUNC_2 () ;
 int FUNC_3 (struct snd_soc_dai*,int ,unsigned int) ;
 int FUNC_4 (struct snd_soc_dai*,int ,int ,unsigned long,unsigned int) ;
 int FUNC_5 (struct snd_soc_dai*,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_11,
 struct snd_pcm_hw_params *VAR_12)
{
 struct snd_soc_pcm_runtime *VAR_13 = VAR_11->private_data;
 struct snd_soc_dai *VAR_14 = VAR_13->codec_dai;
 struct snd_soc_dai *VAR_15 = VAR_13->cpu_dai;
 unsigned int VAR_16 = 0, VAR_17 = 0;
 int VAR_18 = 0;
 unsigned long VAR_19;

 VAR_19 = FUNC_2();

 switch (FUNC_1(VAR_12)) {
 case 8000:
 case 16000:
  VAR_16 = 12288000;
  break;
 case 48000:
  VAR_17 = VAR_7;
  VAR_16 = 12288000;
  break;
 case 96000:
  VAR_17 = VAR_6;
  VAR_16 = 12288000;
  break;
 case 11025:
  VAR_17 = VAR_5;
  VAR_16 = 11289600;
  break;
 case 22050:
  VAR_17 = VAR_8;
  VAR_16 = 11289600;
  break;
 case 44100:
  VAR_17 = VAR_7;
  VAR_16 = 11289600;
  break;
 case 88200:
  VAR_17 = VAR_6;
  VAR_16 = 11289600;
  break;
 }


 VAR_18 = FUNC_5(VAR_14, VAR_9, VAR_16,
  VAR_3);
 if (VAR_18 < 0)
  return VAR_18;


 VAR_18 = FUNC_3(VAR_15, VAR_1,
  VAR_0);
 if (VAR_18 < 0)
  return VAR_18;


 VAR_18 = FUNC_3(VAR_14, VAR_4, VAR_17);
 if (VAR_18 < 0)
  return VAR_18;


 VAR_18 = FUNC_3(VAR_15, VAR_2,
  FUNC_0(4, 4));
 if (VAR_18 < 0)
  return VAR_18;


 VAR_18 = FUNC_4(VAR_14, VAR_10, 0,
  VAR_19 / 4, VAR_16);
 if (VAR_18 < 0)
  return VAR_18;

 return 0;
}
