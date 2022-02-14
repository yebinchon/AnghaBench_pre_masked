
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {scalar_t__ transfer_buffer; } ;
struct snd_usb_substream {unsigned int hwptr_done; TYPE_1__* pcm_substream; } ;
struct snd_pcm_runtime {int buffer_size; scalar_t__ dma_area; } ;
struct TYPE_2__ {struct snd_pcm_runtime* runtime; } ;


 int FUNC_0 (scalar_t__,scalar_t__,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct snd_usb_substream *VAR_0, struct urb *VAR_1,
   int VAR_2, int VAR_3, unsigned int VAR_4)
{
 struct snd_pcm_runtime *VAR_5 = VAR_0->pcm_substream->runtime;

 if (VAR_0->hwptr_done + VAR_4 > VAR_5->buffer_size * VAR_3) {

  unsigned int VAR_6 =
   VAR_5->buffer_size * VAR_3 - VAR_0->hwptr_done;
  FUNC_0(VAR_1->transfer_buffer + VAR_2,
         VAR_5->dma_area + VAR_0->hwptr_done, VAR_6);
  FUNC_0(VAR_1->transfer_buffer + VAR_2 + VAR_6,
         VAR_5->dma_area, VAR_4 - VAR_6);
 } else {
  FUNC_0(VAR_1->transfer_buffer + VAR_2,
         VAR_5->dma_area + VAR_0->hwptr_done, VAR_4);
 }
 VAR_0->hwptr_done += VAR_4;
 if (VAR_0->hwptr_done >= VAR_5->buffer_size * VAR_3)
  VAR_0->hwptr_done -= VAR_5->buffer_size * VAR_3;
}
