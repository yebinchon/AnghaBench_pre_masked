
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ dma_addr; scalar_t__ dma_area; int format; struct gus_pcm_private* private_data; } ;
struct snd_gf1_dma_block {unsigned int addr; unsigned int count; int ack; struct gus_pcm_private* private_data; scalar_t__ buf_addr; scalar_t__ buffer; int cmd; } ;
struct gus_pcm_private {int dma_count; int gus; } ;
typedef int block ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_gf1_dma_block*,int ,int) ;
 int FUNC_2 (int ,struct snd_gf1_dma_block*,int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_4,
        unsigned int VAR_5,
        unsigned int VAR_6,
        unsigned int VAR_7)
{
 struct snd_gf1_dma_block VAR_8;
 struct snd_pcm_runtime *VAR_9 = VAR_4->runtime;
 struct gus_pcm_private *VAR_10 = VAR_9->private_data;

 VAR_7 += VAR_5 & 31;
 VAR_5 &= ~31;




 FUNC_1(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.cmd = VAR_1;
 if (FUNC_3(VAR_9->format))
  VAR_8.cmd |= VAR_2;
 if (FUNC_4(VAR_9->format) == 16)
  VAR_8.cmd |= VAR_0;
 VAR_8.addr = VAR_6 & ~31;
 VAR_8.buffer = VAR_9->dma_area + VAR_5;
 VAR_8.buf_addr = VAR_9->dma_addr + VAR_5;
 VAR_8.count = VAR_7;
 VAR_8.private_data = VAR_10;
 VAR_8.ack = VAR_3;
 if (!FUNC_2(VAR_10->gus, &VAR_8, 0, 0))
  FUNC_0(&VAR_10->dma_count);
 return 0;
}
