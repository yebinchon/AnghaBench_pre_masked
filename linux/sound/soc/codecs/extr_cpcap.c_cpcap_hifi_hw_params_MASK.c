
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct cpcap_audio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpcap_audio*,int ,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 struct cpcap_audio* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1,
    struct snd_pcm_hw_params *VAR_2,
    struct snd_soc_dai *VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_3->component;
 struct cpcap_audio *VAR_5 = FUNC_3(VAR_4);
 int VAR_6 = FUNC_2(VAR_2);

 FUNC_1(VAR_4->dev, "HiFi setup HW params: rate=%d", VAR_6);
 return FUNC_0(VAR_5, VAR_0, VAR_6);
}
