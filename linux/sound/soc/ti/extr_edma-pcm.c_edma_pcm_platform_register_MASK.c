
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dmaengine_pcm_config {char** chan_names; } ;
struct device {scalar_t__ of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_dmaengine_pcm_config* FUNC_0 (struct device*,int,int ) ;
 int FUNC_1 (struct device*,struct snd_dmaengine_pcm_config*,int ) ;
 struct snd_dmaengine_pcm_config VAR_2 ;

int FUNC_2(struct device *VAR_3)
{
 struct snd_dmaengine_pcm_config *VAR_4;

 if (VAR_3->of_node)
  return FUNC_1(VAR_3,
      &VAR_2, 0);

 VAR_4 = FUNC_0(VAR_3, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 *VAR_4 = VAR_2;

 VAR_4->chan_names[0] = "tx";
 VAR_4->chan_names[1] = "rx";

 return FUNC_1(VAR_3, VAR_4, 0);
}
