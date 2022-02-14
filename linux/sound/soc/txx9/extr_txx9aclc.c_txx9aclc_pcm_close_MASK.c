
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct txx9aclc_dmadata {int frag_count; struct dma_chan* dma_chan; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct dma_chan {int dummy; } ;
struct TYPE_2__ {struct txx9aclc_dmadata* private_data; } ;


 int FUNC_0 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct txx9aclc_dmadata *VAR_1 = VAR_0->runtime->private_data;
 struct dma_chan *VAR_2 = VAR_1->dma_chan;

 VAR_1->frag_count = -1;
 FUNC_0(VAR_2);
 return 0;
}
