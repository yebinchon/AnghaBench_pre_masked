
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_iso_packet_descriptor {int offset; int actual_length; } ;
struct urb {unsigned char* transfer_buffer; } ;
struct snd_usb_caiaqdev {int n_streams; int input_panic; int* audio_in_buf_pos; int* period_in_count; scalar_t__ first_packet; struct snd_pcm_substream** sub_capture; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {char* dma_area; int buffer_size; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct device* FUNC_0 (struct snd_usb_caiaqdev*) ;
 int FUNC_1 (struct device*,char*,int,unsigned char,int,int,int) ;
 int FUNC_2 (struct snd_pcm_runtime*,int ) ;

__attribute__((used)) static void FUNC_3(struct snd_usb_caiaqdev *VAR_3,
         const struct urb *VAR_4,
         const struct usb_iso_packet_descriptor *VAR_5)
{
 unsigned char *VAR_6 = VAR_4->transfer_buffer + VAR_5->offset;
 struct device *VAR_7 = FUNC_0(VAR_3);
 int VAR_8, VAR_9;


 if (VAR_5->actual_length % (VAR_1 * VAR_2))
  return;

 for (VAR_9 = 0; VAR_9 < VAR_5->actual_length;) {
  for (VAR_8 = 0; VAR_8 < VAR_3->n_streams; VAR_8++) {
   struct snd_pcm_substream *VAR_10 = VAR_3->sub_capture[VAR_8];
   char *VAR_11 = ((void*)0);
   int VAR_12, VAR_13, VAR_14 = 0;

   if (VAR_10 && !VAR_3->input_panic) {
    struct snd_pcm_runtime *VAR_15 = VAR_10->runtime;
    VAR_11 = VAR_15->dma_area;
    VAR_14 = FUNC_2(VAR_15, VAR_15->buffer_size);
   }

   for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {

    if (VAR_11) {
     for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
      VAR_11[VAR_3->audio_in_buf_pos[VAR_8]++] = VAR_6[VAR_9+VAR_13];

      if (VAR_3->audio_in_buf_pos[VAR_8] == VAR_14)
       VAR_3->audio_in_buf_pos[VAR_8] = 0;
     }

     VAR_3->period_in_count[VAR_8] += VAR_0;
    }

    VAR_9 += VAR_0;

    if (VAR_6[VAR_9] != ((VAR_8 << 1) | VAR_12) &&
        !VAR_3->first_packet) {
     if (!VAR_3->input_panic)
      FUNC_1(VAR_7, " EXPECTED: %02x got %02x, c %d, stream %d, i %d\n",
        ((VAR_8 << 1) | VAR_12), VAR_6[VAR_9], VAR_12, VAR_8, VAR_9);
     VAR_3->input_panic = 1;
    }

    VAR_9++;
   }
  }
 }

 if (VAR_3->first_packet > 0)
  VAR_3->first_packet--;
}
