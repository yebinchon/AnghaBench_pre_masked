
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dev; int type; } ;
struct snd_dma_buffer {size_t bytes; scalar_t__ area; scalar_t__ addr; int * private_data; TYPE_2__ dev; } ;
struct snd_pcm_substream {struct snd_dma_buffer dma_buffer; } ;
struct snd_pcm {TYPE_3__* card; TYPE_1__* streams; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {struct snd_pcm_substream* substream; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,size_t,scalar_t__*,int ) ;
 int FUNC_1 (char*,void*,void*,size_t) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm *VAR_4,
 int VAR_5)
{
 struct snd_pcm_substream *VAR_6 = VAR_4->streams[VAR_5].substream;
 struct snd_dma_buffer *VAR_7 = &VAR_6->dma_buffer;
 size_t VAR_8 = VAR_0;

 VAR_7->dev.type = VAR_3;
 VAR_7->dev.dev = VAR_4->card->dev;
 VAR_7->private_data = ((void*)0);
 VAR_7->area = FUNC_0(VAR_4->card->dev, VAR_8,
   &VAR_7->addr, VAR_2);
 FUNC_1("atmel-pcm: alloc dma buffer: area=%p, addr=%p, size=%zu\n",
   (void *)VAR_7->area, (void *)(long)VAR_7->addr, VAR_8);

 if (!VAR_7->area)
  return -VAR_1;

 VAR_7->bytes = VAR_8;
 return 0;
}
