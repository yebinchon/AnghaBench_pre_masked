
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mmio; TYPE_2__* dma_adb; } ;
typedef TYPE_1__ vortex_t ;
struct TYPE_6__ {int fifo_status; int dma_unknown; int dma_ctrl; } ;
typedef TYPE_2__ stream_t ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int,int ,int,int,int ,int ) ;

__attribute__((used)) static void FUNC_2(vortex_t * VAR_2, int VAR_3)
{
 stream_t *VAR_4 = &VAR_2->dma_adb[VAR_3];

 int VAR_5 = 0, VAR_6 = 0;
 switch (VAR_4->fifo_status) {
 case 129:
  FUNC_1(VAR_2, VAR_3, VAR_4->dma_unknown,
           VAR_6, VAR_5, 0, 0);
  break;
 case 128:
  FUNC_0(VAR_2->mmio, VAR_1 + (VAR_3 << 2),
   VAR_4->dma_ctrl);
  FUNC_1(VAR_2, VAR_3, VAR_4->dma_unknown,
           VAR_6, VAR_5, 0, 0);
  break;
 }
 VAR_4->fifo_status = VAR_0;
}
