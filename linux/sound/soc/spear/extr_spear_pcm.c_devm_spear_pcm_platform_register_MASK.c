
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dmaengine_pcm_config {int (* compat_filter_fn ) (struct dma_chan*,void*) ;} ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,struct snd_dmaengine_pcm_config*,int) ;
 struct snd_dmaengine_pcm_config VAR_2 ;

int FUNC_1(struct device *VAR_3,
   struct snd_dmaengine_pcm_config *VAR_4,
   bool (*VAR_5)(struct dma_chan *VAR_6, void *VAR_7))
{
 *VAR_4 = VAR_2;
 VAR_4->compat_filter_fn = VAR_5;

 return FUNC_0(VAR_3, VAR_4,
  VAR_1 |
  VAR_0);
}
