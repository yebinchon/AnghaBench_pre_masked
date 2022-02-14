
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long addr; } ;
struct snd_pcm_substream {scalar_t__ stream; TYPE_1__ dma_buffer; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dummy; } ;
struct mbus_dram_target_info {int dummy; } ;
struct kirkwood_dma_data {int burst; scalar_t__ io; struct snd_pcm_substream* substream_rec; struct snd_pcm_substream* substream_play; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (scalar_t__,int ,unsigned long,struct mbus_dram_target_info const*) ;
 int VAR_9 ;
 int VAR_10 ;
 struct kirkwood_dma_data* FUNC_1 (struct snd_pcm_substream*) ;
 struct mbus_dram_target_info* FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,char*,struct kirkwood_dma_data*) ;
 int FUNC_4 (struct snd_pcm_runtime*,int ,int,scalar_t__) ;
 int FUNC_5 (struct snd_pcm_runtime*,int ,int ,int) ;
 int FUNC_6 (struct snd_pcm_substream*,int *) ;
 int FUNC_7 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_11)
{
 int VAR_12;
 struct snd_pcm_runtime *VAR_13 = VAR_11->runtime;
 struct kirkwood_dma_data *VAR_14 = FUNC_1(VAR_11);
 const struct mbus_dram_target_info *VAR_15;
 unsigned long VAR_16;

 FUNC_6(VAR_11, &VAR_10);


 VAR_12 = FUNC_4(VAR_13,
   VAR_6,
   VAR_14->burst * 2,
   VAR_2-1);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_5(VAR_13, 0,
   VAR_6,
   VAR_14->burst);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_5(VAR_11->runtime, 0,
    VAR_7,
    VAR_14->burst);
 if (VAR_12 < 0)
  return VAR_12;

 if (!VAR_14->substream_play && !VAR_14->substream_rec) {
  VAR_12 = FUNC_3(VAR_14->irq, VAR_9, VAR_1,
      "kirkwood-i2s", VAR_14);
  if (VAR_12)
   return -VAR_0;





  FUNC_7((unsigned int)-1, VAR_14->io + VAR_3);
 }

 VAR_15 = FUNC_2();
 VAR_16 = VAR_11->dma_buffer.addr;
 if (VAR_11->stream == VAR_8) {
  if (VAR_14->substream_play)
   return -VAR_0;
  VAR_14->substream_play = VAR_11;
  FUNC_0(VAR_14->io,
   VAR_4, VAR_16, VAR_15);
 } else {
  if (VAR_14->substream_rec)
   return -VAR_0;
  VAR_14->substream_rec = VAR_11;
  FUNC_0(VAR_14->io,
   VAR_5, VAR_16, VAR_15);
 }

 return 0;
}
