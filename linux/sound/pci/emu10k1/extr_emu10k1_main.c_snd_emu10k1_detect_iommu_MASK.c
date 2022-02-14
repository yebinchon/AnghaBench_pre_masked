
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_emu10k1 {int iommu_workaround; TYPE_1__* card; } ;
struct iommu_domain {scalar_t__ type; } ;
struct TYPE_5__ {int bus; } ;
struct TYPE_4__ {TYPE_2__* dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 struct iommu_domain* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct snd_emu10k1 *VAR_1)
{
 struct iommu_domain *VAR_2;

 VAR_1->iommu_workaround = 0;

 if (!FUNC_2(VAR_1->card->dev->bus))
  return;

 VAR_2 = FUNC_1(VAR_1->card->dev);
 if (VAR_2 && VAR_2->type == VAR_0)
  return;

 FUNC_0(VAR_1->card->dev,
     "non-passthrough IOMMU detected, widening DMA allocations");
 VAR_1->iommu_workaround = 1;
}
