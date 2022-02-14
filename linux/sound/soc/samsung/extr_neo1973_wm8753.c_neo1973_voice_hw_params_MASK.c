
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
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 unsigned long FUNC_2 () ;
 int FUNC_3 (struct snd_soc_dai*,int ,unsigned int) ;
 int FUNC_4 (struct snd_soc_dai*,int ,int ,unsigned long,int) ;
 int FUNC_5 (struct snd_soc_dai*,int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_6,
 struct snd_pcm_hw_params *VAR_7)
{
 struct snd_soc_pcm_runtime *VAR_8 = VAR_6->private_data;
 struct snd_soc_dai *VAR_9 = VAR_8->codec_dai;
 unsigned int VAR_10 = 0;
 int VAR_11 = 0;
 unsigned long VAR_12;

 VAR_12 = FUNC_2();

 if (FUNC_1(VAR_7) != 8000)
  return -VAR_0;
 if (FUNC_0(VAR_7) != 1)
  return -VAR_0;

 VAR_10 = VAR_4;


 VAR_11 = FUNC_5(VAR_9, VAR_2, 12288000,
  VAR_1);
 if (VAR_11 < 0)
  return VAR_11;


 VAR_11 = FUNC_3(VAR_9, VAR_3, VAR_10);
 if (VAR_11 < 0)
  return VAR_11;


 VAR_11 = FUNC_4(VAR_9, VAR_5, 0,
  VAR_12 / 4, 12288000);
 if (VAR_11 < 0)
  return VAR_11;

 return 0;
}
