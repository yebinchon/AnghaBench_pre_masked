
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pmac {TYPE_1__* pdev; } ;
struct pmac_dbdma {int size; int dma_base; scalar_t__ space; } ;
struct dbdma_cmd {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,unsigned int,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_pmac *VAR_0, struct pmac_dbdma *VAR_1)
{
 if (VAR_1->space) {
  unsigned int VAR_2 = sizeof(struct dbdma_cmd) * (VAR_1->size + 1);

  FUNC_0(&VAR_0->pdev->dev, VAR_2, VAR_1->space, VAR_1->dma_base);
 }
}
