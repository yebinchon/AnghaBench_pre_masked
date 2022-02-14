
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dmaengine_pcm_config {int dummy; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_dmaengine_pcm_config* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,struct snd_dmaengine_pcm_config*,int ) ;
 struct snd_dmaengine_pcm_config VAR_3 ;

int FUNC_2(struct platform_device *VAR_4, size_t VAR_5)
{
 struct snd_dmaengine_pcm_config *VAR_6;

 VAR_6 = FUNC_0(&VAR_4->dev,
   sizeof(struct snd_dmaengine_pcm_config), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 *VAR_6 = VAR_3;

 return FUNC_1(&VAR_4->dev,
  VAR_6,
  VAR_2);
}
