
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct img_spdif_in {int dummy; } ;
typedef scalar_t__ snd_pcm_format_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct img_spdif_in*,unsigned int) ;
 unsigned int FUNC_1 (struct snd_pcm_hw_params*) ;
 scalar_t__ FUNC_2 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_3 (struct snd_pcm_hw_params*) ;
 struct img_spdif_in* FUNC_4 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_2,
 struct snd_pcm_hw_params *VAR_3, struct snd_soc_dai *VAR_4)
{
 struct img_spdif_in *VAR_5 = FUNC_4(VAR_4);
 unsigned int VAR_6, VAR_7;
 snd_pcm_format_t VAR_8;

 VAR_6 = FUNC_3(VAR_3);
 VAR_7 = FUNC_1(VAR_3);
 VAR_8 = FUNC_2(VAR_3);

 if (VAR_8 != VAR_1)
  return -VAR_0;

 if (VAR_7 != 2)
  return -VAR_0;

 return FUNC_0(VAR_5, VAR_6);
}
