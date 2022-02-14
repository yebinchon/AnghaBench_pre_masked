
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* pbus; } ;
struct TYPE_6__ {TYPE_2__ pbus; } ;
struct snd_hal2 {TYPE_3__ adc; } ;
struct TYPE_4__ {int pbdma_ctrl; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct snd_hal2 *VAR_1)
{
 VAR_1->adc.pbus.pbus->pbdma_ctrl = VAR_0;
}
