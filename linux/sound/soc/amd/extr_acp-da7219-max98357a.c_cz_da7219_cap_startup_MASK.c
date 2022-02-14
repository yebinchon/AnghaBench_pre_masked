
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
struct acp_platform_info {int capture_channel; int cap_i2s_instance; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ,int ,int *) ;
 struct acp_platform_info* FUNC_1 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_7)
{
 struct snd_pcm_runtime *VAR_8 = VAR_7->runtime;
 struct snd_soc_pcm_runtime *VAR_9 = VAR_7->private_data;
 struct snd_soc_card *VAR_10 = VAR_9->card;
 struct acp_platform_info *VAR_11 = FUNC_1(VAR_10);





 VAR_8->hw.channels_max = VAR_1;
 FUNC_0(VAR_8, 0, VAR_3,
       &VAR_5);
 FUNC_0(VAR_8, 0, VAR_4,
       &VAR_6);

 VAR_11->cap_i2s_instance = VAR_2;
 VAR_11->capture_channel = VAR_0;
 return 0;
}
