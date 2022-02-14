
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {struct snd_soc_dai* cpu_dai; struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct s3c_i2sv2_rate_calc {scalar_t__ clk_div; scalar_t__ fs_div; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_soc_dai*) ;
 int FUNC_2 (struct s3c_i2sv2_rate_calc*,int *,int,int ) ;
 int FUNC_3 (struct snd_soc_dai*,int ,scalar_t__) ;
 int FUNC_4 (struct snd_soc_dai*,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_4,
     struct snd_pcm_hw_params *VAR_5)
{
 struct snd_soc_pcm_runtime *VAR_6 = VAR_4->private_data;
 struct snd_soc_dai *VAR_7 = VAR_6->codec_dai;
 struct snd_soc_dai *VAR_8 = VAR_6->cpu_dai;
 struct s3c_i2sv2_rate_calc VAR_9;
 unsigned int VAR_10 = 0;
 int VAR_11 = 0;

 switch (FUNC_0(VAR_5)) {
 case 8000:
 case 16000:
 case 48000:
 case 96000:
  VAR_10 = 12288000;
  break;
 case 11025:
 case 22050:
 case 44100:
  VAR_10 = 11289600;
  break;
 }

 FUNC_2(&VAR_9, ((void*)0), FUNC_0(VAR_5),
    FUNC_1(VAR_8));


 VAR_11 = FUNC_4(VAR_7, VAR_3, VAR_10,
         VAR_2);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_3(VAR_8, VAR_1, VAR_9.fs_div);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_3(VAR_8, VAR_0,
         VAR_9.clk_div - 1);
 if (VAR_11 < 0)
  return VAR_11;

 return 0;
}
