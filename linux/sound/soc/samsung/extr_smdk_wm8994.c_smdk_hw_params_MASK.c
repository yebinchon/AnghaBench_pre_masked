
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_soc_dai*,int ,int ,int ,unsigned int) ;
 int FUNC_3 (struct snd_soc_dai*,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_5,
 struct snd_pcm_hw_params *VAR_6)
{
 struct snd_soc_pcm_runtime *VAR_7 = VAR_5->private_data;
 struct snd_soc_dai *VAR_8 = VAR_7->codec_dai;
 unsigned int VAR_9;
 int VAR_10;


 if (FUNC_1(VAR_6) == 24)
  VAR_9 = FUNC_0(VAR_6) * 384;
 else if (FUNC_0(VAR_6) == 8000 || FUNC_0(VAR_6) == 11025)
  VAR_9 = FUNC_0(VAR_6) * 512;
 else
  VAR_9 = FUNC_0(VAR_6) * 256;

 VAR_10 = FUNC_2(VAR_8, VAR_2, VAR_3,
     VAR_0, VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_3(VAR_8, VAR_4,
     VAR_9, VAR_1);
 if (VAR_10 < 0)
  return VAR_10;

 return 0;
}
