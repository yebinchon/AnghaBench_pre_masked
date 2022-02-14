
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int format; } ;
struct spdif_in_dev {TYPE_1__ saved_params; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 struct spdif_in_dev* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_2,
  struct snd_pcm_hw_params *VAR_3,
  struct snd_soc_dai *VAR_4)
{
 struct spdif_in_dev *VAR_5 = FUNC_1(VAR_4);
 u32 VAR_6;

 if (VAR_2->stream != VAR_1)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_3);
 VAR_5->saved_params.format = VAR_6;

 return 0;
}
