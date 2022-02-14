
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {struct snd_soc_dai* cpu_dai; struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_soc_dai*,int) ;
 int FUNC_3 (struct snd_soc_dai*,int ,int ,int ) ;
 int FUNC_4 (struct snd_soc_dai*,int,int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_7,
           struct snd_pcm_hw_params *VAR_8)
{
 struct snd_soc_pcm_runtime *VAR_9 = VAR_7->private_data;
 struct snd_soc_dai *VAR_10 = VAR_9->codec_dai;
 struct snd_soc_dai *VAR_11 = VAR_9->cpu_dai;
 unsigned int VAR_12;
 int VAR_13 = 0;


 VAR_13 = FUNC_2(VAR_10, VAR_4 |
   VAR_6 | VAR_2);
 if (VAR_13 < 0)
  return VAR_13;


 VAR_13 = FUNC_2(VAR_11, VAR_3 |
   VAR_5 | VAR_2);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_12 = FUNC_1(FUNC_0(VAR_8));
 VAR_13 = FUNC_4(VAR_11, 1, 0, 1, VAR_12);
 if (VAR_13 < 0)
  return VAR_13;


 VAR_13 = FUNC_3(VAR_11, VAR_0, 0,
   VAR_1);
 if (VAR_13 < 0)
  return VAR_13;

 return 0;
}
