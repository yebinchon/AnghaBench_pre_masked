
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct codec_setup_io TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u32 ;
struct snd_azf3328_codec_data {int lock; int running; } ;
struct snd_azf3328 {TYPE_1__* card; } ;
struct codec_setup_io {unsigned long dma_start_1; unsigned long dma_start_2; unsigned long dma_lengths; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int ,char*,unsigned long,unsigned long,unsigned long,unsigned long,unsigned int,unsigned int) ;
 int FUNC_2 (struct snd_azf3328_codec_data*,int ,TYPE_2__*,int) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;

__attribute__((used)) static void
FUNC_5(struct snd_azf3328 *VAR_1,
     struct snd_azf3328_codec_data *VAR_2,
     unsigned long VAR_3,
     unsigned int VAR_4,
     unsigned int VAR_5
)
{
 FUNC_0(VAR_4 & 1, "odd period length!?\n");
 FUNC_0(VAR_5 != 2 * VAR_4,
   "missed our input expectations! %u vs. %u\n",
   VAR_5, VAR_4);
 if (!VAR_2->running) {


  unsigned long VAR_6;


  u32 VAR_7;
  struct codec_setup_io {
   u32 dma_start_1;
   u32 dma_start_2;
   u32 dma_lengths;
  } __attribute__((packed)) VAR_8;

  VAR_7 = VAR_5/2;

  VAR_8.dma_start_1 = VAR_3;
  VAR_8.dma_start_2 = VAR_3+VAR_7;

  FUNC_1(VAR_1->card->dev,
   "setdma: buffers %08x[%u] / %08x[%u], %u, %u\n",
    VAR_8.dma_start_1, VAR_7,
    VAR_8.dma_start_2, VAR_7,
    VAR_4, VAR_5);
  VAR_8.dma_lengths = (VAR_7 << 16) | (VAR_7);

  FUNC_3(VAR_2->lock, VAR_6);
  FUNC_2(
   VAR_2, VAR_0, &VAR_8, 3
  );
  FUNC_4(VAR_2->lock, VAR_6);
 }
}
