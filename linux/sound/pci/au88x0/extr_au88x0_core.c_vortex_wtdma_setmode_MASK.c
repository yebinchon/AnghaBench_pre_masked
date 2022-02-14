
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mmio; TYPE_2__* dma_wt; } ;
typedef TYPE_1__ vortex_t ;
typedef int u32 ;
struct TYPE_5__ {int dma_unknown; int dma_ctrl; } ;
typedef TYPE_2__ stream_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_1(vortex_t * VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11,
                   u32 VAR_12)
{
 stream_t *VAR_13 = &VAR_7->dma_wt[VAR_8];


 VAR_13->dma_unknown = VAR_11;
 VAR_13->dma_ctrl = 0;
 VAR_13->dma_ctrl =
     ((VAR_12 & VAR_5) | (VAR_13->dma_ctrl & ~VAR_5));

 VAR_13->dma_ctrl =
     (VAR_13->dma_ctrl & ~VAR_3) | ((VAR_9 << VAR_4) & VAR_3);

 VAR_13->dma_ctrl |= (1 << VAR_0);

 VAR_13->dma_ctrl =
     (VAR_13->dma_ctrl & VAR_1) | ((VAR_10 << VAR_2) & VAR_1);

 FUNC_0(VAR_7->mmio, VAR_6 + (VAR_8 << 2), VAR_13->dma_ctrl);
}
