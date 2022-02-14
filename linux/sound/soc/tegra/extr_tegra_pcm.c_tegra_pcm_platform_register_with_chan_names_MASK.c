
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dmaengine_pcm_config {char** chan_names; int dma_dev; } ;
struct device {int parent; } ;


 int FUNC_0 (struct device*,struct snd_dmaengine_pcm_config*,int ) ;
 struct snd_dmaengine_pcm_config VAR_0 ;

int FUNC_1(struct device *VAR_1,
    struct snd_dmaengine_pcm_config *VAR_2,
    char *VAR_3, char *VAR_4)
{
 *VAR_2 = VAR_0;
 VAR_2->dma_dev = VAR_1->parent;
 VAR_2->chan_names[0] = VAR_3;
 VAR_2->chan_names[1] = VAR_4;

 return FUNC_0(VAR_1, VAR_2, 0);
}
