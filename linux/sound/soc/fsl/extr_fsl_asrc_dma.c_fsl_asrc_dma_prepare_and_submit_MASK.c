
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_component {struct device* dev; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_runtime {int dma_addr; int no_period_wakeup; struct fsl_asrc_pair* private_data; } ;
struct fsl_asrc_pair {TYPE_1__** desc; int * dma_chan; scalar_t__ pos; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct snd_pcm_substream* callback_param; int callback; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct device*,char*) ;
 void* FUNC_1 (int ,int,int,int,int ,unsigned long) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_10 ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_substream*) ;
 struct snd_soc_component* FUNC_5 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_11)
{
 u8 VAR_12 = VAR_11->stream == VAR_9 ? VAR_8 : VAR_7;
 struct snd_soc_pcm_runtime *VAR_13 = VAR_11->private_data;
 struct snd_pcm_runtime *VAR_14 = VAR_11->runtime;
 struct fsl_asrc_pair *VAR_15 = VAR_14->private_data;
 struct snd_soc_component *VAR_16 = FUNC_5(VAR_13, VAR_5);
 struct device *VAR_17 = VAR_16->dev;
 unsigned long VAR_18 = VAR_0;


 if (!VAR_11->runtime->no_period_wakeup)
  VAR_18 |= VAR_4;

 VAR_15->pos = 0;
 VAR_15->desc[!VAR_12] = FUNC_1(
   VAR_15->dma_chan[!VAR_12], VAR_14->dma_addr,
   FUNC_3(VAR_11),
   FUNC_4(VAR_11),
   VAR_12 == VAR_8 ? VAR_3 : VAR_2, VAR_18);
 if (!VAR_15->desc[!VAR_12]) {
  FUNC_0(VAR_17, "failed to prepare slave DMA for Front-End\n");
  return -VAR_6;
 }

 VAR_15->desc[!VAR_12]->callback = VAR_10;
 VAR_15->desc[!VAR_12]->callback_param = VAR_11;

 FUNC_2(VAR_15->desc[!VAR_12]);


 VAR_15->desc[VAR_12] = FUNC_1(
   VAR_15->dma_chan[VAR_12], 0xffff, 64, 64, VAR_1, 0);
 if (!VAR_15->desc[VAR_12]) {
  FUNC_0(VAR_17, "failed to prepare slave DMA for Back-End\n");
  return -VAR_6;
 }

 FUNC_2(VAR_15->desc[VAR_12]);

 return 0;
}
