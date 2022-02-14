
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
struct lx_stream {unsigned int is_capture; scalar_t__ frame_pos; int status; struct snd_pcm_substream* stream; } ;
struct lx6464es {TYPE_3__* card; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int channels; int period_size; int periods; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct lx6464es*,int ,unsigned int const,int*,int*,int*) ;
 int FUNC_4 (struct lx6464es*,int ,unsigned int const,int const,int ,int ,int*) ;
 int FUNC_5 (struct lx6464es*,int ,unsigned int const) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct lx6464es *VAR_1, struct lx_stream *VAR_2)
{
 struct snd_pcm_substream *VAR_3 = VAR_2->stream;
 const unsigned int VAR_4 = VAR_2->is_capture;

 int VAR_5;

 const u32 VAR_6 = VAR_3->runtime->channels;
 const u32 VAR_7 = VAR_6 * 3;
 const u32 VAR_8 = VAR_3->runtime->period_size;
 const u32 VAR_9 = VAR_3->runtime->periods;
 const u32 VAR_10 = VAR_8 * VAR_7;

 dma_addr_t VAR_11 = VAR_3->dma_buffer.addr;
 int VAR_12;

 u32 VAR_13, VAR_14;
 u32 VAR_15[5];

 for (VAR_12 = 0; VAR_12 != VAR_9; ++VAR_12) {
  u32 VAR_16 = 0;

  VAR_5 = FUNC_3(VAR_1, 0, VAR_4, &VAR_13, &VAR_14,
        VAR_15);
  FUNC_0(VAR_1->card->dev, "starting: needed %d, freed %d\n",
       VAR_13, VAR_14);

  VAR_5 = FUNC_4(VAR_1, 0, VAR_4, VAR_10,
         FUNC_2(VAR_11), FUNC_6(VAR_11),
         &VAR_16);

  FUNC_0(VAR_1->card->dev, "starting: buffer index %x on 0x%lx (%d bytes)\n",
       VAR_16, (unsigned long)VAR_11, VAR_10);
  VAR_11 += VAR_10;
 }

 VAR_5 = FUNC_3(VAR_1, 0, VAR_4, &VAR_13, &VAR_14, VAR_15);
 FUNC_0(VAR_1->card->dev, "starting: needed %d, freed %d\n", VAR_13, VAR_14);

 FUNC_0(VAR_1->card->dev, "starting: starting stream\n");
 VAR_5 = FUNC_5(VAR_1, 0, VAR_4);
 if (VAR_5 < 0)
  FUNC_1(VAR_1->card->dev, "couldn't start stream\n");
 else
  VAR_2->status = VAR_0;

 VAR_2->frame_pos = 0;
}
