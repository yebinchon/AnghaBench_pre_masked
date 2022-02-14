
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_dma_data {int dma_request; int peripheral_type; int priority; } ;
typedef enum sdma_peripheral_type { ____Placeholder_sdma_peripheral_type } sdma_peripheral_type ;


 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(struct imx_dma_data *VAR_1,
 int VAR_2, enum sdma_peripheral_type VAR_3)
{
 VAR_1->dma_request = VAR_2;
 VAR_1->priority = VAR_0;
 VAR_1->peripheral_type = VAR_3;
}
