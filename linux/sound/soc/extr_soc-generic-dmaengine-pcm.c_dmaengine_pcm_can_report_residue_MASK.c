
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_slave_caps {scalar_t__ residue_granularity; } ;
struct dma_chan {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct dma_chan*,struct dma_slave_caps*) ;

__attribute__((used)) static bool FUNC_2(struct device *VAR_1,
 struct dma_chan *VAR_2)
{
 struct dma_slave_caps VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, &VAR_3);
 if (VAR_4 != 0) {
  FUNC_0(VAR_1, "Failed to get DMA channel capabilities, falling back to period counting: %d\n",
    VAR_4);
  return 0;
 }

 if (VAR_3.residue_granularity == VAR_0)
  return 0;

 return 1;
}
