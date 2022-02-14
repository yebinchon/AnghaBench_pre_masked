
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
typedef scalar_t__ snd_pcm_format_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_soc_dai*,int,int) ;
 scalar_t__ FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1,
     struct snd_pcm_hw_params *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_1->private_data;
 struct snd_soc_dai *VAR_4 = VAR_3->codec_dai;
 snd_pcm_format_t VAR_5 = FUNC_1(VAR_2);
 int VAR_6 = FUNC_2(VAR_2);
 int VAR_7;

 if (VAR_5 == VAR_0)
  VAR_7 = 32;
 else
  VAR_7 = 50;

 return FUNC_0(VAR_4, VAR_6, VAR_7);
}
