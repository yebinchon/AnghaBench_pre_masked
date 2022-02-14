
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int buffer_size; scalar_t__ dma_area; } ;
struct TYPE_8__ {int pos_done; } ;
struct snd_line6_pcm {TYPE_4__ in; TYPE_3__* line6; TYPE_2__* properties; } ;
struct TYPE_7__ {int ifcdev; } ;
struct TYPE_5__ {int channels_max; } ;
struct TYPE_6__ {int bytes_per_channel; TYPE_1__ capture_hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 struct snd_pcm_substream* FUNC_1 (struct snd_line6_pcm*,int ) ;
 int FUNC_2 (scalar_t__,char*,int) ;

void FUNC_3(struct snd_line6_pcm *VAR_1, char *VAR_2, int VAR_3)
{
 struct snd_pcm_substream *VAR_4 =
     FUNC_1(VAR_1, VAR_0);
 struct snd_pcm_runtime *VAR_5 = VAR_4->runtime;
 const int VAR_6 =
  VAR_1->properties->bytes_per_channel *
  VAR_1->properties->capture_hw.channels_max;
 int VAR_7 = VAR_3 / VAR_6;

 if (VAR_5 == ((void*)0))
  return;

 if (VAR_1->in.pos_done + VAR_7 > VAR_5->buffer_size) {




  int VAR_8;

  VAR_8 = VAR_5->buffer_size - VAR_1->in.pos_done;

  if (VAR_8 > 0) {
   FUNC_2(VAR_5->dma_area +
          VAR_1->in.pos_done * VAR_6, VAR_2,
          VAR_8 * VAR_6);
   FUNC_2(VAR_5->dma_area, VAR_2 + VAR_8 * VAR_6,
          (VAR_7 - VAR_8) * VAR_6);
  } else {

   FUNC_0(VAR_1->line6->ifcdev,
    "driver bug: len = %d\n", VAR_8);
  }
 } else {

  FUNC_2(VAR_5->dma_area +
         VAR_1->in.pos_done * VAR_6, VAR_2, VAR_3);
 }

 VAR_1->in.pos_done += VAR_7;
 if (VAR_1->in.pos_done >= VAR_5->buffer_size)
  VAR_1->in.pos_done -= VAR_5->buffer_size;
}
