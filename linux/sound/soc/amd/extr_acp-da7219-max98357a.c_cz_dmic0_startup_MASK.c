
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_soc_card* card; } ;
struct snd_soc_card {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int channels_max; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct acp_platform_info {int cap_i2s_instance; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ,int ,int *) ;
 struct acp_platform_info* FUNC_1 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_6)
{
 struct snd_pcm_runtime *VAR_7 = VAR_6->runtime;
 struct snd_soc_pcm_runtime *VAR_8 = VAR_6->private_data;
 struct snd_soc_card *VAR_9 = VAR_8->card;
 struct acp_platform_info *VAR_10 = FUNC_1(VAR_9);





 VAR_7->hw.channels_max = VAR_0;
 FUNC_0(VAR_7, 0, VAR_2,
       &VAR_4);
 FUNC_0(VAR_7, 0, VAR_3,
       &VAR_5);

 VAR_10->cap_i2s_instance = VAR_1;
 return 0;
}
