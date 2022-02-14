
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hal2_pbus {int ctrl; TYPE_2__* pbus; } ;
struct TYPE_3__ {int desc_dma; struct hal2_pbus pbus; } ;
struct snd_hal2 {TYPE_1__ adc; } ;
struct TYPE_4__ {int pbdma_ctrl; int pbdma_dptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_hal2*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_hal2 *VAR_3)
{
 struct hal2_pbus *VAR_4 = &VAR_3->adc.pbus;

 VAR_4->pbus->pbdma_dptr = VAR_3->adc.desc_dma;
 VAR_4->pbus->pbdma_ctrl = VAR_4->ctrl | VAR_2;

 FUNC_0(VAR_3, VAR_0, VAR_1);
}
