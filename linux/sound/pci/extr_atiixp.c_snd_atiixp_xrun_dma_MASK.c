
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct atiixp_dma {int substream; TYPE_2__* ops; int running; } ;
struct atiixp {TYPE_1__* card; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct atiixp *VAR_0, struct atiixp_dma *VAR_1)
{
 if (! VAR_1->substream || ! VAR_1->running)
  return;
 FUNC_0(VAR_0->card->dev, "XRUN detected (DMA %d)\n", VAR_1->ops->type);
 FUNC_1(VAR_1->substream);
}
