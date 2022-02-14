
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dmaengine_pcm_config {char** chan_names; struct device* dma_dev; } ;
struct dmaengine_pcm {int flags; struct dma_chan** chan; } ;
struct dma_chan {int dummy; } ;
struct device {scalar_t__ of_node; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (struct dma_chan*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,char*,int ) ;
 struct dma_chan* FUNC_4 (struct device*,char const*) ;
 char** VAR_5 ;

__attribute__((used)) static int FUNC_5(struct dmaengine_pcm *VAR_6,
 struct device *VAR_7, const struct snd_dmaengine_pcm_config *VAR_8)
{
 unsigned int VAR_9;
 const char *VAR_10;
 struct dma_chan *VAR_11;

 if ((VAR_6->flags & VAR_4) || (!VAR_7->of_node &&
     !(VAR_8 && VAR_8->dma_dev && VAR_8->dma_dev->of_node)))
  return 0;

 if (VAR_8 && VAR_8->dma_dev) {






  FUNC_3(VAR_7, "DMA channels sourced from device %s",
    FUNC_2(VAR_8->dma_dev));
  VAR_7 = VAR_8->dma_dev;
 }

 for (VAR_9 = VAR_2; VAR_9 <= VAR_1;
      VAR_9++) {
  if (VAR_6->flags & VAR_3)
   VAR_10 = "rx-tx";
  else
   VAR_10 = VAR_5[VAR_9];
  if (VAR_8 && VAR_8->chan_names[VAR_9])
   VAR_10 = VAR_8->chan_names[VAR_9];
  VAR_11 = FUNC_4(VAR_7, VAR_10);
  if (FUNC_0(VAR_11)) {
   if (FUNC_1(VAR_11) == -VAR_0)
    return -VAR_0;
   VAR_6->chan[VAR_9] = ((void*)0);
  } else {
   VAR_6->chan[VAR_9] = VAR_11;
  }
  if (VAR_6->flags & VAR_3)
   break;
 }

 if (VAR_6->flags & VAR_3)
  VAR_6->chan[1] = VAR_6->chan[0];

 return 0;
}
