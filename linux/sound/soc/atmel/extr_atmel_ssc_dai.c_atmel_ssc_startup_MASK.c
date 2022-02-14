
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; int runtime; } ;
struct platform_device {size_t id; } ;
struct atmel_ssc_info {int dir_mask; struct atmel_pcm_dma_params** dma_params; TYPE_1__* ssc; int initialized; int mck_rate; } ;
struct atmel_pcm_dma_params {struct snd_pcm_substream* substream; TYPE_1__* ssc; } ;
struct TYPE_2__ {int regs; int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ,int ,int ,int ,struct atmel_ssc_info*,int ,int ,int) ;
 int FUNC_6 (struct snd_soc_dai*,struct snd_pcm_substream*,struct atmel_pcm_dma_params*) ;
 struct atmel_pcm_dma_params** VAR_11 ;
 struct atmel_ssc_info* VAR_12 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 struct platform_device* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_13,
        struct snd_soc_dai *VAR_14)
{
 struct platform_device *VAR_15 = FUNC_9(VAR_14->dev);
 struct atmel_ssc_info *VAR_16 = &VAR_12[VAR_15->id];
 struct atmel_pcm_dma_params *VAR_17;
 int VAR_18, VAR_19;
 int VAR_20;

 FUNC_4("atmel_ssc_startup: SSC_SR=0x%x\n",
  FUNC_7(VAR_16->ssc->regs, VAR_7));


 FUNC_4("atmel_ssc_dai: Starting clock\n");
 FUNC_1(VAR_16->ssc->clk);
 VAR_16->mck_rate = FUNC_2(VAR_16->ssc->clk);


 if (!VAR_16->initialized)
  FUNC_8(VAR_16->ssc->regs, VAR_0, FUNC_0(VAR_1));

 if (VAR_13->stream == VAR_6) {
  VAR_18 = 0;
  VAR_19 = VAR_9;
 } else {
  VAR_18 = 1;
  VAR_19 = VAR_8;
 }

 VAR_20 = FUNC_5(VAR_13->runtime, 0,
      VAR_5,
      VAR_10,
      VAR_16,
      VAR_4,
      VAR_3, -1);
 if (VAR_20 < 0) {
  FUNC_3(VAR_14->dev, "Failed to specify rate rule: %d\n", VAR_20);
  return VAR_20;
 }

 VAR_17 = &VAR_11[VAR_15->id][VAR_18];
 VAR_17->ssc = VAR_16->ssc;
 VAR_17->substream = VAR_13;

 VAR_16->dma_params[VAR_18] = VAR_17;

 FUNC_6(VAR_14, VAR_13, VAR_17);

 if (VAR_16->dir_mask & VAR_19)
  return -VAR_2;

 VAR_16->dir_mask |= VAR_19;

 return 0;
}
