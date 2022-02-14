
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* dma_adb; } ;
typedef TYPE_1__ vortex_t ;
struct TYPE_6__ {scalar_t__ fifo_status; scalar_t__ fifo_enabled; int dma_unknown; } ;
typedef TYPE_2__ stream_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int,int ,int,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(vortex_t * VAR_2, int VAR_3)
{
 stream_t *VAR_4 = &VAR_2->dma_adb[VAR_3];

 int VAR_5 = 0, VAR_6 = 0;
 if (VAR_4->fifo_status == VAR_0)
  FUNC_0(VAR_2, VAR_3, VAR_4->dma_unknown,
           VAR_5, VAR_6, 0, 0);
 else if (VAR_4->fifo_status == VAR_1)
  return;
 VAR_4->fifo_status = VAR_1;
 VAR_4->fifo_enabled = 0;
}
