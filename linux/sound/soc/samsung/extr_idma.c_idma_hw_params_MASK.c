
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_pcm_substream {int dma_buffer; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ dma_bytes; scalar_t__ dma_addr; struct idma_ctrl* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct idma_ctrl {scalar_t__ end; int periodsz; int period; scalar_t__ pos; scalar_t__ start; } ;
struct TYPE_2__ {scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct snd_pcm_substream*,int ) ;
 scalar_t__ FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct snd_pcm_substream*,int *) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_7,
    struct snd_pcm_hw_params *VAR_8)
{
 struct snd_pcm_runtime *VAR_9 = VAR_7->runtime;
 struct idma_ctrl *VAR_10 = VAR_7->runtime->private_data;
 u32 VAR_11 = FUNC_4(VAR_5.regs + VAR_3);
 u32 VAR_12 = FUNC_4(VAR_5.regs + VAR_2);

 VAR_12 |= (VAR_0 | VAR_1);
 VAR_11 |= VAR_4;
 FUNC_6(VAR_12, VAR_5.regs + VAR_2);
 FUNC_6(VAR_11, VAR_5.regs + VAR_3);

 FUNC_5(VAR_7, &VAR_7->dma_buffer);
 VAR_9->dma_bytes = FUNC_1(VAR_8);

 VAR_10->start = VAR_10->pos = VAR_9->dma_addr;
 VAR_10->period = FUNC_3(VAR_8);
 VAR_10->periodsz = FUNC_2(VAR_8);
 VAR_10->end = VAR_9->dma_addr + VAR_9->dma_bytes;

 FUNC_0(VAR_7, VAR_6);

 return 0;
}
