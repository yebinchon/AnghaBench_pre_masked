
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dma_ctrl {int dmaen_num; } ;
struct rsnd_dma {int dummy; } ;
struct rsnd_dai_stream {int dmac_dev; } ;
struct dma_chan {TYPE_1__* device; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (struct dma_chan*) ;
 struct dma_chan* FUNC_3 (struct rsnd_dai_stream*,struct rsnd_mod*,struct rsnd_mod*) ;
 struct rsnd_priv* FUNC_4 (struct rsnd_dai_stream*) ;
 struct rsnd_dma_ctrl* FUNC_5 (struct rsnd_priv*) ;

__attribute__((used)) static int FUNC_6(struct rsnd_dai_stream *VAR_2,
      struct rsnd_dma *VAR_3,
      struct rsnd_mod *VAR_4, struct rsnd_mod *VAR_5)
{
 struct rsnd_priv *VAR_6 = FUNC_4(VAR_2);
 struct rsnd_dma_ctrl *VAR_7 = FUNC_5(VAR_6);
 struct dma_chan *VAR_8;


 VAR_8 = FUNC_3(VAR_2, VAR_4, VAR_5);
 if (FUNC_0(VAR_8)) {

  if (FUNC_1(VAR_8) == -VAR_1)
   return FUNC_1(VAR_8);







  return -VAR_0;
 }






 VAR_2->dmac_dev = VAR_8->device->dev;

 FUNC_2(VAR_8);

 VAR_7->dmaen_num++;

 return 0;
}
