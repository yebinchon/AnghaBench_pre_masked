
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_chan {int dummy; } ;
typedef int dma_filter_fn ;
typedef int dma_cap_mask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 struct dma_chan* FUNC_2 (int ,int ,void*) ;

struct dma_chan *FUNC_3(dma_filter_fn VAR_2,
 void *VAR_3)
{
 dma_cap_mask_t VAR_4;

 FUNC_1(VAR_4);
 FUNC_0(VAR_1, VAR_4);
 FUNC_0(VAR_0, VAR_4);

 return FUNC_2(VAR_4, VAR_2, VAR_3);
}
