
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_compr_stream {TYPE_5__* runtime; TYPE_2__* device; TYPE_1__* ops; } ;
struct TYPE_9__ {unsigned int fragment_size; unsigned int fragments; } ;
struct snd_compr_params {TYPE_4__ buffer; } ;
struct TYPE_10__ {unsigned int fragment_size; unsigned int fragments; unsigned int buffer_size; void* buffer; TYPE_3__* dma_buffer_p; } ;
struct TYPE_8__ {unsigned int bytes; void* area; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {scalar_t__ copy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 void* FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_compr_stream *VAR_2,
  struct snd_compr_params *VAR_3)
{
 unsigned int VAR_4;
 void *VAR_5 = ((void*)0);

 VAR_4 = VAR_3->buffer.fragment_size * VAR_3->buffer.fragments;
 if (VAR_2->ops->copy) {
  VAR_5 = ((void*)0);



 } else {
  if (VAR_2->runtime->dma_buffer_p) {

   if (VAR_4 > VAR_2->runtime->dma_buffer_p->bytes)
    FUNC_0(&VAR_2->device->dev,
      "Not enough DMA buffer");
   else
    VAR_5 = VAR_2->runtime->dma_buffer_p->area;

  } else {
   VAR_5 = FUNC_1(VAR_4, VAR_1);
  }

  if (!VAR_5)
   return -VAR_0;
 }
 VAR_2->runtime->fragment_size = VAR_3->buffer.fragment_size;
 VAR_2->runtime->fragments = VAR_3->buffer.fragments;
 VAR_2->runtime->buffer = VAR_5;
 VAR_2->runtime->buffer_size = VAR_4;
 return 0;
}
