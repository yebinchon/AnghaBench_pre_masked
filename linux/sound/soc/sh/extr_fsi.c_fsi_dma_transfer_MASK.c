
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct fsi_stream {int chan; struct snd_pcm_substream* substream; } ;
struct fsi_priv {int dummy; } ;
struct dma_async_tx_descriptor {struct fsi_stream* callback_param; int callback; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
struct TYPE_2__ {int dma_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 struct dma_async_tx_descriptor* FUNC_2 (int ,int ,int ,int ,int,int) ;
 scalar_t__ FUNC_3 (struct dma_async_tx_descriptor*) ;
 int VAR_9 ;
 struct snd_soc_dai* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (struct fsi_priv*,int ,int ,int ) ;
 int FUNC_6 (struct fsi_priv*,int ) ;
 int FUNC_7 (struct fsi_priv*,int ,int ) ;
 int FUNC_8 (struct fsi_priv*,struct fsi_stream*) ;
 int FUNC_9 (struct snd_pcm_substream*) ;
 int FUNC_10 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_11(struct fsi_priv *VAR_10, struct fsi_stream *VAR_11)
{
 struct snd_soc_dai *VAR_12 = FUNC_4(VAR_11->substream);
 struct snd_pcm_substream *VAR_13 = VAR_11->substream;
 struct dma_async_tx_descriptor *VAR_14;
 int VAR_15 = FUNC_8(VAR_10, VAR_11);
 enum dma_transfer_direction VAR_16;
 int VAR_17 = -VAR_6;

 if (VAR_15)
  VAR_16 = VAR_4;
 else
  VAR_16 = VAR_3;

 VAR_14 = FUNC_2(VAR_11->chan,
      VAR_13->runtime->dma_addr,
      FUNC_9(VAR_13),
      FUNC_10(VAR_13),
      VAR_16,
      VAR_5 | VAR_2);
 if (!VAR_14) {
  FUNC_0(VAR_12->dev, "dmaengine_prep_dma_cyclic() fail\n");
  goto fsi_dma_transfer_err;
 }

 VAR_14->callback = VAR_9;
 VAR_14->callback_param = VAR_11;

 if (FUNC_3(VAR_14) < 0) {
  FUNC_0(VAR_12->dev, "tx_submit() fail\n");
  goto fsi_dma_transfer_err;
 }

 FUNC_1(VAR_11->chan);
 if (!VAR_15) {
  if (VAR_7 & FUNC_6(VAR_10, VAR_1)) {
   FUNC_5(VAR_10, VAR_0, VAR_8, VAR_8);
   FUNC_7(VAR_10, VAR_1, 0);
  }
 }

 VAR_17 = 0;

fsi_dma_transfer_err:
 return VAR_17;
}
