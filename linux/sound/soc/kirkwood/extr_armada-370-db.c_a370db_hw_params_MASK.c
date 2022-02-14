
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_soc_dai*,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1,
       struct snd_pcm_hw_params *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_1->private_data;
 struct snd_soc_dai *VAR_4 = VAR_3->codec_dai;
 unsigned int VAR_5;

 switch (FUNC_0(VAR_2)) {
 default:
 case 44100:
  VAR_5 = 11289600;
  break;
 case 48000:
  VAR_5 = 12288000;
  break;
 case 96000:
  VAR_5 = 24576000;
  break;
 }

 return FUNC_1(VAR_4, 0, VAR_5, VAR_0);
}
