
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_bytes; struct idma_ctrl* private_data; } ;
struct idma_ctrl {int periodsz; int lock; void* token; } ;
struct TYPE_2__ {int lp_tx_addr; scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_8)
{
 struct snd_pcm_runtime *VAR_9 = VAR_8->runtime;
 struct idma_ctrl *VAR_10 = VAR_8->runtime->private_data;
 u32 VAR_11;

 FUNC_1(&VAR_10->lock);
 VAR_10->token = (void *) VAR_8;
 FUNC_2(&VAR_10->lock);


 VAR_11 = VAR_7.lp_tx_addr + VAR_10->periodsz;
 FUNC_3(VAR_11, VAR_7.regs + VAR_2);


 VAR_11 = VAR_7.lp_tx_addr;
 FUNC_3(VAR_11, VAR_7.regs + VAR_6);





 VAR_11 = FUNC_0(VAR_7.regs + VAR_3);
 VAR_11 &= ~(VAR_5 << VAR_4);
 VAR_11 |= (((VAR_9->dma_bytes >> 2) &
   VAR_5) << VAR_4);
 FUNC_3(VAR_11, VAR_7.regs + VAR_3);

 VAR_11 = FUNC_0(VAR_7.regs + VAR_1);
 VAR_11 |= VAR_0;
 FUNC_3(VAR_11, VAR_7.regs + VAR_1);

 return 0;
}
