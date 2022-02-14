
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct urb {int* transfer_buffer; } ;
struct TYPE_5__ {int byte_idx; size_t marker; int channel; } ;
struct snd_usb_substream {unsigned int hwptr_done; TYPE_3__* cur_audiofmt; TYPE_2__ dsd_dop; TYPE_1__* pcm_substream; } ;
struct snd_pcm_runtime {int frame_bits; unsigned int buffer_size; int* dma_area; int channels; } ;
struct TYPE_6__ {scalar_t__ dsd_bitrev; } ;
struct TYPE_4__ {struct snd_pcm_runtime* runtime; } ;


 size_t FUNC_0 (int*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct snd_usb_substream *VAR_0,
          struct urb *VAR_1, unsigned int VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_0->pcm_substream->runtime;
 unsigned int VAR_4 = VAR_3->frame_bits >> 3;
 unsigned int VAR_5 = 0;
 unsigned int VAR_6 = VAR_0->hwptr_done;
 unsigned int VAR_7 = VAR_3->buffer_size * VAR_4;
 u8 *VAR_8 = VAR_1->transfer_buffer;
 u8 *VAR_9 = VAR_3->dma_area;
 u8 VAR_10[] = { 0x05, 0xfa };
 while (VAR_2--) {
  if (++VAR_0->dsd_dop.byte_idx == 3) {

   VAR_8[VAR_5++] = VAR_10[VAR_0->dsd_dop.marker];
   VAR_6 += 2;
   VAR_0->dsd_dop.byte_idx = 0;

   if (++VAR_0->dsd_dop.channel % VAR_3->channels == 0) {

    VAR_0->dsd_dop.marker++;
    VAR_0->dsd_dop.marker %= FUNC_0(VAR_10);
    VAR_0->dsd_dop.channel = 0;
   }
  } else {

   int VAR_11 = (VAR_6 + VAR_0->dsd_dop.byte_idx - 1) % VAR_7;

   if (VAR_0->cur_audiofmt->dsd_bitrev)
    VAR_8[VAR_5++] = FUNC_1(VAR_9[VAR_11]);
   else
    VAR_8[VAR_5++] = VAR_9[VAR_11];

   VAR_0->hwptr_done++;
  }
 }
 if (VAR_0->hwptr_done >= VAR_3->buffer_size * VAR_4)
  VAR_0->hwptr_done -= VAR_3->buffer_size * VAR_4;
}
