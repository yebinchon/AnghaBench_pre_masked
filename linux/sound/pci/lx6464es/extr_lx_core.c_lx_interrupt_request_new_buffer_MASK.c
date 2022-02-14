
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {scalar_t__ addr; } ;
struct snd_pcm_substream {TYPE_2__ dma_buffer; TYPE_1__* runtime; } ;
struct lx_stream {unsigned int is_capture; int frame_pos; struct snd_pcm_substream* stream; } ;
struct lx6464es {int lock; TYPE_3__* card; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int channels; int period_size; int const periods; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct lx6464es*,int ,unsigned int const,int*,int*,int*) ;
 int FUNC_2 (struct lx6464es*,int ,unsigned int const,int const,int,int,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__,int*,int*) ;

__attribute__((used)) static int FUNC_6(struct lx6464es *VAR_1,
        struct lx_stream *VAR_2)
{
 struct snd_pcm_substream *VAR_3 = VAR_2->stream;
 const unsigned int VAR_4 = VAR_2->is_capture;
 int VAR_5;

 const u32 VAR_6 = VAR_3->runtime->channels;
 const u32 VAR_7 = VAR_6 * 3;
 const u32 VAR_8 = VAR_3->runtime->period_size;
 const u32 VAR_9 = VAR_8 * VAR_7;
 const u32 VAR_10 = VAR_2->frame_pos;
 const u32 VAR_11 = ((VAR_10+1) == VAR_3->runtime->periods) ?
  0 : VAR_10 + 1;

 dma_addr_t VAR_12 = VAR_3->dma_buffer.addr + VAR_10 * VAR_9;
 u32 VAR_13 = 0;
 u32 VAR_14 = 0;
 u32 VAR_15 = 0;

 u32 VAR_16, VAR_17;
 u32 VAR_18[VAR_0];

 FUNC_0(VAR_1->card->dev, "->lx_interrupt_request_new_buffer\n");

 FUNC_3(&VAR_1->lock);

 VAR_5 = FUNC_1(VAR_1, 0, VAR_4, &VAR_16, &VAR_17, VAR_18);
 FUNC_0(VAR_1->card->dev,
  "interrupt: needed %d, freed %d\n", VAR_16, VAR_17);

 FUNC_5(VAR_12, &VAR_14, &VAR_13);
 VAR_5 = FUNC_2(VAR_1, 0, VAR_4, VAR_9, VAR_14, VAR_13,
        &VAR_15);
 FUNC_0(VAR_1->card->dev,
  "interrupt: gave buffer index %x on 0x%lx (%d bytes)\n",
      VAR_15, (unsigned long)VAR_12, VAR_9);

 VAR_2->frame_pos = VAR_11;
 FUNC_4(&VAR_1->lock);

 return VAR_5;
}
