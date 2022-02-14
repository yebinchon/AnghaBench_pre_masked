
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct snd_pcm_runtime {int frame_bits; int buffer_size; int channels; scalar_t__ format; scalar_t__ dma_area; } ;
struct pcm_urb {int buffer; TYPE_3__* packets; } ;
struct pcm_substream {int dma_off; int period_off; TYPE_4__* instance; } ;
struct pcm_runtime {int out_n_analog; TYPE_2__* chip; } ;
struct TYPE_8__ {struct snd_pcm_runtime* runtime; } ;
struct TYPE_7__ {int length; } ;
struct TYPE_6__ {TYPE_1__* dev; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *,int) ;
 struct pcm_runtime* FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_3(struct pcm_substream *VAR_3,
  struct pcm_urb *VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;
 struct pcm_runtime *VAR_8 = FUNC_2(VAR_3->instance);
 struct snd_pcm_runtime *VAR_9 = VAR_3->instance->runtime;
 u32 *VAR_10 = (u32 *) (VAR_9->dma_area + VAR_3->dma_off
   * (VAR_9->frame_bits >> 3));
 u32 *VAR_11 = (u32 *) (VAR_9->dma_area + VAR_9->buffer_size
   * (VAR_9->frame_bits >> 3));
 u32 *VAR_12;
 int VAR_13 = VAR_9->channels << 2;

 if (VAR_9->format == VAR_2)
  VAR_12 = (u32 *) (VAR_4->buffer - 1);
 else if (VAR_9->format == VAR_1)
  VAR_12 = (u32 *) (VAR_4->buffer);
 else {
  FUNC_0(&VAR_8->chip->dev->dev, "Unknown sample format.");
  return;
 }

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {


  if (VAR_4->packets[VAR_5].length > 4)
   VAR_7 = (VAR_4->packets[VAR_5].length - 4)
     / (VAR_8->out_n_analog << 2);
  else
   VAR_7 = 0;
  VAR_12++;
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
   FUNC_1(VAR_12, VAR_10, VAR_13);
   VAR_10 += VAR_9->channels;
   VAR_12 += VAR_8->out_n_analog;
   VAR_3->dma_off++;
   VAR_3->period_off++;
   if (VAR_10 == VAR_11) {
    VAR_10 = (u32 *) VAR_9->dma_area;
    VAR_3->dma_off = 0;
   }
  }
 }
}
