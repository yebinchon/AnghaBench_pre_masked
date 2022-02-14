
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gus_pcm_private {int dma_size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct gus_pcm_private *VAR_1, int VAR_2, unsigned int VAR_3,
      unsigned int VAR_4)
{
 unsigned int VAR_5 = VAR_3 + (VAR_2 * (VAR_1->dma_size / 2));
 if (FUNC_0(VAR_5 > VAR_1->dma_size))
  return -VAR_0;
 if (FUNC_0(VAR_5 + VAR_4 > VAR_1->dma_size))
  return -VAR_0;
 return VAR_5;
}
