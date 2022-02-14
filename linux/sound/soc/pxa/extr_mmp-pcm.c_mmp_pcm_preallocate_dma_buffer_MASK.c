
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dev; int type; } ;
struct snd_dma_buffer {size_t bytes; int area; int addr; int * private_data; TYPE_1__ dev; } ;
struct snd_pcm_substream {TYPE_3__* pcm; struct snd_dma_buffer dma_buffer; } ;
struct gen_pool {int dummy; } ;
struct TYPE_8__ {size_t buffer_bytes_max; } ;
struct TYPE_7__ {TYPE_2__* card; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gen_pool*,size_t,int *) ;
 TYPE_4__* VAR_2 ;
 struct gen_pool* FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_3,
        int VAR_4)
{
 struct snd_dma_buffer *VAR_5 = &VAR_3->dma_buffer;
 size_t VAR_6 = VAR_2[VAR_4].buffer_bytes_max;
 struct gen_pool *VAR_7;

 VAR_5->dev.type = VAR_1;
 VAR_5->dev.dev = VAR_3->pcm->card->dev;
 VAR_5->private_data = ((void*)0);

 VAR_7 = FUNC_1("asram");
 if (!VAR_7)
  return -VAR_0;

 VAR_5->area = FUNC_0(VAR_7, VAR_6, &VAR_5->addr);
 if (!VAR_5->area)
  return -VAR_0;
 VAR_5->bytes = VAR_6;
 return 0;
}
