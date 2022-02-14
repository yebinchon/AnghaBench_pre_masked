
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep93xx_dma_data {scalar_t__ direction; } ;
struct dma_chan {struct ep93xx_dma_data* private; } ;


 scalar_t__ FUNC_0 (struct dma_chan*) ;

__attribute__((used)) static bool FUNC_1(struct dma_chan *VAR_0, void *VAR_1)
{
 struct ep93xx_dma_data *VAR_2 = VAR_1;

 if (VAR_2->direction == FUNC_0(VAR_0)) {
  VAR_0->private = VAR_2;
  return 1;
 }

 return 0;
}
