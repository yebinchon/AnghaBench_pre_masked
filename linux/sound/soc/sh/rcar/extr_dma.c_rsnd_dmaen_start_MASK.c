
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dmaen {scalar_t__ cookie; int chan; int dma_len; } ;
struct rsnd_dma {int dst_addr; int src_addr; } ;
struct rsnd_dai_stream {struct snd_pcm_substream* substream; } ;
struct dma_slave_config {int dst_addr; int src_addr; void* dst_addr_width; void* src_addr_width; int direction; } ;
struct dma_async_tx_descriptor {int callback_param; int callback; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int dma_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*,int ,int *,int *) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int ) ;
 struct dma_async_tx_descriptor* FUNC_3 (int ,int ,int ,int ,int ,int) ;
 int FUNC_4 (int ,struct dma_slave_config*) ;
 scalar_t__ FUNC_5 (struct dma_async_tx_descriptor*) ;
 struct rsnd_dmaen* FUNC_6 (struct rsnd_dma*) ;
 int VAR_6 ;
 int FUNC_7 (struct rsnd_dai_stream*) ;
 int FUNC_8 (struct rsnd_dma*) ;
 int FUNC_9 (struct rsnd_mod*) ;
 struct rsnd_dma* FUNC_10 (struct rsnd_mod*) ;
 struct device* FUNC_11 (struct rsnd_priv*) ;
 int FUNC_12 (struct snd_pcm_substream*) ;
 int FUNC_13 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_14(struct rsnd_mod *VAR_7,
       struct rsnd_dai_stream *VAR_8,
       struct rsnd_priv *VAR_9)
{
 struct rsnd_dma *VAR_10 = FUNC_10(VAR_7);
 struct rsnd_dmaen *VAR_11 = FUNC_6(VAR_10);
 struct snd_pcm_substream *VAR_12 = VAR_8->substream;
 struct device *VAR_13 = FUNC_11(VAR_9);
 struct dma_async_tx_descriptor *VAR_14;
 struct dma_slave_config VAR_15 = {};
 int VAR_16 = FUNC_7(VAR_8);
 int VAR_17;

 VAR_15.direction = VAR_16 ? VAR_2 : VAR_1;
 VAR_15.src_addr = VAR_10->src_addr;
 VAR_15.dst_addr = VAR_10->dst_addr;
 VAR_15.src_addr_width = VAR_4;
 VAR_15.dst_addr_width = VAR_4;

 FUNC_0(VAR_13, "%s %pad -> %pad\n",
  FUNC_9(VAR_7),
  &VAR_15.src_addr, &VAR_15.dst_addr);

 VAR_17 = FUNC_4(VAR_11->chan, &VAR_15);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_14 = FUNC_3(VAR_11->chan,
      VAR_12->runtime->dma_addr,
      FUNC_12(VAR_12),
      FUNC_13(VAR_12),
      VAR_16 ? VAR_2 : VAR_1,
      VAR_3 | VAR_0);

 if (!VAR_14) {
  FUNC_1(VAR_13, "dmaengine_prep_slave_sg() fail\n");
  return -VAR_5;
 }

 VAR_14->callback = VAR_6;
 VAR_14->callback_param = FUNC_8(VAR_10);

 VAR_11->dma_len = FUNC_12(VAR_12);

 VAR_11->cookie = FUNC_5(VAR_14);
 if (VAR_11->cookie < 0) {
  FUNC_1(VAR_13, "dmaengine_submit() fail\n");
  return -VAR_5;
 }

 FUNC_2(VAR_11->chan);

 return 0;
}
