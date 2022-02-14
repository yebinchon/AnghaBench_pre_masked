
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsnd_mod {TYPE_1__* ops; } ;
struct rsnd_dai_stream {int dummy; } ;
struct dma_chan {int dummy; } ;
struct TYPE_2__ {struct dma_chan* (* dma_req ) (struct rsnd_dai_stream*,struct rsnd_mod*) ;} ;


 struct dma_chan* FUNC_0 (struct rsnd_dai_stream*,struct rsnd_mod*) ;

struct dma_chan *FUNC_1(struct rsnd_dai_stream *VAR_0,
      struct rsnd_mod *VAR_1)
{
 if (!VAR_1 || !VAR_1->ops || !VAR_1->ops->dma_req)
  return ((void*)0);

 return VAR_1->ops->dma_req(VAR_0, VAR_1);
}
