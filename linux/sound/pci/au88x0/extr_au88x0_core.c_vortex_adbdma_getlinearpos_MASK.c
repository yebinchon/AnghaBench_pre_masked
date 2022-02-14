
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mmio; TYPE_2__* dma_adb; } ;
typedef TYPE_1__ vortex_t ;
struct TYPE_5__ {int nr_periods; int period_real; int period_virt; int period_bytes; } ;
typedef TYPE_2__ stream_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(vortex_t * VAR_3, int VAR_4)
{
 stream_t *VAR_5 = &VAR_3->dma_adb[VAR_4];
 int VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_0(VAR_3->mmio, VAR_2 + (VAR_4 << 2));
 VAR_7 = (VAR_6 & VAR_0) >> VAR_1;
 if (VAR_5->nr_periods >= 4)
  VAR_8 = (VAR_7 - VAR_5->period_real) & 3;
 else {
  VAR_8 = (VAR_7 - VAR_5->period_real);
  if (VAR_8 < 0)
   VAR_8 += VAR_5->nr_periods;
 }
 return (VAR_5->period_virt + VAR_8) * VAR_5->period_bytes
  + (VAR_6 & (VAR_5->period_bytes - 1));
}
