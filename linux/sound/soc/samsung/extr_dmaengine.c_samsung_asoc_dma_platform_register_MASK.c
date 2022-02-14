
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dmaengine_pcm_config {char const** chan_names; struct device* dma_dev; int compat_filter_fn; int prepare_slave_config; } ;
struct device {int dummy; } ;
typedef int dma_filter_fn ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 struct snd_dmaengine_pcm_config* FUNC_0 (struct device*,int,int ) ;
 int FUNC_1 (struct device*,struct snd_dmaengine_pcm_config*,int ) ;
 int VAR_5 ;

int FUNC_2(struct device *VAR_6, dma_filter_fn VAR_7,
           const char *VAR_8, const char *VAR_9,
           struct device *VAR_10)
{
 struct snd_dmaengine_pcm_config *VAR_11;

 VAR_11 = FUNC_0(VAR_6, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->prepare_slave_config = VAR_5;
 VAR_11->compat_filter_fn = VAR_7;
 VAR_11->dma_dev = VAR_10;

 VAR_11->chan_names[VAR_3] = VAR_8;
 VAR_11->chan_names[VAR_2] = VAR_9;

 return FUNC_1(VAR_6, VAR_11,
    VAR_4);
}
